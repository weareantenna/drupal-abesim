<?php
/**
 * @file
 * fo2_testimonial.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function fo2_testimonial_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|testimonial|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'testimonial';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_thumbnail',
        1 => 'title',
        2 => 'body',
        3 => 'teaser_cta_link',
      ),
    ),
    'fields' => array(
      'field_thumbnail' => 'ds_content',
      'title' => 'ds_content',
      'body' => 'ds_content',
      'teaser_cta_link' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|testimonial|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|testimonial|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'testimonial';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col_wrapper';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_thumbnail',
        2 => 'body',
        3 => 'field_authors',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_thumbnail' => 'ds_content',
      'body' => 'ds_content',
      'field_authors' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|testimonial|teaser'] = $ds_layout;

  return $export;
}
