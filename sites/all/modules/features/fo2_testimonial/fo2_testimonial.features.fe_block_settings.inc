<?php
/**
 * @file
 * fo2_testimonial.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function fo2_testimonial_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-testimonials-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'testimonials-block_1',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'expe_omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'expe_omega',
        'weight' => 0,
      ),
      'omega_o2' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega_o2',
        'weight' => 11,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
