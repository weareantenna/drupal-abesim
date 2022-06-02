<?php
require_once(dirname(__FILE__) . '/../CleantalkHelper.php');
require_once(dirname(__FILE__) . '/../CleantalkSFW.php');

/**
 * @file
 * CleanTalk module admin functions.
 */

/**
 * Cleantalk settings form.
 */
function cleantalk_settings_form($form, &$form_state) { 

  //Renew banner
  
  if (variable_get('cleantalk_show_renew_banner', 0)) {

    $link = (variable_get('cleantalk_api_trial', 0)) ? 'https://cleantalk.org/my/bill/recharge?utm_source=banner&utm_medium=wp-backend&utm_campaign=Drupal%20backend%20trial&user_token=' : 'https://cleantalk.org/my/bill/recharge?utm_source=banner&utm_medium=wp-backend&utm_campaign=Drupal%20backend%20renew&user_token=';

    drupal_set_message(t("Cleantalk module trial period ends, please upgrade to <a href='" . $link . variable_get('cleantalk_api_user_token', '') . "' target='_blank'><b>premium version</b></a> ."), 'warning', false);
  }

  $form['cleantalk_authkey'] = array(
    '#type' => 'textfield',
    '#title' => t('Access key'),
    '#size' => 20,
    '#maxlength' => 20,
    '#default_value' => variable_get('cleantalk_authkey', ''),
    '#description' => (variable_get('cleantalk_authkey','')) ? t('Account at cleantalk.org is <b>' . variable_get('cleantalk_api_account_name_ob', '').'</b>') : t('Click <a target="_blank" href="!ct_link">here</a> to get access key.', array('!ct_link' => url('http://cleantalk.org/register?platform=drupal'), )) ,
  );

  $form['cleantalk_comments'] = array(
    '#type' => 'fieldset',
    '#title' => t('Comments'),
  );

  $form['cleantalk_comments']['cleantalk_check_comments'] = array(
    '#type' => 'checkbox',
    '#title' => t('Check comments'),
    '#default_value' => variable_get('cleantalk_check_comments', 1),
    '#description' => t('Enabling this option will allow you to check all comments on your website.'),   
  ); 

  $form['cleantalk_comments']['cleantalk_check_comments_automod'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable automoderation'),
    '#default_value' => variable_get('cleantalk_check_comments_automod', 0),
    '#description' => t('Automatically put suspicious comments which may not be 100% spam to manual approvement and block obvious spam comments.').
    '<br /><span class="admin-disabled">' .
    t('Note: If disabled, all suspicious comments will be automatically blocked!') .
    '</span>', 
    '#states' => array(
        // Only show this field when the value when checking comments is enabled
        'disabled' => array(
            ':input[name="cleantalk_check_comments"]' => array('checked' => FALSE),
        ),
    ),          
  );   

  $form['cleantalk_comments']['cleantalk_check_comments_min_approved'] = array(
    '#type' => 'textfield',
    '#title' => t('Minimum approved comments per registered user'),
    '#size' => 5,
    '#maxlength' => 5,
    '#default_value' => variable_get('cleantalk_check_comments_min_approved', 3),
    '#element_validate' => array('element_validate_integer_positive'),
    '#description' => t('Moderate messages of guests and registered users who have approved messages less than this value (must be more than 0).'),
    '#states' => array(
        // Only show this field when the value when checking comments is enabled
        'disabled' => array(
            ':input[name="cleantalk_check_comments"]' => array('checked' => FALSE),
        ),
    ),    
  );  

  $form['cleantalk_search'] = array(
    '#type' => 'fieldset',
    '#title' => t('Search'),
  );

  $form['cleantalk_search']['cleantalk_check_search_form'] = array(
    '#type' => 'checkbox',
    '#title' => t('Check search form'),
    '#default_value' => variable_get('cleantalk_check_search_form', 1),
    '#description' => t('Enabling this option will allow you to check search form on your website.'),
  );

  $form['cleantalk_search']['cleantalk_add_search_noindex'] = array(
    '#type' => 'checkbox',
    '#title' => t('Add noindex for search form'),
    '#default_value' => variable_get('cleantalk_add_search_noindex', 0),
    '#description' => t('Add html meta-tag robots-noindex to skip index for search form.'), 
  );

  $form['cleantalk_exclusions'] = array(
    '#type' => 'fieldset',
    '#title' => t('Exclusions'),
  );

 // Container URL_EXCLUSIONS
  $form['cleantalk_exclusions']['cleantalk_url_exclusions_fieldset'] = array(
    '#type' => 'fieldset',
    '#title' => t('URL exclusions'),
    '#description' => t('Exclude urls from spam check. List them separated by commas.'),
  );
  $form['cleantalk_exclusions']['cleantalk_url_exclusions_fieldset']['cleantalk_url_exclusions_container_inline'] = array(
    '#type' => 'container',
    '#attributes' => array(
      'class' => array(
        'container-inline'
      ),
    ),
  );
  $form['cleantalk_exclusions']['cleantalk_url_exclusions_fieldset']['cleantalk_url_exclusions_container_inline']['cleantalk_url_exclusions'] = array(
    '#type' => 'textfield',
    '#default_value' => variable_get('cleantalk_url_exclusions', ''),
    '#element_validate' => array('cleantalk_regexp_validation'),
  );
  $form['cleantalk_exclusions']['cleantalk_url_exclusions_fieldset']['cleantalk_url_exclusions_container_inline']['cleantalk_url_exclusions_regexp'] = array(
    '#type' => 'checkbox',
    '#title' => t('RegExp?'),
    '#default_value' => variable_get('cleantalk_url_exclusions_regexp', 0),
  );

  // Container FIELDS_EXCLUSIONS
  $form['cleantalk_exclusions']['cleantalk_fields_exclusions_fieldset'] = array(
    '#type' => 'fieldset',
    '#title' => t('Fields exclusions'),
    '#description' => t('Exclude fields from spam check. List them separated by commas. Works on forms except for registration and comment forms.'),
  );
  $form['cleantalk_exclusions']['cleantalk_fields_exclusions_fieldset']['cleantalk_fields_exclusions_container_inline'] = array(
    '#type' => 'container',
    '#attributes' => array(
      'class' => array(
        'container-inline'
      ),
    ),
  );
  $form['cleantalk_exclusions']['cleantalk_fields_exclusions_fieldset']['cleantalk_fields_exclusions_container_inline']['cleantalk_fields_exclusions'] = array(
    '#type' => 'textfield',
    '#default_value' => variable_get('cleantalk_fields_exclusions', ''),
  );

  // Container ROLES_EXCLUSIONS
  $form['cleantalk_exclusions']['cleantalk_roles_exclusions_fieldset'] = array(
    '#type' => 'fieldset',
    '#title' => t('Roles checking'),
    '#description' => t('Roles which bypass spam test. You can select multiple roles.'),
  );
  $form['cleantalk_exclusions']['cleantalk_roles_exclusions_fieldset']['cleantalk_roles_exclusions_container_inline'] = array(
    '#type' => 'container',
    '#attributes' => array(
      'class' => array(
        'container-inline'
      ),
    ),
  );
  $form['cleantalk_exclusions']['cleantalk_roles_exclusions_fieldset']['cleantalk_roles_exclusions_container_inline']['cleantalk_roles_exclusions'] = array(
    '#type' => 'select',
    '#options' => CleantalkFuncs::cleantalk_get_user_roles(),
    '#multiple' => true,
    '#default_value' => variable_get('cleantalk_roles_exclusions',  CleantalkFuncs::cleantalk_get_user_roles_default()),
  );

  $form['cleantalk_check_register'] = array(
    '#type' => 'checkbox',
    '#title' => t('Check registrations'),
    '#default_value' => variable_get('cleantalk_check_register', 1),
    '#description' => t('Enabling this option will allow you to check all registrations on your website.'),
  );

  $form['cleantalk_check_webforms'] = array(
    '#type' => 'checkbox',
    '#title' => t('Check webforms'),
    '#default_value' => variable_get('cleantalk_check_webforms', 0),
    '#description' => t('Enabling this option will allow you to check all webforms on your website.'),
  );

  $form['cleantalk_check_contact_forms'] = array(
    '#type' => 'checkbox',
    '#title' => t('Check contact forms'),
    '#default_value' => variable_get('cleantalk_check_contact_forms', 1),
    '#description' => t('Enabling this option will allow you to check all contact forms on your website.'),
  );

  $form['cleantalk_check_forum_topics'] = array(
    '#type' => 'checkbox',
    '#title' => t('Check forum topics'),
    '#default_value' => variable_get('cleantalk_check_forum_topics', 0),
    '#description' => t('Enabling this option will allow you to check all forum topics on your website.'),
  );  

  $form['cleantalk_check_ccf'] = array(
    '#type' => 'checkbox',
    '#title' => t('Check custom form'),
    '#default_value' => variable_get('cleantalk_check_ccf', 0),
    '#description' => t('Enabling this option will allow you to check all forms on your website.') .
    '<br /><span class="admin-disabled">' .
      t('Note: May cause conflicts!') .
    '</span>',
  );

  $form['cleantalk_set_cookies'] = array(
      '#type' => 'checkbox',
      '#title' => t('Set cookies'),
      '#default_value' => variable_get('cleantalk_set_cookies', 1),
      '#description' => t('Turn this option off to deny plugin generates any cookies on website front-end. This option is helpful if you use Varnish. But most of contact forms will not be protected if the option is turned off!') . '<br /><span class="admin-disabled">' .
        t('Note: We strongly recommend you to enable this otherwise it could cause false positives spam detection.') .
      '</span>',
  );

  $form['cleantalk_alternative_cookies_session'] = array(
    '#type' => 'checkbox',
    '#title' => t('Use alternative mechanism for cookies'),
    '#default_value' => variable_get('cleantalk_alternative_cookies_session', 0),
    '#description' => t('Doesn\'t use cookie or PHP sessions. Collect data for all types of bots.'),
    '#states' => array(
      // Only show this field when the value when checking comments is enabled
      'invisible' => array(
        ':input[name="cleantalk_set_cookies"]' => array('checked' => FALSE),
      ),
    ),
  );

  $form['cleantalk_sfw'] = array(
    '#type' => 'checkbox',
    '#title' => t('Spam FireWall'),
    '#default_value' => variable_get('cleantalk_sfw', 0),
    '#description' => t('This option allows to filter spam bots before they access website. Also reduces CPU usage on hosting server and accelerates pages load time.'),
  );

  $form['cleantalk_link'] = array(
    '#type' => 'checkbox',
    '#title' => t('Tell others about CleanTalk'),
    '#default_value' => variable_get('cleantalk_link', 0),
    '#description' => t('Checking this box places a small link under the comment form that lets others know what anti-spam tool protects your site.'),
  );

  return system_settings_form($form);
}

