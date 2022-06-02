<?php
/**
 * @file
 * fo2_homepage.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fo2_homepage_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function fo2_homepage_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function fo2_homepage_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: homepage_blocks
  $nodequeues['homepage_blocks'] = array(
    'name' => 'homepage_blocks',
    'title' => 'Homepage blocks',
    'subqueue_title' => '',
    'size' => 0,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'block',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}
