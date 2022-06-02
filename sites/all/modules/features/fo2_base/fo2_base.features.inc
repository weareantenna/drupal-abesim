<?php
/**
 * @file
 * fo2_base.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fo2_base_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "linkit" && $api == "linkit_profiles") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function fo2_base_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function fo2_base_image_default_styles() {
  $styles = array();

  // Exported image style: o2_header.
  $styles['o2_header'] = array(
    'label' => 'O2 Agency Header',
    'effects' => array(),
  );

  // Exported image style: o2_thumbnail.
  $styles['o2_thumbnail'] = array(
    'label' => 'O2 Agency Thumbnail',
    'effects' => array(),
  );

  return $styles;
}