function cleantalk_settings_form_validate($form, &$form_state) { 
  if ($form_state['values']['cleantalk_authkey']){
    $cleantalk_auth_key = trim($form_state['values']['cleantalk_authkey']);
    $is_valid = CleantalkHelper::api_method__notice_validate_key($cleantalk_auth_key);

    if (isset($is_valid['valid']) && $is_valid['valid'] == 1)
    {
      CleantalkHelper::api_method_send_empty_feedback($cleantalk_auth_key, CLEANTALK_USER_AGENT);
      $path_to_cms = preg_replace('/http[s]?:\/\//', '', $GLOBALS['base_url'], 1);
      $account_status = CleantalkHelper::api_method__notice_paid_till($cleantalk_auth_key, $path_to_cms);
      if (empty($account_status['error']))
      {
        variable_set('cleantalk_api_show_notice', isset($account_status['show_notice']) ? $account_status['show_notice'] : 0);
        variable_set('cleantalk_api_renew', isset($account_status['renew']) ? $account_status['renew'] : 0);
        variable_set('cleantalk_api_trial', isset($account_status['trial']) ? $account_status['trial'] : 0);
        variable_set('cleantalk_api_user_token', isset($account_status['user_token']) ? $account_status['user_token'] : '');
        variable_set('cleantalk_api_spam_count', isset($account_status['spam_count']) ? $account_status['spam_count'] : 0);
        variable_set('cleantalk_api_moderate_ip', isset($account_status['moderate_ip']) ? $account_status['moderate_ip'] : 0);
        variable_set('cleantalk_api_moderate', isset($account_status['moderate']) ? $account_status['moderate'] : 0);
        variable_set('cleantalk_api_show_review', isset($account_status['show_review']) ? $account_status['show_review'] : 0);
        variable_set('cleantalk_api_service_id', isset($account_status['service_id']) ? $account_status['service_id'] : 0);
        variable_set('cleantalk_api_license_trial', isset($account_status['license_trial']) ? $account_status['license_trial'] : 0);
        variable_set('cleantalk_api_account_name_ob', isset($account_status['account_name_ob']) ? $account_status['account_name_ob'] : '');
        variable_set('cleantalk_api_ip_license', isset($account_status['ip_license']) ? $account_status['ip_license'] : 0);
        variable_set('cleantalk_show_renew_banner', (variable_get('cleantalk_api_show_notice', 0) && variable_get('cleantalk_api_trial',0)) ? 1 : 0);
      }
      if ($form_state['values']['cleantalk_sfw'] === 1)
      {
        $sfw = new CleantalkSFW();
        $sfw->sfw_update($cleantalk_auth_key);
        $sfw->send_logs($cleantalk_auth_key);
        variable_set('cleantalk_sfw_last_logs_sent', time());
        variable_set('cleantalk_sfw_last_updated', time());        
      }
      // Turns off alternative cookies setting if cookies are disabled
      if( 0 == $form_state['values']['cleantalk_set_cookies'] )
      {
        $form_state['values']['cleantalk_alternative_cookies_session'] = 0;
      }
    }
    else
      form_set_error('cleantalk_authkey', t('Access key is not valid.'));
  }
}

