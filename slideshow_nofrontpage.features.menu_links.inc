<?php
/**
 * @file
 * slideshow_nofrontpage.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function slideshow_nofrontpage_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation:node/add/front-page-slideshow-slide
  $menu_links['navigation:node/add/front-page-slideshow-slide'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/front-page-slideshow-slide',
    'router_path' => 'node/add/front-page-slideshow-slide',
    'link_title' => 'Front page slideshow slide',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Front page slideshow slide');


  return $menu_links;
}
