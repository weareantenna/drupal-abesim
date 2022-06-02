<?php

/**
 * Cleantalk's hepler class
 * 
 * Mostly contains request's wrappers.
 *
 * @version 2.4
 * @package Cleantalk
 * @subpackage Helper
 * @author Cleantalk team (welcome@cleantalk.org)
 * @copyright (C) 2014 CleanTalk team (http://cleantalk.org)
 * @license GNU/GPL: http://www.gnu.org/copyleft/gpl.html
 * @see https://github.com/CleanTalk/php-antispam 
 *
 */

class CleantalkHelper
{
	const URL = 'https://api.cleantalk.org';
	
	public static $private_networks = array(
		'v4' => array(
			'10.0.0.0/8',
			'100.64.0.0/10',
			'172.16.0.0/12',
			'192.168.0.0/16',
			'127.0.0.1/32',
		),
		'v6' => array(
			'0:0:0:0:0:0:0:1/128', // localhost
			'0:0:0:0:0:0:a:1/128', // ::ffff:127.0.0.1
		),
	);
	
	/*
	*	Getting arrays of IP (REMOTE_ADDR, X-Forwarded-For, X-Real-Ip, Cf_Connecting_Ip)
	*	reutrns array('remote_addr' => 'val', ['x_forwarded_for' => 'val', ['x_real_ip' => 'val', ['cloud_flare' => 'val']]])
	*/
	static public function ip_get($ip_types = array('real', 'remote_addr', 'x_forwarded_for', 'x_real_ip', 'cloud_flare'), $v4_only = true)
	{
		$ips = array_flip($ip_types);				

		$headers = function_exists('apache_request_headers') ? apache_request_headers() : self::apache_request_headers();
		
		// REMOTE_ADDR
		if(isset($ips['remote_addr'])){
			$ip_type = self::ip_validate($_SERVER['REMOTE_ADDR']);
			if($ip_type){
				$ips['remote_addr'] = $ip_type == 'v6' ? self::ip_v6_normalize($_SERVER['REMOTE_ADDR']) : $_SERVER['REMOTE_ADDR'];
			}			
		}
		
		// X-Forwarded-For
		if(isset($ips['x_forwarded_for'])){
			if(isset($headers['X-Forwarded-For'])){
				$tmp = explode(",", trim($headers['X-Forwarded-For']));
				$tmp = trim($tmp[0]);
				$ip_type = self::ip_validate($tmp);
				if($ip_type){
					$ips['x_forwarded_for'] = $ip_type == 'v6' ? self::ip_v6_normalize($tmp) : $tmp;
				}
			}
		}
		
		// X-Real-Ip
		if(isset($ips['x_real_ip'])){
			if(isset($headers['X-Real-Ip'])){
				$tmp = explode(",", trim($headers['X-Real-Ip']));
				$tmp = trim($tmp[0]);
				$ip_type = self::ip_validate($tmp);
				if($ip_type){
					$ips['x_forwarded_for'] = $ip_type == 'v6' ? self::ip_v6_normalize($tmp) : $tmp;
				}
			}
		}
		
		// Cloud Flare
		if(isset($ips['cloud_flare'])){
			if(isset($headers['CF-Connecting-IP'], $headers['CF-IPCountry'], $headers['CF-RAY']) || isset($headers['Cf-Connecting-Ip'], $headers['Cf-Ipcountry'], $headers['Cf-Ray'])){
				$tmp = isset($headers['CF-Connecting-IP']) ? $headers['CF-Connecting-IP'] : $headers['Cf-Connecting-Ip'];
				$tmp = strpos($tmp, ',') !== false ? explode(',', $tmp) : (array)$tmp;
				$ip_type = self::ip_validate(trim($tmp[0]));
				if($ip_type){
						$ips['real'] = $ip_type == 'v6' ? self::ip_v6_normalize(trim($tmp[0])) : trim($tmp[0]);
				}
			}
		}
		
		// Getting real IP from REMOTE_ADDR or Cf_Connecting_Ip if set or from (X-Forwarded-For, X-Real-Ip) if REMOTE_ADDR is local.
		if(isset($ips['real'])){

			$ip_type = self::ip_validate($_SERVER['REMOTE_ADDR']);

			if($ip_type)
				$ips['real'] = $ip_type == 'v6' ? self::ip_v6_normalize($_SERVER['REMOTE_ADDR']) : $_SERVER['REMOTE_ADDR'];
			
			// Cloud Flare
			if(isset($headers['Cf-Connecting-Ip'], $headers['Cf-Ipcountry'], $headers['Cf-Ray'])){
				$ip_type = self::ip_validate($headers['Cf-Connecting-Ip']);
				if($ip_type)
					$ips['real'] = $ip_type == 'v6' ? self::ip_v6_normalize($headers['Cf-Connecting-Ip']) : $headers['Cf-Connecting-Ip'];
				
			// Sucury
			}elseif(isset($headers['X-Sucuri-Clientip'], $headers['X-Sucuri-Country'])){
				$ip_type = self::ip_validate($headers['X-Sucuri-Clientip']);
				if($ip_type)
					$ips['real'] = $ip_type == 'v6' ? self::ip_v6_normalize($headers['X-Sucuri-Clientip']) : $headers['X-Sucuri-Clientip'];
				
			// OVH
			}elseif(isset($headers['X-Cdn-Any-Ip'], $headers['Remote-Ip'])){
				$ip_type = self::ip_validate($headers['X-Cdn-Any-Ip']);
				if($ip_type)
					$ips['real'] = $ip_type == 'v6' ? self::ip_v6_normalize($headers['X-Cdn-Any-Ip']) : $headers['X-Cdn-Any-Ip'];
			
			// Incapsula proxy
			}elseif(isset($headers['Incap-Client-Ip'])){
				$ip_type = self::ip_validate($headers['Incap-Client-Ip']);
				if($ip_type)
					$ips['real'] = $ip_type == 'v6' ? self::ip_v6_normalize($headers['Incap-Client-Ip']) : $headers['Incap-Client-Ip'];
			}

			// Is private network
			if($ip_type === false || ($ip_type && (self::ip_is_private_network($ips['real'], $ip_type)) || (self::ip_mask_match($ips['real'], filter_input(INPUT_SERVER, 'SERVER_ADDR').'/24', $ip_type)))){
				
				// X-Forwarded-For
				if(isset($headers['X-Forwarded-For'])){
					$tmp = explode(",", trim($headers['X-Forwarded-For']));
					$tmp = trim($tmp[0]);
					$ip_type = self::ip_validate($tmp);
					if($ip_type)
						$ips['real'] = $ip_type == 'v6' ? self::ip_v6_normalize($tmp) : $tmp;
				
				// X-Real-Ip
				}elseif(isset($headers['X-Real-Ip'])){
					$tmp = explode(",", trim($headers['X-Real-Ip']));
					$tmp = trim($tmp[0]);
					$ip_type = self::ip_validate($tmp);
					if($ip_type)
						$ips['real'] = $ip_type == 'v6' ? self::ip_v6_normalize($tmp) : $tmp;
				}
			}			
		}
		
		// Validating IPs
		$result = array();
		foreach($ips as $key => $ip){
			$ip_version = self::ip_validate($ip);
			if($ip && (($v4_only && $ip_version == 'v4') || !$v4_only)){
				$result[$key] = $ip;
			}
		}
		
		$result = array_unique($result);
		return count($result) > 1 
			? $result
			: (reset($result) !== false
				? reset($result)
				: null);
	}
		
