<?php
/**
 * @file
 * slideshow_nofrontpage.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function slideshow_nofrontpage_filter_default_formats() {
  $formats = array();

  // Exported format: Full HTML
  $formats['full_html'] = array(
    'format' => 'full_html',
    'name' => 'Full HTML',
    'cache' => '1',
    'status' => '1',
    'weight' => '-10',
    'filters' => array(),
  );

  // Exported format: No filters
  $formats['no_filters'] = array(
    'format' => 'no_filters',
    'name' => 'No filters',
    'cache' => '1',
    'status' => '1',
    'weight' => '-7',
    'filters' => array(),
  );

  // Exported format: Plain text
  $formats['plain_text'] = array(
    'format' => 'plain_text',
    'name' => 'Plain text',
    'cache' => '1',
    'status' => '1',
    'weight' => '-9',
    'filters' => array(
      'filter_url' => array(
        'weight' => '1',
        'status' => '1',
        'settings' => array(
          'filter_url_length' => '72',
        ),
      ),
    ),
  );

  return $formats;
}
