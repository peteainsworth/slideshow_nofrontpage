<?php
/**
 * @file
 * slideshow_nofrontpage.features.inc
 */

/**
 * Implements hook_views_api().
 */
function slideshow_nofrontpage_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function slideshow_nofrontpage_image_default_styles() {
  $styles = array();

  // Exported image style: front-page-slideshow.
  $styles['front-page-slideshow'] = array(
    'name' => 'front-page-slideshow',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '620',
          'height' => '380',
        ),
        'weight' => '1',
      ),
      18 => array(
        'label' => 'Adaptive',
        'help' => 'Adaptive image scale according to client resolution.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'adaptive_image_scale_form',
        'summary theme' => 'adaptive_image_scale_summary',
        'module' => 'adaptive_image',
        'name' => 'adaptive_image',
        'data' => array(
          'resolutions' => '1382, 992, 768, 480',
          'mobile_first' => 1,
          'height' => '',
          'width' => '1382',
          'upscale' => '',
        ),
        'weight' => '2',
      ),
    ),
  );

  // Exported image style: front-page-thumbnail.
  $styles['front-page-thumbnail'] = array(
    'name' => 'front-page-thumbnail',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '96',
          'height' => '66',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function slideshow_nofrontpage_node_info() {
  $items = array(
    'front_page_slideshow_slide' => array(
      'name' => t('Front page slideshow slide'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
