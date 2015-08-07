<?php
/**
 * @file
 * feedback_loops.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function feedback_loops_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-feedback_request-field_priority_level'
  $field_instances['node-feedback_request-field_priority_level'] = array(
    'bundle' => 'feedback_request',
    'default_value' => array(
      0 => array(
        'value' => 2,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_priority_level',
    'label' => 'Priority Level',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'node-feedback_request-field_specific_feedback_suggesti'
  $field_instances['node-feedback_request-field_specific_feedback_suggesti'] = array(
    'bundle' => 'feedback_request',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please go into more detail about this item. Include links to specific pages as needed.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_specific_feedback_suggesti',
    'label' => 'Specific feedback, suggestion, or issue',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Please go into more detail about this item. Include links to specific pages as needed.');
  t('Priority Level');
  t('Specific feedback, suggestion, or issue');

  return $field_instances;
}