	/*
	 * Check if the IP belong to mask. Recursivly if array given
	 * @param ip string  
	 * @param cird mixed (string|array of strings)
	*/
	static public function ip_mask_match($ip, $cidr, $ip_type = 'v4', $xtet_count = 0){

		if(is_array($cidr)){
			foreach($cidr as $curr_mask){
				if(self::ip_mask_match($ip, $curr_mask, $ip_type)){
					return true;
				}
			} unset($curr_mask);
			return false;
		}
		
		if($ip_type == 'v4') $xtet_base = 8;
		if($ip_type == 'v6') $xtet_base = 16;
		
		// Calculate mask
		$exploded = explode('/', $cidr);
		$net_ip = $exploded[0];
		$mask   = $exploded[1];
		
		// Exit condition
		$xtet_end = ceil($mask / $xtet_base);
		if($xtet_count == $xtet_end)
			return true;
		
		// Lenght of bits for comparsion
		$mask = $mask - $xtet_base * $xtet_count >= $xtet_base ? $xtet_base : $mask - $xtet_base * $xtet_count;
		
		// Explode by octets/hextets from IP and Net
		$net_ip_xtets = explode($ip_type == 'v4' ? '.' : ':', $net_ip);
		$ip_xtets     = explode($ip_type == 'v4' ? '.' : ':', $ip);
		
		// Standartizing. Getting current octets/hextets. Adding leading zeros. 
		$net_xtet = str_pad(decbin($ip_type == 'v4' ? $net_ip_xtets[$xtet_count]  : hexdec($net_ip_xtets[$xtet_count])), $xtet_base, 0, STR_PAD_LEFT);
		$ip_xtet  = str_pad(decbin($ip_type == 'v4' ? $ip_xtets[$xtet_count]      : hexdec($ip_xtets[$xtet_count])),     $xtet_base, 0, STR_PAD_LEFT);
		
		// Comparing bit by bit
		for($i = 0, $result = true; $mask != 0; $mask--, $i++ ){
			if($ip_xtet[$i] != $net_xtet[$i]){
				$result = false;
				break;
			}
		}
		
		// Recursing. Moving to next octet/hextet.
		if($result)
			$result = self::ip_mask_match($ip, $cidr, $ip_type, $xtet_count + 1);
		
		return $result;
	}
	
