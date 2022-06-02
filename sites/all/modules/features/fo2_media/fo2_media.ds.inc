<?php
/**
 * @file
 * fo2_media.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function fo2_media_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'one_column_width';
  $ds_view_mode->label = 'One column width';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['one_column_width'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'three_column_width';
  $ds_view_mode->label = 'Three column width';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['three_column_width'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'two_column_width';
  $ds_view_mode->label = 'Two column width';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['two_column_width'] = $ds_view_mode;

  return $export;
}
