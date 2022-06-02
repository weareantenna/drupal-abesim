<?php
/**
 * @file
 * fo2_block.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function fo2_block_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['menu_block-7'] = array(
    'cache' => -1,
    'css_class' => 'footer-services',
    'custom' => 0,
    'delta' => 7,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'expe_omega' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'expe_omega',
        'weight' => -22,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