	/*
	*	Validating IPv4, IPv6
	*	param (string) $ip
	*	returns (string) 'v4' || (string) 'v6' || (bool) false
	*/
	static public function ip_validate($ip)
	{
		if(!$ip)                                                                                        return false; // NULL || FALSE || '' || so on...
		if(filter_var($ip, FILTER_VALIDATE_IP, FILTER_FLAG_IPV4) && $ip != '0.0.0.0')                   return 'v4';  // IPv4
		if(filter_var($ip, FILTER_VALIDATE_IP, FILTER_FLAG_IPV6) && self::ip_v6_reduce($ip) != '0::0')  return 'v6';  // IPv6
		                                                                                                return false; // Unknown
	}

	/**
	 * Reduce IPv6
	 * param (string) $ip
	 * returns (string) IPv6
	 */
	static public function ip_v6_reduce($ip){
		if(strpos($ip, ':') !== false){
			$ip = preg_replace('/:0{1,4}/', ':',  $ip);
			$ip = preg_replace('/:{2,}/',   '::', $ip);
			$ip = strpos($ip, '0') === 0 ? substr($ip, 1) : $ip;
		}
		return $ip;
	}	

	/**
	 * Expand IPv6
	 * param (string) $ip
	 * returns (string) IPv6
	 */
	static public function ip_v6_normalize($ip)
	{
		$ip = trim($ip);
		// Searching for ::ffff:xx.xx.xx.xx patterns and turn it to IPv6
		if(preg_match('/^::ffff:([0-9]{1,3}\.?){4}$/', $ip)){
			$ip = dechex(sprintf("%u", ip2long(substr($ip, 7))));
			$ip = '0:0:0:0:0:0:'.(strlen($ip) > 4 ? substr('abcde', 0, -4) : '0').':'.substr($ip, -4, 4);
		// Normalizing hextets number
		}elseif(strpos($ip, '::') !== false){
			$ip = str_replace('::', str_repeat(':0', 8 - substr_count($ip, ':')).':', $ip);
			$ip = strpos($ip, ':') === 0 ? '0'.$ip : $ip;
			$ip = strpos(strrev($ip), ':') === 0 ? $ip.'0' : $ip;
		}
		// Simplifyng hextets
		if(preg_match('/:0(?=[a-z0-9]+)/', $ip)){
			$ip = preg_replace('/:0(?=[a-z0-9]+)/', ':', strtolower($ip));
			$ip = self::ip_v6_normalize($ip);
		}
		return $ip;
	}

