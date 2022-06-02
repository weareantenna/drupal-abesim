<?php

/**
 * Implements hook_preprocess_html().
 */
function expe_omega_preprocess_html(&$variables) {	
  // TYPEKIT
  drupal_add_js('http://use.typekit.com/hzw3igr.js', array('type' => 'external', 'scope' => 'header', 'group' => 'JS_THEME'));
  drupal_add_js('try{Typekit.load();}catch(e){}', array('type' => 'inline', 'scope' => 'header', 'group' => 'JS_THEME'));

  $themepath = drupal_get_path('theme', 'expe_omega');

  // COOKIE JS
  drupal_add_js('/' . $themepath . '/js/jquery.cookie.js', array('type' => 'external', 'scope' => 'header', 'weight' => 999, 'group' => 'JS_THEME'));
  drupal_add_js('/' . $themepath . '/js/cookie.js', array('type' => 'external', 'scope' => 'header', 'weight' => 1000, 'group' => 'JS_THEME'));
}
