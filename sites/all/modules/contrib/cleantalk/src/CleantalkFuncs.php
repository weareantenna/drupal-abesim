<?php
require_once(dirname(__FILE__) . '/Cleantalk.php');
require_once(dirname(__FILE__) . '/CleantalkRequest.php');
require_once(dirname(__FILE__) . '/CleantalkHelper.php');
require_once(dirname(__FILE__) . '/CleantalkSFW.php');

/**
 * Cleantalk class create request
 */
class CleantalkFuncs
{

  /*
   * get form submit_time
  */
  static public function _cleantalk_get_submit_time()
  {
    return self::_cleantalk_apbct_cookies_test() == 1 ? time() - (int)self::_apbct_getcookie('apbct_timestamp') : null;
  }

  /*
   * Set Cookies test for cookie test
   * Sets cookies with pararms timestamp && landing_timestamp && pervious_referer
   * Sets test cookie with all other cookies
   */
  static public function _cleantalk_apbct_cookies_set()
  {
    // If Cookies are disabled
    if (!variable_get('cleantalk_set_cookies', 1)) {
      return;
    }
    // If headers were sent
    if (headers_sent()) {
      return;
    }

    // Cookie names to validate
    $cookie_test_value = array(
      'cookies_names' => array(),
      'check_value' => trim(variable_get('cleantalk_authkey', '')),
    );

    // Submit time
    $apbct_timestamp = time();
    // Fix for submit_time = 0
    if(variable_get('cleantalk_alternative_cookies_session', 0)){
      // by database
      $prev_time = self::_apbct_getcookie('apbct_prev_timestamp');
      if(is_null($prev_time)){
        self::_apbct_setcookie('apbct_timestamp', $apbct_timestamp);
        self::_apbct_setcookie('apbct_prev_timestamp', $apbct_timestamp);
        $cookie_test_value['check_value'] .= $apbct_timestamp;
      } else {
        self::_apbct_setcookie('apbct_timestamp', $prev_time);
        self::_apbct_setcookie('apbct_prev_timestamp', $apbct_timestamp);
        $cookie_test_value['check_value'] .= $prev_time;
      }
    } else {
      // by cookies
      self::_apbct_setcookie('apbct_timestamp', $apbct_timestamp);
      $cookie_test_value['check_value'] .= $apbct_timestamp;
    }
    $cookie_test_value['cookies_names'][] = 'apbct_timestamp';
    //Previous referer
    if (!empty($_SERVER['HTTP_REFERER'])) {
      self::_apbct_setcookie('apbct_prev_referer', $_SERVER['HTTP_REFERER']);
      $cookie_test_value['cookies_names'][] = 'apbct_prev_referer';
      $cookie_test_value['check_value'] .= $_SERVER['HTTP_REFERER'];
    }

    // Cookies test
    $cookie_test_value['check_value'] = md5($cookie_test_value['check_value']);
    self::_apbct_setcookie('apbct_cookies_test', json_encode($cookie_test_value));
  }