	/*
	* Wrapper for sfw_logs API method
	* 
	* returns mixed STRING || array('error' => true, 'error_string' => STRING)
	*/
	static public function api_method__sfw_logs($api_key, $data, $do_check = true){
		
		$request = array(
			'auth_key' => $api_key,
			'method_name' => 'sfw_logs',
			'data' => json_encode($data),
			'rows' => count($data),
			'timestamp' => time()
		);
		$result = self::api_send_request($request);
		$result = $do_check ? self::api_check_response($result, 'sfw_logs') : $result;
		
		return $result;
	}
	
	/*
	* Wrapper for 2s_blacklists_db API method
	* 
	* returns mixed STRING || array('error' => true, 'error_string' => STRING)
	*/
	static public function api_method__get_2s_blacklists_db($api_key, $do_check = true){
		
		$request = array(
			'method_name' => '2s_blacklists_db',
			'auth_key' => $api_key,			
		);
		
		$result = self::api_send_request($request);
		$result = $do_check ? self::api_check_response($result, '2s_blacklists_db') : $result;
		
		return $result;
	}

	static function ip_is_private_network($ip, $ip_type = 'v4'){
		return self::ip_mask_match($ip, self::$private_networks[$ip_type], $ip_type);
	}

	/**
	 * Function gets access key automatically
	 *
	 * @param string website admin email
	 * @param string website host
	 * @param string website platform
	 * @return type
	 */
	static public function api_method__get_api_key($email, $host, $platform, $agent = null, $timezone = null, $language = null, $ip = null, $do_check = true)
	{		
		$request = array(
			'method_name'          => 'get_api_key',
			'product_name'         => 'antispam',
			'email'                => $email,
			'website'              => $host,
			'platform'             => $platform,
			'agent'                => $agent,			
			'timezone'             => $timezone,
			'http_accept_language' => !empty($_SERVER['HTTP_ACCEPT_LANGUAGE']) ? $_SERVER['HTTP_ACCEPT_LANGUAGE'] : null,
			'user_ip'              => $ip ? $ip : self::ip_get(array('real'), false),
		);
		
		$result = self::api_send_request($request);
		// $result = $do_check ? self::api_check_response($result, 'get_api_key') : $result;
		
		return $result;
	}
	
	/**
	 * Function gets information about renew notice
	 *
	 * @param string api_key
	 * @return type
	 */
	static public function api_method__notice_validate_key($api_key, $do_check = true)
	{
		$request = array(
			'method_name' => 'notice_validate_key',
			'auth_key' => $api_key,		
		);
		
		$result = self::api_send_request($request);
		$result = $do_check ? self::api_check_response($result, 'notice_validate_key') : $result;
		
		return $result;
	}
	
	/**
	 * Function gets information about renew notice
	 *
	 * @param string api_key
	 * @return type
	 */
	static public function api_method__notice_paid_till($api_key, $path_to_cms, $do_check = true)
	{
		$request = array(
			'method_name' => 'notice_paid_till',
      'path_to_cms' => $path_to_cms,
			'auth_key' => $api_key,
		);
		
		$result = self::api_send_request($request);
		$result = $do_check ? self::api_check_response($result, 'notice_paid_till') : $result;
		
		return $result;
	}

