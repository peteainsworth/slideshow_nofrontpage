<?php
/**
 * @file
 * slideshow_nofrontpage.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function slideshow_nofrontpage_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'front_page_slideshow';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Front page slideshow';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Benefits of Brazilian Chamber of Commerce in Great Britain membership';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['flexslider_views_slideshow']['caption_field'] = 'none';
  $handler->display->display_options['style_options']['slideshow_type'] = 'flexslider_views_slideshow';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_frontpage_over_hposition' => 0,
    'field_frontpage_over_vposition' => 0,
    'path' => 0,
    'field_frontpage_slide_link' => 0,
    'field_frontpage_slide_image' => 0,
    'body' => 0,
    'title' => 0,
    'field_frontpage_slide_image_1' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '2';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_frontpage_slide_image_1' => 'field_frontpage_slide_image_1',
    'field_frontpage_over_hposition' => 0,
    'field_frontpage_over_vposition' => 0,
    'path' => 0,
    'field_frontpage_slide_link' => 0,
    'field_frontpage_slide_image' => 0,
    'body' => 0,
    'title' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_hover'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['transition_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '10000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['sync'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Field: Content: Overlay: Horizonal position */
  $handler->display->display_options['fields']['field_frontpage_over_hposition']['id'] = 'field_frontpage_over_hposition';
  $handler->display->display_options['fields']['field_frontpage_over_hposition']['table'] = 'field_data_field_frontpage_over_hposition';
  $handler->display->display_options['fields']['field_frontpage_over_hposition']['field'] = 'field_frontpage_over_hposition';
  $handler->display->display_options['fields']['field_frontpage_over_hposition']['label'] = '';
  $handler->display->display_options['fields']['field_frontpage_over_hposition']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_frontpage_over_hposition']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_frontpage_over_hposition']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_frontpage_over_hposition']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_frontpage_over_hposition']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_frontpage_over_hposition']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_frontpage_over_hposition']['alter']['trim_whitespace'] = 1;
  $handler->display->display_options['fields']['field_frontpage_over_hposition']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_frontpage_over_hposition']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_frontpage_over_hposition']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_frontpage_over_hposition']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_frontpage_over_hposition']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['field_frontpage_over_hposition']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_frontpage_over_hposition']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_frontpage_over_hposition']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_frontpage_over_hposition']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_frontpage_over_hposition']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_frontpage_over_hposition']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_frontpage_over_hposition']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_frontpage_over_hposition']['type'] = 'list_key';
  $handler->display->display_options['fields']['field_frontpage_over_hposition']['field_api_classes'] = 0;
  /* Field: Content: Overlay: Vertical position */
  $handler->display->display_options['fields']['field_frontpage_over_vposition']['id'] = 'field_frontpage_over_vposition';
  $handler->display->display_options['fields']['field_frontpage_over_vposition']['table'] = 'field_data_field_frontpage_over_vposition';
  $handler->display->display_options['fields']['field_frontpage_over_vposition']['field'] = 'field_frontpage_over_vposition';
  $handler->display->display_options['fields']['field_frontpage_over_vposition']['label'] = '';
  $handler->display->display_options['fields']['field_frontpage_over_vposition']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_frontpage_over_vposition']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_frontpage_over_vposition']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_frontpage_over_vposition']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_frontpage_over_vposition']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_frontpage_over_vposition']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_frontpage_over_vposition']['alter']['trim_whitespace'] = 1;
  $handler->display->display_options['fields']['field_frontpage_over_vposition']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_frontpage_over_vposition']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_frontpage_over_vposition']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_frontpage_over_vposition']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_frontpage_over_vposition']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['field_frontpage_over_vposition']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_frontpage_over_vposition']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_frontpage_over_vposition']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_frontpage_over_vposition']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_frontpage_over_vposition']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_frontpage_over_vposition']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_frontpage_over_vposition']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_frontpage_over_vposition']['type'] = 'list_key';
  $handler->display->display_options['fields']['field_frontpage_over_vposition']['field_api_classes'] = 0;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_frontpage_slide_link']['id'] = 'field_frontpage_slide_link';
  $handler->display->display_options['fields']['field_frontpage_slide_link']['table'] = 'field_data_field_frontpage_slide_link';
  $handler->display->display_options['fields']['field_frontpage_slide_link']['field'] = 'field_frontpage_slide_link';
  $handler->display->display_options['fields']['field_frontpage_slide_link']['label'] = '';
  $handler->display->display_options['fields']['field_frontpage_slide_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_frontpage_slide_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_frontpage_slide_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_frontpage_slide_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_frontpage_slide_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_frontpage_slide_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_frontpage_slide_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_frontpage_slide_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_frontpage_slide_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_frontpage_slide_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_frontpage_slide_link']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_frontpage_slide_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_frontpage_slide_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_frontpage_slide_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_frontpage_slide_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_frontpage_slide_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_frontpage_slide_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_frontpage_slide_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_frontpage_slide_link']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_frontpage_slide_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_frontpage_slide_link']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_frontpage_slide_link']['field_api_classes'] = 0;
  /* Field: Main image */
  $handler->display->display_options['fields']['field_frontpage_slide_image']['id'] = 'field_frontpage_slide_image';
  $handler->display->display_options['fields']['field_frontpage_slide_image']['table'] = 'field_data_field_frontpage_slide_image';
  $handler->display->display_options['fields']['field_frontpage_slide_image']['field'] = 'field_frontpage_slide_image';
  $handler->display->display_options['fields']['field_frontpage_slide_image']['ui_name'] = 'Main image';
  $handler->display->display_options['fields']['field_frontpage_slide_image']['label'] = '';
  $handler->display->display_options['fields']['field_frontpage_slide_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_frontpage_slide_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_frontpage_slide_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_frontpage_slide_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_frontpage_slide_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_frontpage_slide_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_frontpage_slide_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_frontpage_slide_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_frontpage_slide_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_frontpage_slide_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_frontpage_slide_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_frontpage_slide_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_frontpage_slide_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_frontpage_slide_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_frontpage_slide_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_frontpage_slide_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_frontpage_slide_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_frontpage_slide_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_frontpage_slide_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_frontpage_slide_image']['settings'] = array(
    'image_style' => 'front-page-slideshow',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_frontpage_slide_image']['field_api_classes'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="[field_frontpage_slide_link]" class="frontpage-slide-link"><div class="views-field-overlay-inner views-field-overlay-inner-[field_frontpage_over_vposition]-[field_frontpage_over_hposition]"><h2>[title]</h2>[body]</div></a>';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'views-field-overlay';
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Thumbnail image */
  $handler->display->display_options['fields']['field_frontpage_slide_image_1']['id'] = 'field_frontpage_slide_image_1';
  $handler->display->display_options['fields']['field_frontpage_slide_image_1']['table'] = 'field_data_field_frontpage_slide_image';
  $handler->display->display_options['fields']['field_frontpage_slide_image_1']['field'] = 'field_frontpage_slide_image';
  $handler->display->display_options['fields']['field_frontpage_slide_image_1']['ui_name'] = 'Thumbnail image';
  $handler->display->display_options['fields']['field_frontpage_slide_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_frontpage_slide_image_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_frontpage_slide_image_1']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_frontpage_slide_image_1']['alter']['text'] = '<a href="[field_frontpage_slide_link]">[field_frontpage_slide_image]</a>';
  $handler->display->display_options['fields']['field_frontpage_slide_image_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_frontpage_slide_image_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_frontpage_slide_image_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_frontpage_slide_image_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_frontpage_slide_image_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_frontpage_slide_image_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_frontpage_slide_image_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_frontpage_slide_image_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_frontpage_slide_image_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_frontpage_slide_image_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_frontpage_slide_image_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_frontpage_slide_image_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_frontpage_slide_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_frontpage_slide_image_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_frontpage_slide_image_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_frontpage_slide_image_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_frontpage_slide_image_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_frontpage_slide_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_frontpage_slide_image_1']['settings'] = array(
    'image_style' => 'front-page-thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_frontpage_slide_image_1']['field_api_classes'] = 0;
  /* Sort criterion: Content: Slide order (field_frontpage_slide_weight) */
  $handler->display->display_options['sorts']['field_frontpage_slide_weight_value']['id'] = 'field_frontpage_slide_weight_value';
  $handler->display->display_options['sorts']['field_frontpage_slide_weight_value']['table'] = 'field_data_field_frontpage_slide_weight';
  $handler->display->display_options['sorts']['field_frontpage_slide_weight_value']['field'] = 'field_frontpage_slide_weight_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'front_page_slideshow_slide' => 'front_page_slideshow_slide',
  );
  /* Filter criterion: Content: Benefits of membership slide (field_benefits_membership_slide) */
  $handler->display->display_options['filters']['field_benefits_membership_slide_value']['id'] = 'field_benefits_membership_slide_value';
  $handler->display->display_options['filters']['field_benefits_membership_slide_value']['table'] = 'field_data_field_benefits_membership_slide';
  $handler->display->display_options['filters']['field_benefits_membership_slide_value']['field'] = 'field_benefits_membership_slide_value';
  $handler->display->display_options['filters']['field_benefits_membership_slide_value']['value'] = array(
    0 => '0',
    1 => '1',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Your Brazilian Chamber of Commerce in Great Britain membership';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    10 => '10',
    7 => '7',
    6 => '6',
    5 => '5',
    8 => '8',
    9 => '9',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'front_page_slideshow_slide' => 'front_page_slideshow_slide',
  );
  /* Filter criterion: Content: Benefits of membership slide (field_benefits_membership_slide) */
  $handler->display->display_options['filters']['field_benefits_membership_slide_value']['id'] = 'field_benefits_membership_slide_value';
  $handler->display->display_options['filters']['field_benefits_membership_slide_value']['table'] = 'field_data_field_benefits_membership_slide';
  $handler->display->display_options['filters']['field_benefits_membership_slide_value']['field'] = 'field_benefits_membership_slide_value';
  $handler->display->display_options['filters']['field_benefits_membership_slide_value']['operator'] = 'not in';
  $handler->display->display_options['filters']['field_benefits_membership_slide_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'home';

  /* Display: Page 2 */
  $handler = $view->new_display('page', 'Page 2', 'page_2');
  $handler->display->display_options['path'] = 'home';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $export['front_page_slideshow'] = $view;

  return $export;
}
