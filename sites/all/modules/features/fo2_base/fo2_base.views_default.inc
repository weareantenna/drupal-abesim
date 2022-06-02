<?php
/**
 * @file
 * fo2_base.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function fo2_base_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'header_image';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Header image';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Opnieuw instellen';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Header */
  $handler->display->display_options['fields']['field_header']['id'] = 'field_header';
  $handler->display->display_options['fields']['field_header']['table'] = 'field_data_field_header';
  $handler->display->display_options['fields']['field_header']['field'] = 'field_header';
  $handler->display->display_options['fields']['field_header']['label'] = '';
  $handler->display->display_options['fields']['field_header']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_header']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_header']['settings'] = array(
    'image_style' => 'o2_header',
    'image_link' => '',
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: image */
  $handler = $view->new_display('block', 'image', 'block');
  $translatables['header_image'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Opnieuw instellen'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('All'),
    t('image'),
  );
  $export['header_image'] = $view;

  return $export;
}