	/**
	 * Function gets spam report
	 *
	 * @param string website host
	 * @param integer report days
	 * @return type
	 */
	static public function api_method__get_antispam_report($host, $period = 1)
	{
		$request=Array(
			'method_name' => 'get_antispam_report',
			'hostname' => $host,
			'period' => $period,
		);
		
		$result = self::api_send_request($request);
		// $result = $do_check ? self::api_check_response($result, 'get_antispam_report') : $result;
		
		return $result;
	}

	/**
	 * Function gets information about account
	 *
	 * @param string api_key
	 * @param string perform check flag
	 * @return mixed (STRING || array('error' => true, 'error_string' => STRING))
	 */
	static public function api_method__get_account_status($api_key, $do_check = true)
	{
		$request = array(
			'method_name' => 'get_account_status',
			'auth_key' => $api_key
		);
		
		$result = self::api_send_request($request);
		$result = $do_check ? self::api_check_response($result, 'get_account_status') : $result;
		
		return $result;
	}

	/**
	 * Function gets spam statistics
	 *
	 * @param string website host
	 * @param integer report days
	 * @return type
	 */
	static public function api_method__get_antispam_report_breif($api_key, $do_check = true)
	{
		
		$request = array(
			'method_name' => 'get_antispam_report_breif',
			'auth_key' => $api_key,		
		);
		
		$result = self::api_send_request($request);
		$result = $do_check ? self::api_check_response($result, 'get_antispam_report_breif') : $result;
		
		$tmp = array();
		for( $i = 0; $i < 7; $i++ )
			$tmp[ date( 'Y-m-d', time() - 86400 * 7 + 86400 * $i ) ] = 0;
		
		$result['spam_stat']    = array_merge( $tmp, isset($result['spam_stat']) ? $result['spam_stat'] : array() );
		$result['top5_spam_ip'] = isset($result['top5_spam_ip']) ? $result['top5_spam_ip'] : array();
		
		return $result;		
	}
	
	/**
	 * Function gets spam report
	 *
	 * @param string website host
	 * @param integer report days
	 * @return type
	 */
	static public function api_method__spam_check_cms($api_key, $data, $date = null, $do_check = true)
	{
		$request=Array(
			'method_name' => 'spam_check_cms',
			'auth_key' => $api_key,
			'data' => is_array($data) ? implode(',',$data) : $data,			
		);
		
		if($date) $request['date'] = $date;
		
		$result = self::api_send_request($request, self::URL, false, 6);
		$result = $do_check ? self::api_check_response($result, 'spam_check_cms') : $result;
		
		return $result;
	}
	
	/**
	 * Function sends empty feedback for version comparison in Dashboard
	 *
	 * @param string api_key
	 * @param string agent-version
	 * @param bool perform check flag
	 * @return mixed (STRING || array('error' => true, 'error_string' => STRING))
	 */
	static public function api_method_send_empty_feedback($api_key, $agent, $do_check = true){
		
		$request = array(
			'method_name' => 'send_feedback',
			'auth_key' => $api_key,
			'feedback' => 0 . ':' . $agent,
		);
		
		$result = self::api_send_request($request);
		$result = $do_check ? self::api_check_response($result, 'send_feedback') : $result;
		
		return $result;
	}

