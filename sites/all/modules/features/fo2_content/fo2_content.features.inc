<?php
/**
 * @file
 * fo2_content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fo2_content_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
