<?php
require_once(dirname(__FILE__) . '/CleantalkHelper.php');

/*
 * CleanTalk SpamFireWall base class
 * Compatible only with Wordpress.
 * Version 2.0-wp
 * author Cleantalk team (welcome@cleantalk.org)
 * copyright (C) 2014 CleanTalk team (http://cleantalk.org)
 * license GNU/GPL: http://www.gnu.org/copyleft/gpl.html
 * see https://github.com/CleanTalk/php-antispam
*/

class CleantalkSFW extends CleantalkHelper {

	public $ip = 0;
	public $ip_str = '';
	public $ip_array = Array();
	public $ip_str_array = Array();
	public $blocked_ip = '';
	public $blocked_network = '';
	public $passed_ip = '';
	public $result = false;
	
	//Database variables

	private $db_result_data = array();
	
	public function __construct() {

		//$this->db = \Drupal::database();

	}
	
	/*
	*	Getting arrays of IP (REMOTE_ADDR, X-Forwarded-For, X-Real-Ip, Cf_Connecting_Ip)
	*	reutrns array('remote_addr' => 'val', ['x_forwarded_for' => 'val', ['x_real_ip' => 'val', ['cloud_flare' => 'val']]])
	*/

	static public function ip_get($ips_input = array('real', 'remote_addr', 'x_forwarded_for', 'x_real_ip', 'cloud_flare'), $v4_only = true) {
		
		$result = (array)parent::ip_get($ips_input, $v4_only);
		
		$result = !empty($result) ? $result : array();
		
		if (isset($_GET['sfw_test_ip'])) {

			if (self::ip_validate($_GET['sfw_test_ip']) !== false) {

				$result['sfw_test'] = $_GET['sfw_test_ip'];

			}
		}
		
		return $result;
		
	}
	
	/*
	*	Checks IP via Database
	*/

	public function check_ip() {
		
		foreach($this->ip_array as $current_ip){

			$this->db_result_data = db_query('SELECT network FROM {cleantalk_sfw} WHERE network = :network & mask', array(':network' => sprintf("%u", ip2long($current_ip))))->fetchField();
			
			if (!empty($this->db_result_data)) {

				$this->result = true;
				$this->blocked_ip = $current_ip;
				$this->blocked_network = $this->db_result_data;

			}

			else {

				$this->passed_ip = $current_ip;

			}
		}
	}
		
	/*
	*	Add entry to SFW log
	*/

	public function sfw_update_logs($ip, $result){
		
		if($ip === NULL || $result === NULL) {

			return;

		}
		
		db_merge('cleantalk_sfw_logs')->key(array('ip' => $ip))->fields(array('ip' => $ip, 'all_entries' => 1, 'blocked_entries' => 1, 'entries_timestamp' => time()))->expression('all_entries', 'all_entries + :inc', array(':inc' => 1))->expression('blocked_entries', 'blocked_entries + :inc', array(':inc' => 1))->expression('entries_timestamp', time())->execute();
	}
	
	/*
	* Updates SFW local base
	* 
	* return mixed true || array('error' => true, 'error_string' => STRING)
	*/

	public function sfw_update($ct_key){
		
		$result = self::api_method__get_2s_blacklists_db($ct_key);
		
		if (empty($result['error'])) {

			db_truncate('cleantalk_sfw')->execute();
						
			// Cast result to int

			foreach ($result as $value) {

				$value[0] = intval($value[0]);
				$value[1] = intval($value[1]);

			} 

			unset($value);
			$values = array();

			for ($i=0, $arr_count = count($result); $i < $arr_count; $i++) {

				$values[] = array('network' => $result[$i][0], 'mask' => $result[$i][1]);

			}

			if (count($values) > 0) {

				$query = db_insert('cleantalk_sfw')->fields(['network', 'mask']);

				foreach ($values as $record) {

					$query->values($record);

				}
				$query->execute();

			}
			
			return true;
			
		}

		else {

			return $result;

		}
	}
	
	/*
	* Sends and wipe SFW log
	* 
	* returns mixed true || array('error' => true, 'error_string' => STRING)
	*/

	public function send_logs($ct_key) {
		
		//Getting logs

		$this->db_result_data = db_query('SELECT * FROM {cleantalk_sfw_logs}')->fetchAll();

		if (count($this->db_result_data)) {
			
			//Compile logs

			$data = array();

			foreach($this->db_result_data as $key => $value) {

				$data[] = array(trim($value->ip), $value->all_entries, $value->all_entries-$value->blocked_entries, $value->entries_timestamp);

			}

			unset($key, $value);
			
			//Sending the request

			$result = self::api_method__sfw_logs($ct_key, $data);
			
			//Checking answer and deleting all lines from the table

			if(empty($result['error'])) {

				if($result['rows'] == count($data)) {

					db_truncate('cleantalk_sfw_logs')->execute();
					return true;

				}
			}

			else {

				return $result;

			}
				
		}

		else {

			return array('error' => true, 'error_string' => 'NO_LOGS_TO_SEND');

		}
	}
	
	/*
	* Shows DIE page
	* 
	* Stops script executing
	*/	
	public function sfw_die($api_key, $cookie_prefix = '', $cookie_domain = ''){
		
		// File exists?
		if(file_exists(dirname(__FILE__)."/sfw_die_page.html")){
			$sfw_die_page = file_get_contents(dirname(__FILE__)."/sfw_die_page.html");
		}else{
			print "IP BLACKLISTED";
			die();
		}
		
		// Service info
		$sfw_die_page = str_replace('{REMOTE_ADDRESS}', $this->blocked_ip, $sfw_die_page);
		$sfw_die_page = str_replace('{REQUEST_URI}', $_SERVER['REQUEST_URI'], $sfw_die_page);
		$sfw_die_page = str_replace('{SFW_COOKIE}', md5($this->blocked_ip.$api_key), $sfw_die_page);
		
		// Headers
		if(headers_sent() === false){
			header('Expires: '.date(DATE_RFC822, mktime(0, 0, 0, 1, 1, 1971)));
			header('Cache-Control: no-store, no-cache, must-revalidate');
			header('Cache-Control: post-check=0, pre-check=0', FALSE);
			header('Pragma: no-cache');
			header("HTTP/1.0 403 Forbidden");
			$sfw_die_page = str_replace('{GENERATED}', "", $sfw_die_page);
		}else{
			$sfw_die_page = str_replace('{GENERATED}', "<h2 class='second'>The page was generated at&nbsp;".date("D, d M Y H:i:s")."</h2>",$sfw_die_page);
		}

		print $sfw_die_page;
		die();
		
	}
}