	/**
	 * Function sends raw request to API server
	 *
	 * @param string url of API server
	 * @param array data to send
	 * @param boolean is data have to be JSON encoded or not
	 * @param integer connect timeout
	 * @return type
	 */
	static public function api_send_request($data, $url = self::URL, $isJSON = false, $timeout=3, $ssl = false)
	{	
		
		$result = null;
		$curl_error = false;
		
		$original_data = $data;
		
		if(!$isJSON){
			$data = http_build_query($data);
			$data = str_replace("&amp;", "&", $data);
		}else{
			$data = json_encode($data);
		}
		
		if (function_exists('curl_init') && function_exists('json_decode')){
		
			$ch = curl_init();
			curl_setopt($ch, CURLOPT_URL, $url);
			curl_setopt($ch, CURLOPT_TIMEOUT, $timeout);
			curl_setopt($ch, CURLOPT_POST, true);
			curl_setopt($ch, CURLOPT_POSTFIELDS, $data);
			curl_setopt($ch, CURLOPT_RETURNTRANSFER, true);
			curl_setopt($ch, CURLOPT_HTTPHEADER, array('Expect:'));
			
			if ($ssl === true) {
				curl_setopt($ch, CURLOPT_SSL_VERIFYPEER, true);
				curl_setopt($ch, CURLOPT_SSL_VERIFYHOST, 2);
            }else{
				curl_setopt($ch, CURLOPT_SSL_VERIFYPEER, false);
				curl_setopt($ch, CURLOPT_SSL_VERIFYHOST, 0);
			}
			
			$result = curl_exec($ch);
			
			if($result === false){
				if($ssl === false){
					return self::api_send_request($original_data, $url, $isJSON, $timeout, true);
				}
				$curl_error = curl_error($ch);
			}
			
			curl_close($ch);
			
		}else{
			$curl_error = 'CURL_NOT_INSTALLED';
		}
		
		if($curl_error){
			
			$opts = array(
				'http'=>array(
					'method'  => "POST",
					'timeout' => $timeout,
					'content' => $data,
				)
			);
			$context = stream_context_create($opts);
			$result = @file_get_contents($url, 0, $context);
		}
		
		if(!$result && $curl_error)
			return json_encode(array('error' => true, 'error_string' => $curl_error));
		
		return $result;
	}

	/**
	 * Function checks server response
	 *
	 * @param string result
	 * @param string request_method
	 * @return mixed (array || array('error' => true))
	 */
	static public function api_check_response($result, $method_name = null)
	{	
		
		// Errors handling
		
		// Bad connection
		if(empty($result)){
			return array(
				'error' => true,
				'error_string' => 'CONNECTION_ERROR'
			);
		}
		
		// JSON decode errors
		$result = json_decode($result, true);
		if(empty($result)){
			return array(
				'error' => true,
				'error_string' => 'JSON_DECODE_ERROR'
			);
		}
		
		// cURL error
		if(!empty($result['error'])){
			return array(
				'error' => true,
				'error_string' => 'CONNECTION_ERROR: ' . $result['error_string'],
			);
		}
		
		// Server errors
		if($result && (isset($result['error_no']) || isset($result['error_message']))){
			return array(
				'error' => true,
				'error_string' => "SERVER_ERROR NO: {$result['error_no']} MSG: {$result['error_message']}",
				'error_no' => $result['error_no'],
				'error_message' => $result['error_message']
			);
		}
		
		// Pathces for different methods
		
		// mehod_name = notice_validate_key
		if($method_name == 'notice_validate_key' && isset($result['valid'])){
			return $result;
		}
		
		// Other methods
		if(isset($result['data']) && is_array($result['data'])){
			return $result['data'];
		}
	}
	
	static public function is_json($string)
	{
		return is_string($string) && is_array(json_decode($string, true)) ? true : false;
	}

	/* 
	 * If Apache web server is missing then making
	 * Patch for apache_request_headers() 
	 */
	static function apache_request_headers(){
		
		$headers = array();	
		foreach($_SERVER as $key => $val){
			if(preg_match('/\AHTTP_/', $key)){
				$server_key = preg_replace('/\AHTTP_/', '', $key);
				$key_parts = explode('_', $server_key);
				if(count($key_parts) > 0 and strlen($server_key) > 2){
					foreach($key_parts as $part_index => $part){
						$key_parts[$part_index] = mb_strtolower($part);
						$key_parts[$part_index][0] = strtoupper($key_parts[$part_index][0]);					
					}
					$server_key = implode('-', $key_parts);
				}
				$headers[$server_key] = $val;
			}
		}
		return $headers;
	}	
}
