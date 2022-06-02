<?php
/**
 * @file
 * fo2_person.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function fo2_person_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|person|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'person';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_person_image',
      ),
      'right' => array(
        1 => 'field_first_name',
        2 => 'field_last_name',
      ),
    ),
    'fields' => array(
      'field_person_image' => 'left',
      'field_first_name' => 'right',
      'field_last_name' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|person|teaser'] = $ds_layout;

  return $export;
}