/**
 * Validating the URL exclusion string
 *
 * @param $element
 * @param $form_state
 * @param $form
 *
 * @return 'form_error()' or nothing
 */
function cleantalk_regexp_validation($element, &$form_state, $form ) {

  if( $form_state['values']['cleantalk_url_exclusions_regexp'] ) {

    $errors = array();

    if( ! empty( $element['#value'] ) ) {
      $exclusions = explode( ',', $element['#value'] );
      foreach ( $exclusions as $exclusion ){
        $sanitized_exclusion = trim( $exclusion );
        if ( ! empty( $sanitized_exclusion ) ) {
          if( ! apbct_is_regexp( $sanitized_exclusion ) ) {
            $errors[] = $sanitized_exclusion;
          }
        }
      }
    }

    if( ! empty($errors) ) {
      // Remove the variable (setting) from BD if is not valid
      variable_set('cleantalk_url_exclusions', '');
      // And trigger an error
      form_error($element, t('URL exclusions is not valid.') . ' <strong>' . implode( ', ', $errors ) . '<strong>');
    }

  }

}

/**
 * Is this valid regexp
 *
 * @param $regexp
 * @return bool
 */
function apbct_is_regexp($regexp ) {

  return @preg_match( '/' . $regexp . '/', null ) !== false;

}