  /**
   * Save our variables into cookies OR sessions
   *
   * @param $name     string   Name of our variables to save
   * @param $value    string   Value of our variables to save
   */
  static private function _apbct_setcookie($name, $value)
  {
    if (variable_get('cleantalk_alternative_cookies_session', 0)) {

      self::_apbct_alt_sessions__remove_old();

      // Into database
      db_query("INSERT INTO {cleantalk_sessions}
      (id, name, value, last_update)
      VALUES (:id, :name, :value, :last_update)
      ON DUPLICATE KEY UPDATE
      value = :value,
      last_update = :last_update", array(
        ':id' => self::_apbct_alt_session__id__get(),
        ':name' => $name,
        ':value' => $value,
        ':last_update' => date('Y-m-d H:i:s')
      ));

    } else {

      // Into cookies
      setcookie($name, $value, 0, '/');

    }
  }

  /**
   * Get our variables from cookies OR sessions
   *
   * @param $name     string    Name of necessary variable to get
   *
   * @return string|null
   */
  static private function _apbct_getcookie($name)
  {
    if (variable_get('cleantalk_alternative_cookies_session', 0)) {

      // From database
      $value = db_query("SELECT value FROM {cleantalk_sessions} WHERE id = :id AND name = :name",
        array(
          ':id' => self::_apbct_alt_session__id__get(),
          ':name' => $name
        ))->fetchField();
      if (false !== $value) {
        return $value;
      } else {
        return null;
      }

    } else {

      // From cookies
      if (isset($_COOKIE[$name])) {
        return $_COOKIE[$name];
      } else {
        return null;
      }

    }

  }

  /**
   * Clean 'cleantalk_sessions' table
   */
  static private function _apbct_alt_sessions__remove_old()
  {
    if (rand(0, 1000) < APBCT_SESSION__CHANCE_TO_CLEAN) {

      db_query("DELETE
      FROM {cleantalk_sessions}
      WHERE last_update < NOW() - INTERVAL ". APBCT_SESSION__LIVE_TIME ." SECOND
      LIMIT 100000;");

    }
  }

  /**
   * Get hash session ID
   *
   * @return string
   */
  static private function _apbct_alt_session__id__get()
  {
    $id = CleantalkHelper::ip_get(array('real'))
      . filter_input(INPUT_SERVER, 'HTTP_USER_AGENT')
      . filter_input(INPUT_SERVER, 'HTTP_ACCEPT_LANGUAGE');
    return hash('sha256', $id);
  }

  /**
   * Cookie test
   * @return int   1|0
   */
  static public function _cleantalk_apbct_cookies_test()
  {
    if (variable_get('cleantalk_alternative_cookies_session', 0)) {
      return 1;
    }

    $cookie_test = json_decode(stripslashes(self::_apbct_getcookie('apbct_cookies_test')), true);

    if (is_null($cookie_test)) {
      return null;
    }

    $check_string = trim(variable_get('cleantalk_authkey', ''));

    foreach ($cookie_test['cookies_names'] as $cookie_name) {
      $check_string .= self::_apbct_getcookie($cookie_name);
    }
    unset($cokie_name);

    if ($cookie_test['check_value'] == md5($check_string)) {
      return 1;
    } else {
      return 0;
    }
  }

  /*
  * Get data from submit recursively
  */
  static public function _cleantalk_get_fields_any($arr, $message = array(), $email = null, $nickname = array('nick' => '', 'first' => '', 'last' => ''), $subject = null, $contact = true, $prev_name = '')
  {
    //Skip request if fields exists
    $skip_params = array(
      'ipn_track_id',   // PayPal IPN #
      'txn_type',     // PayPal transaction type
      'payment_status',   // PayPal payment status
      'ccbill_ipn',     // CCBill IPN
      'ct_checkjs',     // skip ct_checkjs field
      'api_mode',         // DigiStore-API
      'loadLastCommentId', // Plugin: WP Discuz. ticket_id=5571
    );

    // Fields to replace with ****
    $obfuscate_params = array(
      'password',
      'pass',
      'pwd',
      'pswd'
    );

    // Skip feilds with these strings and known service fields
    $skip_fields_with_strings = array(
      // Common
      'ct_checkjs', //Do not send ct_checkjs
      'nonce', //nonce for strings such as 'rsvp_nonce_name'
      'security',
      // 'action',
      'http_referer',
      'timestamp',
      'captcha',
      // Formidable Form
      'form_key',
      'submit_entry',
      // Custom Contact Forms
      'form_id',
      'ccf_form',
      'form_page',
      // Qu Forms
      'iphorm_uid',
      'form_url',
      'post_id',
      'iphorm_ajax',
      'iphorm_id',
      // Fast SecureContact Froms
      'fs_postonce_1',
      'fscf_submitted',
      'mailto_id',
      'si_contact_action',
      // Ninja Forms
      'formData_id',
      'formData_settings',
      'formData_fields_\d+_id',
      'formData_fields_\d+_files.*',
      // E_signature
      'recipient_signature',
      'output_\d+_\w{0,2}',
      // Contact Form by Web-Settler protection
      '_formId',
      '_returnLink',
      // Social login and more
      '_save',
      '_facebook',
      '_social',
      'user_login-',
      // Contact Form 7
      '_wpcf7',
      'avatar__file_image_data',
      'form_build_id',
      'form_token',
      'op',
      'details_page_num',
      'details_page_count',
      'details_finished',
    );

    if(variable_get('cleantalk_fields_exclusions')) {
      $fields_exclusions = explode(',', variable_get('cleantalk_fields_exclusions'));
      foreach($fields_exclusions as &$fields_exclusion) {
        if( preg_match('/\[*\]/', $fields_exclusion ) ) {
          // I have to do this to support exclusions like 'submitted[name]'
          $fields_exclusion = str_replace( array( '[', ']' ), array( '_', '' ), $fields_exclusion );
        }
      }
      if ($fields_exclusions && is_array($fields_exclusions) && count($fields_exclusions) > 0)
        $skip_fields_with_strings = array_merge($skip_fields_with_strings, $fields_exclusions);
    }

    // Reset $message if we have a sign-up data
    $skip_message_post = array(
      'edd_action', // Easy Digital Downloads
    );

    foreach ($skip_params as $value) {
      if (@array_key_exists($value, $_GET) || @array_key_exists($value, $_POST))
        $contact = false;
    }
    unset($value);

    if (count($arr)) {
      foreach ($arr as $key => $value) {

        if (gettype($value) == 'string') {
          $decoded_json_value = json_decode($value, true);
          if ($decoded_json_value !== null)
            $value = $decoded_json_value;
        }

        if (strpos($key, 'ajax_') !== false)
          continue;

        if (!is_array($value) && !is_object($value)) {

          if (in_array($key, $skip_params, true) && $key != 0 && $key != '' || preg_match("/^ct_checkjs/", $key))
            $contact = false;

          if ($value === '')
            continue;

          // Skipping fields names with strings from (array)skip_fields_with_strings
          foreach ($skip_fields_with_strings as $needle) {
            if (preg_match("/^" . $needle . "$/", $prev_name . $key) == 1) {
              continue(2);
            }
          }
          unset($needle);

          // Obfuscating params
          foreach ($obfuscate_params as $needle) {
            if (strpos($key, $needle) !== false) {
              $value = self::_cleantalk_obfuscate_param($value);
              continue(2);
            }
          }
          unset($needle);

          // Removes whitespaces
          $value = urldecode( trim( $value ) ); // Fully cleaned message
          $value_for_email = trim( $value );    // Removes shortcodes to do better spam filtration on server side.

          // Email
          if ( ! $email && preg_match( "/^\S+@\S+\.\S+$/", $value_for_email ) ) {
            $email = $value_for_email;

            // Names
          } elseif (preg_match("/name/i", $key)) {

            preg_match("/((name.?)?(your|first|for)(.?name)?)$/", $key, $match_forename);
            preg_match("/((name.?)?(last|family|second|sur)(.?name)?)$/", $key, $match_surname);
            preg_match("/^(name.?)?(nick|user)(.?name)?$/", $key, $match_nickname);

            if (count($match_forename) > 1)
              $nickname['first'] = $value;
            elseif (count($match_surname) > 1)
              $nickname['last'] = $value;
            elseif (count($match_nickname) > 1)
              $nickname['nick'] = $value;
            else
              $nickname[$prev_name . $key] = $value;

            // Subject
          } elseif ($subject === null && preg_match("/subject/i", $key)) {
            $subject = $value;

            // Message
          } else {
            $message[$prev_name . $key] = $value;
          }

        } elseif (!is_object($value)) {

          $prev_name_original = $prev_name;
          $prev_name = ($prev_name === '' ? $key . '_' : $prev_name . $key . '_');

          $temp = self::_cleantalk_get_fields_any($value, $message, $email, $nickname, $subject, $contact, $prev_name);

          $message = $temp['message'];
          $email = ($temp['email'] ? $temp['email'] : null);
          $nickname = ($temp['nickname'] ? $temp['nickname'] : null);
          $subject = ($temp['subject'] ? $temp['subject'] : null);
          if ($contact === true)
            $contact = ($temp['contact'] === false ? false : true);
          $prev_name = $prev_name_original;
        }
      }
      unset($key, $value);
    }

    foreach ($skip_message_post as $v) {
      if (isset($_POST[$v])) {
        $message = null;
        break;
      }
    }
    unset($v);

    //If top iteration, returns compiled name field. Example: "Nickname Firtsname Lastname".
    if ($prev_name === '') {
      if (!empty($nickname)) {
        $nickname_str = '';
        foreach ($nickname as $value) {
          $nickname_str .= ($value ? $value . " " : "");
        }
        unset($value);
      }
      $nickname = $nickname_str;
    }

    $return_param = array(
      'email' => $email,
      'nickname' => $nickname,
      'subject' => $subject,
      'contact' => $contact,
      'message' => $message
    );
    return $return_param;

  }

  /**
   * Masks a value with asterisks (*) Needed by the getFieldsAny()
   * @return string
   */
  static public function _cleantalk_obfuscate_param($value = null)
  {
    if ($value && (!is_object($value) || !is_array($value))) {
      $length = strlen($value);
      $value = str_repeat('*', $length);
    }

    return $value;
  }

  /**
   * Cleantalk inner function - show error message and exit.
   */

  static public function _cleantalk_die($message)
  {
    print '<!DOCTYPE html><!-- Ticket #11289, IE bug fix: always pad the error page with enough characters such that it is greater than 512 bytes, even after gzip compression abcdefghijklmnopqrstuvwxyz1234567890aabbccddeeffgghhiijjkkllmmnnooppqqrrssttuuvvwwxxyyzz11223344556677889900abacbcbdcdcededfefegfgfhghgihihjijikjkjlklkmlmlnmnmononpopoqpqprqrqsrsrtstsubcbcdcdedefefgfabcadefbghicjkldmnoepqrfstugvwxhyz1i234j567k890laabmbccnddeoeffpgghqhiirjjksklltmmnunoovppqwqrrxsstytuuzvvw0wxx1yyz2z113223434455666777889890091abc2def3ghi4jkl5mno6pqr7stu8vwx9yz11aab2bcc3dd4ee5ff6gg7hh8ii9j0jk1kl2lmm3nnoo4p5pq6qrr7ss8tt9uuvv0wwx1x2yyzz13aba4cbcb5dcdc6dedfef8egf9gfh0ghg1ihi2hji3jik4jkj5lkl6kml7mln8mnm9ono--><html xmlns="http://www.w3.org/1999/xhtml" lang="en-US"><head>    <meta http-equiv="Content-Type" content="text/html; charset=utf-8" />    <title>Blacklisted</title>    <style type="text/css">        html {            background: #f1f1f1;        }        body {            background: #fff;            color: #444;            font-family: "Open Sans", sans-serif;            margin: 2em auto;            padding: 1em 2em;            max-width: 700px;            -webkit-box-shadow: 0 1px 3px rgba(0,0,0,0.13);            box-shadow: 0 1px 3px rgba(0,0,0,0.13);        }        h1 {            border-bottom: 1px solid #dadada;            clear: both;            color: #666;            font: 24px "Open Sans", sans-serif;            margin: 30px 0 0 0;            padding: 0;            padding-bottom: 7px;        }        #error-page {            margin-top: 50px;        }        #error-page p {            font-size: 14px;            line-height: 1.5;            margin: 25px 0 20px;        }        a {            color: #21759B;            text-decoration: none;        }        a:hover {            color: #D54E21;        }            </style></head><body id="error-page">    <p><center><b style="color: #49C73B;">Clean</b><b style="color: #349ebf;">Talk.</b> Spam protection</center><br><br>' . $message . '<script>setTimeout("history.back()", 5000);</script></p><p><a href="javascript:history.back()">&laquo; Back</a></p></body></html>';
    drupal_exit();
  }

  /**
   * Cleantalk inner function - gets JavaScript checking value.
   */
  static public function _cleantalk_get_checkjs_value()
  {
    return md5(variable_get('cleantalk_authkey', ''));
  }

  /**
   * Cleantalk inner function - performs antispam checking.
   */
  static public function _cleantalk_check_spam($spam_check, $form_errors = null)
  {
    global $user, $cleantalk_executed, $language;

    if (empty($spam_check) || !isset($spam_check['type']))
      return;

    if ($cleantalk_executed)
      return;

    if (user_access('administer modules') && path_is_admin(current_path()))
      return;

    $roles = variable_get('cleantalk_roles_exclusions');

    if ($roles) {

      $set_check = true;

      foreach ($roles as $role_id) {
        if (self::_cleantalk_user_has_role_id($role_id)) {
          $set_check = false;
        }
      }

      if (!$set_check) {
        return;
      }
    }

    // Don't check reged user with >= 'cleantalk_check_comments_min_approved' approved msgs.
    if ($user->uid > 0 && module_exists('comment')) {
      $result = db_query(
        'SELECT count(*) AS count FROM {comment} WHERE uid=:uid AND status=1',
        array(':uid' => $user->uid)
      );
      $count = intval($result->fetchObject()->count);

      $ct_comments = variable_get('cleantalk_check_comments_min_approved', 3);
      if ($count >= $ct_comments)
        return;
    }

    $url_check = true;
    if (variable_get('cleantalk_url_exclusions', '')) {
      $url_exclusion = explode(',', variable_get('cleantalk_url_exclusions', ''));
      if ($url_exclusion && is_array($url_exclusion) && count($url_exclusion) > 0) {
        $check_type = variable_get('cleantalk_url_exclusions_regexp', 0);
        foreach ($url_exclusion as $key => $value) {

          if( $check_type == 1 ) { // If RegExp
            if( @preg_match( '/' . $value . '/', $_SERVER['REQUEST_URI'] ) ) {
              $url_check = false;
            }
          } else {
            if( $_SERVER['SERVER_NAME'] . $_SERVER['REQUEST_URI'] === $value ) { // Simple string checking
              $url_check = false;
            }
          }
          if (strpos($value, 'node') !== false && strpos($_SERVER['REQUEST_URI'], 'q=comment/reply/') !== false) {
            $get_node = array_values(array_slice(explode('/', $value), -1))[0];
            $current_reply_id = array_values(array_slice(explode('/', $_SERVER['REQUEST_URI']), -1))[0];

            if ($get_node == $current_reply_id)
              $url_check = false;
          }
          if (strpos($_SERVER['REQUEST_URI'], $value) !== false)
            $url_check = false;
        }
      }
    }
    if (!$url_check)
      return;


    $ct_authkey = variable_get('cleantalk_authkey', '');
    $ct_ws = self::_cleantalk_get_ws();

    $ct = new Cleantalk();
    $ct->work_url = $ct_ws['work_url'];
    $ct->server_url = $ct_ws['server_url'];
    $ct->server_ttl = $ct_ws['server_ttl'];
    $ct->server_changed = $ct_ws['server_changed'];

    $ct_options = Array(
      'access_key' => $ct_authkey,
      'cleantalk_check_comments' => variable_get('cleantalk_check_comments', ''),
      'cleantalk_check_comments_automod' => variable_get('cleantalk_check_comments_automod', ''),
      'cleantalk_check_comments_min_approved' => variable_get('cleantalk_check_comments_min_approved', 3),
      'cleantalk_check_register' => variable_get('cleantalk_check_register', ''),
      'cleantalk_check_webforms' => variable_get('cleantalk_check_webforms', ''),
      'cleantalk_check_contact_forms' => variable_get('cleantalk_check_contact_forms', ''),
      'cleantalk_check_forum_topics' => variable_get('cleantalk_check_forum_topics', ''),
      'cleantalk_check_ccf' => variable_get('cleantalk_check_ccf', ''),
      'cleantalk_check_search_form' => variable_get('cleantalk_check_search_form', 1),
      'cleantalk_add_search_noindex' => variable_get('cleantalk_add_search_noindex', 0),
      'cleantalk_url_exclusions' => variable_get('cleantalk_url_exclusions', ''),
      'cleantalk_url_exclusions_regexp' => variable_get('cleantalk_url_exclusions_regexp', 0),
      'cleantalk_fields_exclusions' => variable_get('cleantalk_fields_exclusions', ''),
      'cleantalk_roles_exclusions' => variable_get('cleantalk_roles_exclusions') ? implode( ',', variable_get('cleantalk_roles_exclusions')) : '',
      'cleantalk_set_cookies' => variable_get('cleantalk_set_cookies', 1),
      'cleantalk_alternative_cookies_session' => variable_get('cleantalk_alternative_cookies_session', 0),
      'cleantalk_sfw' => variable_get('cleantalk_sfw', ''),
      'cleantalk_ssl' => variable_get('cleantalk_ssl', ''),
      'cleantalk_link' => variable_get('cleantalk_link', ''),
    );

    $ct_request = new CleantalkRequest();
    $ct_request->auth_key = $ct_authkey;
    $ct_request->agent = CLEANTALK_USER_AGENT;
    $ct_request->response_lang = $language->language;
    $ct_request->js_on = (isset($_COOKIE['ct_check_js']) && $_COOKIE['ct_check_js'] == self::_cleantalk_get_checkjs_value()) ? 1 : 0;
    $ct_request->sender_info = drupal_json_encode(
      array(
        'cms_lang' => $language->language,
        'REFFERRER' => isset($_SERVER['HTTP_REFERER']) ? $_SERVER['HTTP_REFERER'] : null,
        'page_url' => isset($_SERVER['SERVER_NAME'], $_SERVER['REQUEST_URI']) ? htmlspecialchars($_SERVER['SERVER_NAME'] . $_SERVER['REQUEST_URI']) : null,
        'USER_AGENT' => isset($_SERVER['HTTP_USER_AGENT']) ? $_SERVER['HTTP_USER_AGENT'] : null,
        'ct_options' => drupal_json_encode($ct_options),
        'js_timezone' => (isset($_COOKIE['ct_timezone']) ? $_COOKIE['ct_timezone'] : ''),
        'mouse_cursor_positions' => (isset($_COOKIE['ct_pointer_data']) ? json_decode($_COOKIE['ct_pointer_data']) : ''),
        'key_press_timestamp' => (isset($_COOKIE['ct_fkp_timestamp']) ? $_COOKIE['ct_fkp_timestamp'] : ''),
        'page_set_timestamp' => (isset($_COOKIE['ct_ps_timestamp']) ? $_COOKIE['ct_ps_timestamp'] : 0),
        'REFFERRER_PREVIOUS' => self::_apbct_getcookie('apbct_prev_referer'),
        'cookies_enabled' => self::_cleantalk_apbct_cookies_test(),
        'form_validation' => ($form_errors && is_array($form_errors)) ? json_encode(array('validation_notice' => json_encode($form_errors), 'page_url' => $_SERVER['HTTP_HOST'] . $_SERVER['REQUEST_URI'])) : null,
      )
    );
    $ct_request->post_info = drupal_json_encode(
      array(
        'comment_type' => $spam_check['type'],
        'post_url' => isset($_SERVER['HTTP_REFERER']) ? $_SERVER['HTTP_REFERER'] : null,
      )
    );
    $ct_request->sender_email = isset($spam_check['sender_email']) ? $spam_check['sender_email'] : '';
    $ct_request->sender_nickname = isset($spam_check['sender_nickname']) ? $spam_check['sender_nickname'] : '';
    $ct_request->sender_user_role = implode( ',', $user->roles);
    $ct_request->sender_ip = CleantalkHelper::ip_get(array('real'), false);
    $ct_request->x_forwarded_for = CleantalkHelper::ip_get(array('x_forwarded_for'), false);
    $ct_request->x_real_ip = CleantalkHelper::ip_get(array('x_real_ip'), false);
    $ct_request->submit_time = self::_cleantalk_get_submit_time();
    if ($spam_check['type'] == 'custom_contact_form' && isset($_SERVER['HTTP_REFERER']) && htmlspecialchars($_SERVER['HTTP_REFERER']) === 'https://www.google.com/') {
      $spam_check['type'] = 'site_search_drupal7';
    }

    switch ($spam_check['type']) {
      case 'comment':
      case 'contact':
      case 'webform':
      case 'custom_contact_form':
      case 'site_search_drupal7':
        $timelabels_key = 'mail_error_comment';
        if (isset($spam_check['message_title']) && is_array($spam_check['message_title']))
          $spam_check['message_title'] = implode("\n\n", $spam_check['message_title']);

        if (isset($spam_check['message_body']) && is_array($spam_check['message_body']))
          $spam_check['message_body'] = implode("\n\n", $spam_check['message_body']);

        $ct_request->message = $spam_check['message_title'] . " \n\n" .
          preg_replace('/\s+/', ' ', str_replace("<br />", " ", $spam_check['message_body']));

        $ct_result = $ct->isAllowMessage($ct_request);
        break;

      case 'register':
        $timelabels_key = 'mail_error_reg';
        $ct_request->tz = !empty($spam_check['timezone']) ? $spam_check['timezone'] : '';

        // Set JS test enabled if REST API request
        if (arg(0) != 'user')
          $ct_request->js_on = 1;

        $ct_result = $ct->isAllowUser($ct_request);
        break;

    }
    $cleantalk_executed = true;

    $ret_val = array();

    if ($ct_result) {
      $ret_val['ct_request_id'] = $ct_result->id;

      if ($ct->server_change)
        self::_cleantalk_set_ws($ct->work_url, $ct->server_ttl, REQUEST_TIME);

      // First check errstr flag.
      if (!empty($ct_result->errstr) || (!empty($ct_result->inactive) && $ct_result->inactive == 1)) {
        // Cleantalk error so we go default way (no action at all).
        $ret_val['errno'] = 1;
        if ($ct_request->js_on == 0)
          $ret_val['allow'] = 0;

        // Just inform admin.
        $err_title = $_SERVER['SERVER_NAME'] . ' - CleanTalk hook error';

        if (!empty($ct_result->errstr))
          $ret_val['errstr'] = self::_cleantalk_filter_response($ct_result->errstr);
        else
          $ret_val['errstr'] = self::_cleantalk_filter_response($ct_result->comment);

        $send_flag = FALSE;

        $result = db_select('cleantalk_timelabels', 'c')
          ->fields('c', array('ct_value'))
          ->condition('ct_key', $timelabels_key, '=')
          ->execute();
        if ($result->rowCount() == 0)
          $send_flag = TRUE;
        elseif (REQUEST_TIME - 900 > $result->fetchObject()->ct_value)
          $send_flag = TRUE;


        if ($send_flag) {
          db_merge('cleantalk_timelabels')
            ->key(array(
              'ct_key' => $timelabels_key,
            ))
            ->fields(array(
              'ct_value' => REQUEST_TIME,
            ))
            ->execute();

          $to = variable_get('site_mail', ini_get('sendmail_from'));
          if (!empty($to)) {
            drupal_mail("cleantalk", $timelabels_key, $to, language_default(), array(
              'subject' => $err_title,
              'body' => $ret_val['errstr'],
              'headers' => array(),
            ),
              $to,
              TRUE
            );
          }
        }
        return $ret_val;
      }

      $ret_val['errno'] = 0;

      if ($ct_result->allow == 1) {
        // Not spammer.
        $ret_val['allow'] = 1;
        // Store request_id in globals to store it in DB later.
        self::_cleantalk_ct_result('set', $ct_result->id, $ret_val['allow']);
        // Don't store 'ct_result_comment', means good comment.
      } else {
        // Spammer.
        $ret_val['allow'] = 0;
        $ret_val['ct_result_comment'] = self::_cleantalk_filter_response($ct_result->comment);

        // Check stop_queue flag.
        if ($spam_check['type'] == 'comment') {
          // Store request_id and comment in static to store them in DB later.
          // Store 'ct_result_comment' - means bad comment.
          self::_cleantalk_ct_result('set', $ct_result->id, $ret_val['allow'], $ret_val['ct_result_comment']);
          $ret_val['stop_queue'] = $ct_result->stop_queue;
        }
      }
    }

    return $ret_val;
  }

  /**
   * Cleantalk inner function - performs CleanTalk comment|errstr filtering.
   */
  static public function _cleantalk_filter_response($ct_response)
  {
    if (preg_match('//u', $ct_response))
      $err_str = preg_replace('/\*\*\*/iu', '', $ct_response);
    else
      $err_str = preg_replace('/\*\*\*/i', '', $ct_response);

    return filter_xss($err_str, array('a'));
  }

  /**
   * Cleantalk inner function - stores spam checking result.
   */
  static public function _cleantalk_ct_result($cmd = 'get', $id = '', $allow = 1, $comment = '')
  {
    static $request_id = '';
    static $result_allow = 1;
    static $result_comment = '';

    if ($cmd == 'set') {
      $request_id = $id;
      $result_allow = $allow;
      $result_comment = $comment;
    } else {
      return array(
        'ct_request_id' => $request_id,
        'ct_result_allow' => $result_allow,
        'ct_result_comment' => $result_comment,
      );
    }
  }

  /**
   * Cleantalk inner function - gets working server.
   */
  static public function _cleantalk_get_ws()
  {
    return array(
      'work_url' => variable_get('cleantalk_work_url', ''),
      'server_url' => variable_get('cleantalk_server_url', 'http://moderate.cleantalk.org'),
      'server_ttl' => variable_get('cleantalk_server_ttl', 0),
      'server_changed' => variable_get('cleantalk_server_changed', 0),
    );
  }

  /**
   * Cleantalk inner function - sets working server.
   */
  static public function _cleantalk_set_ws($work_url = 'http://moderate.cleantalk.org', $server_ttl = 0, $server_changed = 0)
  {
    variable_set('cleantalk_work_url', $work_url);
    variable_set('cleantalk_server_ttl', $server_ttl);
    variable_set('cleantalk_server_changed', $server_changed);
  }

  /**
   * Cleantalk inner function - check form handlers for save to prevent checking drafts/preview.
   */
  static public function _cleantalk_check_form_submit_handlers($submitHandlers)
  {
    if ($submitHandlers && is_array($submitHandlers)) {
      foreach ($submitHandlers as $handler)
        if ($handler === 'submit')
          return true;
    }
    return false;

  }

  static public function _cleantalk_user_has_role_id($role_id, $user = NULL)
  {
    if ($user == NULL) {
      global $user;
    }
    if (is_array($user->roles) && in_array($role_id, array_keys($user->roles))) {
      return TRUE;
    }

    return FALSE;
  }

  public static function cleantalk_get_user_roles() {
    $roles = user_roles();
    asort($roles);
    return $roles;
  }

  public static function cleantalk_get_user_roles_default() {
    $roles = self::cleantalk_get_user_roles();
    foreach( $roles as $role_id => $role_name ) {
      if(strpos('administrator', $role_name) === false) {
        unset( $roles[$role_id] );
      }
    }
    return $default_roles = array_keys($roles);
  }

  /**
   * Cleantalk inner function - perform remote call
   */
  static public function _cleantalk_apbct_remote_call__perform()
  {

    $remote_calls_config = variable_get('cleantalk_remote_calls', array());
    $remote_action = $_GET['spbc_remote_call_action'];
    $auth_key = trim(variable_get('cleantalk_authkey', ''));

    if (array_key_exists($remote_action, $remote_calls_config)) {

      if (time() - $remote_calls_config[$remote_action]['last_call'] > APBCT_REMOTE_CALL_SLEEP) {
        $remote_calls[$remote_action]['last_call'] = time();
        variable_set('remote_calls', $remote_calls);

        if (strtolower($_GET['spbc_remote_call_token']) == strtolower(md5($auth_key))) {

          // Close renew banner
          if ($_GET['spbc_remote_call_action'] == 'close_renew_banner') {
            variable_set('cleantalk_show_renew_banner', 0);
            die('OK');
            // SFW update
          } elseif ($_GET['spbc_remote_call_action'] == 'sfw_update') {
            $sfw = new CleantalkSFW();
            $result = $sfw->sfw_update($auth_key);
            die(empty($result['error']) ? 'OK' : 'FAIL ' . json_encode(array('error' => $result['error_string'])));
            // SFW send logs
          } elseif ($_GET['spbc_remote_call_action'] == 'sfw_send_logs') {
            $sfw = new CleantalkSFW();
            $result = $sfw->sfw_send_logs($auth_key);
            die(empty($result['error']) ? 'OK' : 'FAIL ' . json_encode(array('error' => $result['error_string'])));
            // Update plugin
          } elseif ($_GET['spbc_remote_call_action'] == 'update_plugin') {
            //add_action('wp', 'apbct_update', 1);
          } else
            die('FAIL ' . json_encode(array('error' => 'UNKNOWN_ACTION_2')));
        } else
          die('FAIL ' . json_encode(array('error' => 'WRONG_TOKEN')));
      } else
        die('FAIL ' . json_encode(array('error' => 'TOO_MANY_ATTEMPTS')));
    } else
      die('FAIL ' . json_encode(array('error' => 'UNKNOWN_ACTION')));

  }
}
