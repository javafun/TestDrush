<?php
/**
 * @file
 * article_content_view.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function article_content_view_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function article_content_view_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function article_content_view_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
