<?php
/**
 * @file
 * leading_changemaker_content_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function leading_changemaker_content_type_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bio|node|fellow|default';
  $field_group->group_name = 'group_bio';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'people';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_profile';
  $field_group->data = array(
    'label' => 'bio',
    'weight' => '15',
    'children' => array(
      0 => 'body',
    ),
    'format_type' => 'hidden',
    'format_settings' => array(
      'label' => 'bio',
      'instance_settings' => array(
        'classes' => 'group-bio field-group-accordion-item',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_bio|node|fellow|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact|node|fellow|default';
  $field_group->group_name = 'group_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'people';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact',
    'weight' => '3',
    'children' => array(
      0 => 'field_linkedin',
      1 => 'field_region',
      2 => 'field_location',
      3 => 'field_fellow_affiliation',
      4 => 'field_city',
      5 => 'field_profile_summary',
      6 => 'field_state_province',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Contact',
      'instance_settings' => array(
        'classes' => 'group-contact field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_contact|node|fellow|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_election|node|fellow|default';
  $field_group->group_name = 'group_election';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'people';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Election',
    'weight' => '15',
    'children' => array(
      0 => 'field_year_of_election',
      1 => 'field_country_of_election',
      2 => 'field_type',
      3 => 'field_election_date',
    ),
    'format_type' => 'hidden',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-election field-group-fieldset',
      ),
    ),
  );
  $export['group_election|node|fellow|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_impact|node|fellow|default';
  $field_group->group_name = 'group_impact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'people';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_profile';
  $field_group->data = array(
    'label' => 'impact',
    'weight' => '20',
    'children' => array(
      0 => 'field_impact',
    ),
    'format_type' => 'hidden',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => 'group-impact field-group-accordion-item',
      ),
    ),
  );
  $export['group_impact|node|fellow|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_newidea|node|fellow|default';
  $field_group->group_name = 'group_newidea';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'people';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_profile';
  $field_group->data = array(
    'label' => 'new idea',
    'weight' => '16',
    'children' => array(
      0 => 'field_the_new_idea',
    ),
    'format_type' => 'hidden',
    'format_settings' => array(
      'label' => 'new idea',
      'instance_settings' => array(
        'classes' => 'group-newidea field-group-accordion-item',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_newidea|node|fellow|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organization|node|fellow|default';
  $field_group->group_name = 'group_organization';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'people';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Organization',
    'weight' => '4',
    'children' => array(
      0 => 'field_twitter',
      1 => 'field_project_url',
      2 => 'field_organization',
      3 => 'field_facebook',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-organization field-group-fieldset',
      ),
    ),
  );
  $export['group_organization|node|fellow|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_person|node|fellow|default';
  $field_group->group_name = 'group_person';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'people';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_profile';
  $field_group->data = array(
    'label' => 'person',
    'weight' => '19',
    'children' => array(
      0 => 'field_person',
    ),
    'format_type' => 'hidden',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => 'group-person field-group-accordion-item',
      ),
    ),
  );
  $export['group_person|node|fellow|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_problem|node|fellow|default';
  $field_group->group_name = 'group_problem';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'people';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_profile';
  $field_group->data = array(
    'label' => 'problem',
    'weight' => '17',
    'children' => array(
      0 => 'field_problem',
    ),
    'format_type' => 'hidden',
    'format_settings' => array(
      'label' => 'problem',
      'instance_settings' => array(
        'classes' => 'group-problem field-group-accordion-item',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_problem|node|fellow|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_strategy|node|fellow|default';
  $field_group->group_name = 'group_strategy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'people';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_profile';
  $field_group->data = array(
    'label' => 'strategy',
    'weight' => '18',
    'children' => array(
      0 => 'field_strategy',
    ),
    'format_type' => 'hidden',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => 'group-strategy field-group-accordion-item',
      ),
    ),
  );
  $export['group_strategy|node|fellow|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tags|node|fellow|default';
  $field_group->group_name = 'group_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'people';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tags',
    'weight' => '5',
    'children' => array(
      0 => 'field_cluster',
      1 => 'field_target_population',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Tags',
      'instance_settings' => array(
        'classes' => 'group-tags field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_tags|node|fellow|default'] = $field_group;

  return $export;
}
