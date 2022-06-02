<?php

/**
 * Implements hook_preprocess_html().
 */
function omega_o2_preprocess_html(&$variables) {

  // Load google fonts
  drupal_add_css('https://fonts.googleapis.com/css?family=Lato:100,300,400,700,900,300italic&subset=latin,latin-ext',array('type' => 'external'));


  $themepath = drupal_get_path('theme', 'omega_o2');

 // drupal_add_js('/' . $themepath . '/js/perfecta.js', array('type' => 'external', 'scope' => 'header', 'group' => 'JS_THEME'));

  // COOKIELAW
  drupal_add_css('/' . $themepath . '/css/cookie.css', array(
     'group' => CSS_THEME,
     'type' => 'external',
     'weight' => '9999'
   )
  );

  drupal_add_js('/' . $themepath . '/js/jquery.cookie.js', array('type' => 'external', 'scope' => 'header', 'weight' => 999, 'group' => 'JS_THEME'));
  drupal_add_js('/' . $themepath . '/js/cookie.js', array('type' => 'external', 'scope' => 'header', 'weight' => 1000, 'group' => 'JS_THEME'));

  if ($node = menu_get_object()) {
    // Get the nid
    $nid = $node->nid;

    // Add News class
    if ($nid == '23' || $nid == '10' || $nid == '115' || $nid == '121') {
      $variables['classes_array'][] = 'news-overview';
    }
    // Add Testimonial class
    if ($nid == '33' || $nid == '123' || $nid == '122' || $nid == '124') {
      $variables['classes_array'][] = 'testimonial-overview';
    }
    // Add Service class
    if ($nid == '9' || $nid == '113' || $nid == '116' || $nid == '117') {
      $variables['classes_array'][] = 'service-overview';
    }
  }

}
