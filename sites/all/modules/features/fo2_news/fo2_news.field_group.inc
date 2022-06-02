<?php
/**
 * @file
 * fo2_news.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function fo2_news_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_info|node|news|full';
  $field_group->group_name = 'group_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'info',
    'weight' => '10',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'info',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'info',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_info|node|news|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_info|node|news|teaser';
  $field_group->group_name = 'group_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'info',
    'weight' => '9',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'info',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'info',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_info|node|news|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sidebar_content|node|news|form';
  $field_group->group_name = 'group_sidebar_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sidebar content',
    'weight' => '9',
    'children' => array(
      0 => 'field_expert_sessions',
      1 => 'field_related_downloads',
      2 => 'field_related_services',
      3 => 'field_related_solutions',
      4 => 'field_related_testimonials',
      5 => 'field_show_sap_tv_block',
      6 => 'field_show_experts_block',
      7 => 'field_related_news',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-sidebar-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_sidebar_content|node|news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sidebar_weight|node|news|form';
  $field_group->group_name = 'group_sidebar_weight';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sidebar blocks weight',
    'weight' => '10',
    'children' => array(
      0 => 'field_expert_sessions_weight',
      1 => 'field_related_downloads_weight',
      2 => 'field_related_services_weight',
      3 => 'field_related_solutions_weight',
      4 => 'field_related_testimonials_weigh',
      5 => 'field_sap_tv_weight',
      6 => 'field_experts_block_weight',
      7 => 'field_related_news_weight',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-sidebar-weight field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_sidebar_weight|node|news|form'] = $field_group;

  return $export;
}
