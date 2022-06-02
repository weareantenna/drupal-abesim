<?php
require_once(dirname(__FILE__) . '/../CleantalkHelper.php');

/**
 * @file
 * CleanTalk module admin functions.
 */

/**
 * Cleantalk check users form.
 */
function cleantalk_check_users_form($form, &$form_state) { 
	if (variable_get('cleantalk_authkey', '') != '')
	{
		$rows = array();

		$header = array(
			'spam_user_name' => t('Name'),
			'spam_user_email' => t('E-mail'),
			'spam_user_created' => t('Created'),
			'spam_user_status' => t('Status'),
		);	

		if (!isset($form_state['offset'])) {
			$form_state['offset'] = 0;
		}

		if (isset($form_state['spam_users']))
		{
			foreach ($form_state['spam_users'] as $spam_user) {
				$rows[] = array(
			    	'spam_user_name' => l($spam_user->name, 'user/'.$spam_user->uid),
			    	'spam_user_email' => '<a target="_blank" href = "https://cleantalk.org/blacklists/'.$spam_user->mail.'">'.$spam_user->mail.'</a>',
			    	'spam_user_created' => date("Y-m-d H:i:s", $spam_user->created),
			    	'spam_user_status' => ($spam_user->status == 1) ? 'Active':'Inactive',
			    	'#attributes' => array('user_id' => $spam_user->uid, 'class' => array('cleantalk-spam-users-row')),
				);
			}				
		}

		$form['cleantalk_spam_users']['cleantalk_spam_users_wrapper'] = array(
			'#type' => 'container',
			'#tree' => TRUE,
			'#prefix' => '<div id="cleantalk_spam_users_wrapper">',
			'#suffix' => '</div>',
		);
        $form['cleantalk_spam_users']['cleantalk_spam_users_wrapper']['find_spam_users'] = array(
            '#type' => 'submit',
            '#value' => t('Find spam users'),
            '#submit' => array('find_spam_users_btn'),
            '#ajax' => array(
                 'callback' => 'bulk_find_spam_users_callback',
                 'wrapper' => 'cleantalk_spam_users_wrapper',
            ),
        );
		$form['cleantalk_spam_users']['cleantalk_spam_users_wrapper']['cleantalk_spam_users_table_actions'] = array(
			'#type' => 'select',
			'#title' => t('Actions'),
			'#options' => array(
				1 => t('Delete'),
			),
		);	

		$form['cleantalk_spam_users']['cleantalk_spam_users_wrapper']['cleantalk_spam_users_table'] = array(
		  '#type' => 'tableselect',
		  '#header' => $header,
		  '#options' => $rows,
		  '#empty' => t('No spam users found'),
		  '#attributes' => array('class' => array('cleantalk_spam_users_table')),
		);



		$form['cleantalk_spam_users']['cleantalk_spam_users_wrapper']['submit'] = array(
			'#type' => 'submit',
			'#value' => t('Submit'),				
		);	

		return $form;	

	}
	else drupal_set_message('Access key is not valid.','error');
}

function find_spam_users_btn($form, &$form_state) {
	$check_finished = false;

	while (!$check_finished)
	{
		$accounts = db_select('users', 'u')->fields('u')->range($form_state['offset'], 20)->execute()->fetchAll();
		if (count($accounts) > 0)
		{
			$spam_users = cleantalk_find_spam_users($accounts);
			if (count($spam_users) > 0) {
				$form_state['spam_users'] = $spam_users;
				if (isset($form_state['spam_users']))
					array_unshift($spam_users, $form_state['spam_users'][0]);
			}

			$form_state['offset'] += 20;			
		}
		else $check_finished = true;
	}

	// rebuild whole form with new values
	$form_state['rebuild'] = true;	  
}

function cleantalk_check_users_form_submit($form, &$form_state)
{
	$action = $form_state['values']['cleantalk_spam_users_wrapper']['cleantalk_spam_users_table_actions'];

	$values = array();
	foreach ($form_state['values']['cleantalk_spam_users_wrapper']['cleantalk_spam_users_table'] as $key => $value)
	{
		if (is_string($value))
			$values[] = $form_state['complete form']['cleantalk_spam_users']['cleantalk_spam_users_wrapper']['cleantalk_spam_users_table']['#options'][$value];
	}
	//Delete user
	if ($action == 1)
	{
		foreach ($values as $user)
			user_cancel(array(), $user['#attributes']['user_id'], 'user_cancel_delete');
	}
}

function bulk_find_spam_users_callback($form, &$form_state)
{
	return $form['cleantalk_spam_users']['cleantalk_spam_users_wrapper'];
}

function cleantalk_find_spam_users($accounts)
{
    // Get all accounts
	
	$spam_users=array();

	if ($accounts && count($accounts) > 0)
	{
		$data = array();

	    foreach ($accounts as $account) 
	    {
	        // Skip adding the role to the user if they already have it.
	        if ($account !== FALSE && isset($account->mail)) 
	            array_push($data, $account->mail);
	    }
	    $data = implode(',',$data);
	    $result = CleantalkHelper::api_method__spam_check_cms(trim(variable_get('cleantalk_authkey', '')), $data);

	    if(isset($result['error_message']))
	        drupal_set_message($result['error_message'],'error');
	    else
	    {
			foreach($result as $key => $value)
			{
				if ($value['appears'] == '1' )
				{
					foreach ($accounts as $account)
					{
						if ($account->mail == $key)
							$spam_users[] = $account;
					}
				}              
			}        	
	    }		
	}

    return $spam_users;	
}