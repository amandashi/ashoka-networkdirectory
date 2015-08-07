<?php
/**
 * @file
 * feedback_loops.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feedback_loops_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function feedback_loops_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function feedback_loops_flag_default_flags() {
  $flags = array();
  // Exported flag: "Feedback status".
  $flags['feedback_status'] = array(
    'entity_type' => 'node',
    'title' => 'Feedback status',
    'global' => 1,
    'types' => array(
      0 => 'feedback_request',
    ),
    'flag_short' => 'Mark as Resolved',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Re-open request',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'api_version' => 3,
    'module' => 'feedback_loops',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

}

/**
 * Implements hook_node_info().
 */
function feedback_loops_node_info() {
  $items = array(
    'feedback_request' => array(
      'name' => t('Feedback Request'),
      'base' => 'node_content',
      'description' => t('Feedback on how to improve this function'),
      'has_title' => '1',
      'title_label' => t('One-line description of feedback?'),
      'help' => '',
    ),
  );
  return $items;
}
