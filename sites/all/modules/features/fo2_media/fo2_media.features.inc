<?php
/**
 * @file
 * fo2_media.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fo2_media_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "file_entity" && $api == "file_type") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function fo2_media_image_default_styles() {
  $styles = array();

  // Exported image style: one_column_width.
  $styles['one_column_width'] = array(
    'effects' => array(
      21 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 268,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'one_column_width',
  );

  // Exported image style: three_column_width.
  $styles['three_column_width'] = array(
    'effects' => array(
      23 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 812,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'three_column_width',
  );

  // Exported image style: two_column_width.
  $styles['two_column_width'] = array(
    'effects' => array(
      22 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 536,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'two_column_width',
  );

  return $styles;
}
