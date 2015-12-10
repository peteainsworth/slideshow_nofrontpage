<?php
/**
 * @file
 * slideshow_nofrontpage.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function slideshow_nofrontpage_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_front_page_company_desc|node|front_page|default';
  $field_group->group_name = 'group_front_page_company_desc';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'front_page';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Company description',
    'weight' => '1',
    'children' => array(
      0 => 'field_front_page_company_desc',
      1 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Company description',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_front_page_company_desc|node|front_page|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_front_page_company_desc|node|front_page|full';
  $field_group->group_name = 'group_front_page_company_desc';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'front_page';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Company description',
    'weight' => '0',
    'children' => array(
      0 => 'field_front_page_company_desc',
      1 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Company description',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_front_page_company_desc|node|front_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_front_page_feature_desc|node|front_page|default';
  $field_group->group_name = 'group_front_page_feature_desc';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'front_page';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Feature description',
    'weight' => '2',
    'children' => array(
      0 => 'field_front_page_feature_title',
      1 => 'field_front_page_feature_desc',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Feature description',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_front_page_feature_desc|node|front_page|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_front_page_feature_desc|node|front_page|full';
  $field_group->group_name = 'group_front_page_feature_desc';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'front_page';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Feature description',
    'weight' => '1',
    'children' => array(
      0 => 'field_front_page_feature_title',
      1 => 'field_front_page_feature_desc',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Feature description',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_front_page_feature_desc|node|front_page|full'] = $field_group;

  return $export;
}
