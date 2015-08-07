<?php
/**
 * @file
 * leading_changemaker_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function leading_changemaker_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function leading_changemaker_content_type_node_info() {
  $items = array(
    'people' => array(
      'name' => t('People'),
      'base' => 'node_content',
      'description' => t('Ashoka directory members.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
