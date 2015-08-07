<?php
/**
 * @file
 * leading_changemaker_wheel_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function leading_changemaker_wheel_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'fellows_excerpt_randomized';
  $view->description = 'List all members of the team';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Fellows Excerpt Randomized';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Our team';
  $handler->display->display_options['css_class'] = 'list-4-columns view-list-members';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '21600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter Fellows';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'fellow_categories:block_1';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Ashoka Fellows Description';
  $handler->display->display_options['header']['area']['content'] = 'Ashoka aims to identify, support, and accelerate the impact of social entrepreneurs (Ashoka Fellows) improving systems to create a more sustainable, equitable, and empathetic world. Specifically, their social impact would 1. redesign the marketplace and shape the policies that govern our societies so that everyone has equal access to opportunities 2. help private and citizen sectors work together to better solve societal challenges. 3. increase the number of people who are social problem solvers (changemakers and social entrepreneurs)

We select Fellows based on five key criteria:
<img>http://dev-africa-diamond.gotpantheon.com/sites/default/files/fellow_criteria-01.png</img>
';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<br clear=all /><div align=right><a href="/wheel" target="new">Click here to view all Leading Changemakers</a></div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'work area';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'work_area' => 'work_area',
    'forums' => 0,
    'faq_category' => 0,
    'newsletter' => 0,
    'portfolio_category' => 0,
    'region' => 0,
    'slideshow_category' => 0,
    'tags' => 0,
  );
  /* Field: Content: Work Area */
  $handler->display->display_options['fields']['field_work_area']['id'] = 'field_work_area';
  $handler->display->display_options['fields']['field_work_area']['table'] = 'field_data_field_work_area';
  $handler->display->display_options['fields']['field_work_area']['field'] = 'field_work_area';
  $handler->display->display_options['fields']['field_work_area']['label'] = '';
  $handler->display->display_options['fields']['field_work_area']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_work_area']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_work_area']['alter']['text'] = '<br clear=all><h4>[field_work_area]</h4>';
  $handler->display->display_options['fields']['field_work_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_work_area']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_work_area']['delta_limit'] = '6';
  $handler->display->display_options['fields']['field_work_area']['delta_offset'] = '0';
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['label'] = '';
  $handler->display->display_options['fields']['field_email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_email']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_email']['alter']['text'] = '<a href="mailto:[field_email]" title="Email"><span class="fa-stack fa-lg">
  <i class="fa fa-square fa-stack-2x"></i>
  <i class="fa fa-envelope fa-stack-1x fa-inverse"></i>
</span></a>';
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_email']['type'] = 'email_plain';
  /* Field: Content: LinkedIn */
  $handler->display->display_options['fields']['field_linkedin']['id'] = 'field_linkedin';
  $handler->display->display_options['fields']['field_linkedin']['table'] = 'field_data_field_linkedin';
  $handler->display->display_options['fields']['field_linkedin']['field'] = 'field_linkedin';
  $handler->display->display_options['fields']['field_linkedin']['label'] = '';
  $handler->display->display_options['fields']['field_linkedin']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin']['alter']['text'] = '<a href="[field_linkedin-url]" title="Linkedin" target="_blank"><span class="fa-stack fa-lg">
  <i class="fa fa-square fa-stack-2x"></i>
  <i class="fa fa-linkedin fa-stack-1x fa-inverse"></i>
</span></a>';
  $handler->display->display_options['fields']['field_linkedin']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_linkedin']['click_sort_column'] = 'url';
  /* Field: Content: Organization Twitter */
  $handler->display->display_options['fields']['field_twitter']['id'] = 'field_twitter';
  $handler->display->display_options['fields']['field_twitter']['table'] = 'field_data_field_twitter';
  $handler->display->display_options['fields']['field_twitter']['field'] = 'field_twitter';
  $handler->display->display_options['fields']['field_twitter']['label'] = '';
  $handler->display->display_options['fields']['field_twitter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_twitter']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_twitter']['alter']['text'] = '<a href="[field_twitter-url]" title="Twitter" target="_blank"><span class="fa-stack fa-lg">
  <i class="fa fa-square fa-stack-2x"></i>
  <i class="fa fa-twitter fa-stack-1x fa-inverse"></i>
</span></a>';
  $handler->display->display_options['fields']['field_twitter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_twitter']['click_sort_column'] = 'url';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  /* Field: Content: Member Image */
  $handler->display->display_options['fields']['field_member_image']['id'] = 'field_member_image';
  $handler->display->display_options['fields']['field_member_image']['table'] = 'field_data_field_member_image';
  $handler->display->display_options['fields']['field_member_image']['field'] = 'field_member_image';
  $handler->display->display_options['fields']['field_member_image']['label'] = '';
  $handler->display->display_options['fields']['field_member_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_member_image']['alter']['text'] = '<div class="extra-content"><div class="extra-content-inner">
<div class="field-email">[field_email]</div>
<div class="field-linkedin">[field_linkedin]</div>
<div class="field-twitter">[field_twitter]</div>
</div></div>
<div class="field-image">[field_member_image]</div>';
  $handler->display->display_options['fields']['field_member_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_member_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_member_image']['settings'] = array(
    'image_style' => 'square_thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Position */
  $handler->display->display_options['fields']['field_position']['id'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['table'] = 'field_data_field_position';
  $handler->display->display_options['fields']['field_position']['field'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['label'] = '';
  $handler->display->display_options['fields']['field_position']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Year of Induction */
  $handler->display->display_options['fields']['field_year_of_election']['id'] = 'field_year_of_election';
  $handler->display->display_options['fields']['field_year_of_election']['table'] = 'field_data_field_year_of_election';
  $handler->display->display_options['fields']['field_year_of_election']['field'] = 'field_year_of_election';
  $handler->display->display_options['fields']['field_year_of_election']['label'] = '';
  $handler->display->display_options['fields']['field_year_of_election']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_year_of_election']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_year_of_election']['alter']['text'] = '<br clear=all><h2>[field_year_of_election]</h2>';
  $handler->display->display_options['fields']['field_year_of_election']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_year_of_election']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Region */
  $handler->display->display_options['fields']['field_region']['id'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['table'] = 'field_data_field_region';
  $handler->display->display_options['fields']['field_region']['field'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['label'] = '';
  $handler->display->display_options['fields']['field_region']['element_label_colon'] = FALSE;
  /* Field: Content: New Idea */
  $handler->display->display_options['fields']['field_the_new_idea']['id'] = 'field_the_new_idea';
  $handler->display->display_options['fields']['field_the_new_idea']['table'] = 'field_data_field_the_new_idea';
  $handler->display->display_options['fields']['field_the_new_idea']['field'] = 'field_the_new_idea';
  $handler->display->display_options['fields']['field_the_new_idea']['label'] = '';
  $handler->display->display_options['fields']['field_the_new_idea']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['field_the_new_idea']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_the_new_idea']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Year of Induction (field_year_of_election) */
  $handler->display->display_options['sorts']['field_year_of_election_value']['id'] = 'field_year_of_election_value';
  $handler->display->display_options['sorts']['field_year_of_election_value']['table'] = 'field_data_field_year_of_election';
  $handler->display->display_options['sorts']['field_year_of_election_value']['field'] = 'field_year_of_election_value';
  $handler->display->display_options['sorts']['field_year_of_election_value']['order'] = 'DESC';
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight_1']['id'] = 'weight_1';
  $handler->display->display_options['sorts']['weight_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight_1']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight_1']['relationship'] = 'term_node_tid';
  /* Sort criterion: Weight: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'weight_weights';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'people' => 'people',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display:  Fellows All */
  $handler = $view->new_display('page', ' Fellows All', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Ashoka Fellows';
  $handler->display->display_options['display_description'] = 'The list of all Fellows imported from SalesForce';
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '-1';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '-1';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<p><b>Ashoka Fellows are listed below by year.</b> Ashoka aims to identify, support, and accelerate the impact of social entrepreneurs (Ashoka Fellows) improving systems to create a more sustainable, equitable, and empathetic world. Specifically, their social impact would</p>
<ol><li>
		redesign the marketplace and shape the policies that govern our societies so that everyone has equal access to opportunities</li>
<li>
		help private and citizen sectors work together to better solve societal challenges</li>
<li>
		increase the number of people who are social problem solvers (changemakers and social entrepreneurs)</li>
</ol><p></p>
<p>We select Fellows based on five key criteria:</p>
<p><img src="/sites/default/files/fellow_criteria-01.png" /></p>
<h2>Here\'s a snapshot of eight Ashoka Fellows working across the globe:</h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results found. Please search by different filters.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'work area';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'region' => 'region',
    'work_area' => 'work_area',
    'forums' => 0,
    'faq_category' => 0,
    'get_involved_categories' => 0,
    'newsletter' => 0,
    'portfolio_category' => 0,
    'slideshow_category' => 0,
    'tags' => 0,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['path'] = 'snapshotfellows';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Ashoka Fellows';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['fellows_excerpt_randomized'] = $view;

  $view = new view();
  $view->name = 'leading_changemakers';
  $view->description = 'List all members of the team';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Leading Changemakers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Our team';
  $handler->display->display_options['css_class'] = 'list-4-columns view-list-members';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '21600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'keys' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_country_of_election_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_wheel_partner_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 1,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '200';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'fellow_categories:block_1';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Ashoka Fellows Description';
  $handler->display->display_options['header']['area']['content'] = 'Ashoka aims to identify, support, and accelerate the impact of social entrepreneurs (Ashoka Fellows) improving systems to create a more sustainable, equitable, and empathetic world. Specifically, their social impact would 1. redesign the marketplace and shape the policies that govern our societies so that everyone has equal access to opportunities 2. help private and citizen sectors work together to better solve societal challenges. 3. increase the number of people who are social problem solvers (changemakers and social entrepreneurs)

We select Fellows based on five key criteria:
<img>http://dev-africa-diamond.gotpantheon.com/sites/default/files/fellow_criteria-01.png</img>
';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'work area';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'work_area' => 'work_area',
    'forums' => 0,
    'faq_category' => 0,
    'newsletter' => 0,
    'portfolio_category' => 0,
    'region' => 0,
    'slideshow_category' => 0,
    'tags' => 0,
  );
  /* Field: Content: Work Area */
  $handler->display->display_options['fields']['field_work_area']['id'] = 'field_work_area';
  $handler->display->display_options['fields']['field_work_area']['table'] = 'field_data_field_work_area';
  $handler->display->display_options['fields']['field_work_area']['field'] = 'field_work_area';
  $handler->display->display_options['fields']['field_work_area']['label'] = '';
  $handler->display->display_options['fields']['field_work_area']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_work_area']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_work_area']['alter']['text'] = '<br clear=all><h4>[field_work_area]</h4>';
  $handler->display->display_options['fields']['field_work_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_work_area']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_work_area']['delta_limit'] = '6';
  $handler->display->display_options['fields']['field_work_area']['delta_offset'] = '0';
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['label'] = '';
  $handler->display->display_options['fields']['field_email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_email']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_email']['alter']['text'] = '<a href="mailto:[field_email]" title="Email"><span class="fa-stack fa-lg">
  <i class="fa fa-square fa-stack-2x"></i>
  <i class="fa fa-envelope fa-stack-1x fa-inverse"></i>
</span></a>';
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_email']['type'] = 'email_plain';
  /* Field: Content: LinkedIn */
  $handler->display->display_options['fields']['field_linkedin']['id'] = 'field_linkedin';
  $handler->display->display_options['fields']['field_linkedin']['table'] = 'field_data_field_linkedin';
  $handler->display->display_options['fields']['field_linkedin']['field'] = 'field_linkedin';
  $handler->display->display_options['fields']['field_linkedin']['label'] = '';
  $handler->display->display_options['fields']['field_linkedin']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin']['alter']['text'] = '<a href="[field_linkedin-url]" title="Linkedin" target="_blank"><span class="fa-stack fa-lg">
  <i class="fa fa-square fa-stack-2x"></i>
  <i class="fa fa-linkedin fa-stack-1x fa-inverse"></i>
</span></a>';
  $handler->display->display_options['fields']['field_linkedin']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_linkedin']['click_sort_column'] = 'url';
  /* Field: Content: Organization Twitter */
  $handler->display->display_options['fields']['field_twitter']['id'] = 'field_twitter';
  $handler->display->display_options['fields']['field_twitter']['table'] = 'field_data_field_twitter';
  $handler->display->display_options['fields']['field_twitter']['field'] = 'field_twitter';
  $handler->display->display_options['fields']['field_twitter']['label'] = '';
  $handler->display->display_options['fields']['field_twitter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_twitter']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_twitter']['alter']['text'] = '<a href="[field_twitter-url]" title="Twitter" target="_blank"><span class="fa-stack fa-lg">
  <i class="fa fa-square fa-stack-2x"></i>
  <i class="fa fa-twitter fa-stack-1x fa-inverse"></i>
</span></a>';
  $handler->display->display_options['fields']['field_twitter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_twitter']['click_sort_column'] = 'url';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  /* Field: Content: Member Image */
  $handler->display->display_options['fields']['field_member_image']['id'] = 'field_member_image';
  $handler->display->display_options['fields']['field_member_image']['table'] = 'field_data_field_member_image';
  $handler->display->display_options['fields']['field_member_image']['field'] = 'field_member_image';
  $handler->display->display_options['fields']['field_member_image']['label'] = '';
  $handler->display->display_options['fields']['field_member_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_member_image']['alter']['text'] = '<div class="extra-content"><div class="extra-content-inner">
<div class="field-email">[field_email]</div>
<div class="field-linkedin">[field_linkedin]</div>
<div class="field-twitter">[field_twitter]</div>
</div></div>
<div class="field-image">[field_member_image]</div>';
  $handler->display->display_options['fields']['field_member_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_member_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_member_image']['settings'] = array(
    'image_style' => 'square_thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Position */
  $handler->display->display_options['fields']['field_position']['id'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['table'] = 'field_data_field_position';
  $handler->display->display_options['fields']['field_position']['field'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['label'] = '';
  $handler->display->display_options['fields']['field_position']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Year of Induction */
  $handler->display->display_options['fields']['field_year_of_election']['id'] = 'field_year_of_election';
  $handler->display->display_options['fields']['field_year_of_election']['table'] = 'field_data_field_year_of_election';
  $handler->display->display_options['fields']['field_year_of_election']['field'] = 'field_year_of_election';
  $handler->display->display_options['fields']['field_year_of_election']['label'] = '';
  $handler->display->display_options['fields']['field_year_of_election']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_year_of_election']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_year_of_election']['alter']['text'] = '<br clear=all><h2>[field_year_of_election]</h2>';
  $handler->display->display_options['fields']['field_year_of_election']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_year_of_election']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['more_link_path'] = '[path]';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
  );
  /* Field: Content: New Idea */
  $handler->display->display_options['fields']['field_the_new_idea']['id'] = 'field_the_new_idea';
  $handler->display->display_options['fields']['field_the_new_idea']['table'] = 'field_data_field_the_new_idea';
  $handler->display->display_options['fields']['field_the_new_idea']['field'] = 'field_the_new_idea';
  /* Sort criterion: Content: Year of Induction (field_year_of_election) */
  $handler->display->display_options['sorts']['field_year_of_election_value']['id'] = 'field_year_of_election_value';
  $handler->display->display_options['sorts']['field_year_of_election_value']['table'] = 'field_data_field_year_of_election';
  $handler->display->display_options['sorts']['field_year_of_election_value']['field'] = 'field_year_of_election_value';
  $handler->display->display_options['sorts']['field_year_of_election_value']['order'] = 'DESC';
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight_1']['id'] = 'weight_1';
  $handler->display->display_options['sorts']['weight_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight_1']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight_1']['relationship'] = 'term_node_tid';
  /* Sort criterion: Weight: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'weight_weights';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'people' => 'people',
  );
  /* Filter criterion: Content: Featured (field_featured) */
  $handler->display->display_options['filters']['field_featured_value']['id'] = 'field_featured_value';
  $handler->display->display_options['filters']['field_featured_value']['table'] = 'field_data_field_featured';
  $handler->display->display_options['filters']['field_featured_value']['field'] = 'field_featured_value';
  $handler->display->display_options['filters']['field_featured_value']['value'] = array(
    0 => '0',
  );

  /* Display: Leading Changemakers */
  $handler = $view->new_display('page', 'Leading Changemakers', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Wheel: Directory of Leading Changemakers';
  $handler->display->display_options['display_description'] = 'The list of all leading changemakers from our partners';
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_country_of_election',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results found. Please search by different filters.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Member Image */
  $handler->display->display_options['fields']['field_member_image']['id'] = 'field_member_image';
  $handler->display->display_options['fields']['field_member_image']['table'] = 'field_data_field_member_image';
  $handler->display->display_options['fields']['field_member_image']['field'] = 'field_member_image';
  $handler->display->display_options['fields']['field_member_image']['label'] = '';
  $handler->display->display_options['fields']['field_member_image']['alter']['text'] = '<div class="extra-content"><div class="extra-content-inner">
<div class="field-profile">[path_1]</div>
</div></div>
<div class="field-image">[field_member_image]</div>';
  $handler->display->display_options['fields']['field_member_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_member_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_member_image']['settings'] = array(
    'image_style' => 'square_thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  /* Field: Content: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['text'] = '<a href=[path]>[field_first_name] [field_last_name]</a>';
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Field: Content: Country of Election */
  $handler->display->display_options['fields']['field_country_of_election']['id'] = 'field_country_of_election';
  $handler->display->display_options['fields']['field_country_of_election']['table'] = 'field_data_field_country_of_election';
  $handler->display->display_options['fields']['field_country_of_election']['field'] = 'field_country_of_election';
  $handler->display->display_options['fields']['field_country_of_election']['label'] = '';
  $handler->display->display_options['fields']['field_country_of_election']['alter']['text'] = '<a href=/wheel?field_country_of_election_value=[field_country_of_election]>[field_country_of_election]</a>';
  $handler->display->display_options['fields']['field_country_of_election']['element_label_colon'] = FALSE;
  /* Field: Content: All taxonomy terms */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['label'] = '';
  $handler->display->display_options['fields']['term_node_tid']['alter']['text'] = '<a href=/wheel?field_wheel_partner_tid=[term_node_tid-tid]>[term_node_tid-name]</a>';
  $handler->display->display_options['fields']['term_node_tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['separator'] = '<br />';
  $handler->display->display_options['fields']['term_node_tid']['link_to_taxonomy'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['limit'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
    'wheel_partner' => 'wheel_partner',
    'forums' => 0,
    'changemaker_qualities' => 0,
    'faq_category' => 0,
    'fellow_affiliations' => 0,
    'get_involved_categories' => 0,
    'newsletter' => 0,
    'portfolio_category' => 0,
    'region' => 0,
    'slideshow_category' => 0,
    'tags' => 0,
    'work_area' => 0,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Last Name (field_last_name) */
  $handler->display->display_options['sorts']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['sorts']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['sorts']['field_last_name_value']['field'] = 'field_last_name_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'people' => 'people',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['operator'] = 'required';
  $handler->display->display_options['filters']['keys']['group'] = 1;
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Search Terms';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['keys']['remove_score'] = TRUE;
  /* Filter criterion: Content: Country of Election (field_country_of_election) */
  $handler->display->display_options['filters']['field_country_of_election_value']['id'] = 'field_country_of_election_value';
  $handler->display->display_options['filters']['field_country_of_election_value']['table'] = 'field_data_field_country_of_election';
  $handler->display->display_options['filters']['field_country_of_election_value']['field'] = 'field_country_of_election_value';
  $handler->display->display_options['filters']['field_country_of_election_value']['value'] = 'United States';
  $handler->display->display_options['filters']['field_country_of_election_value']['group'] = 1;
  $handler->display->display_options['filters']['field_country_of_election_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_country_of_election_value']['expose']['operator_id'] = 'field_country_of_election_value_op';
  $handler->display->display_options['filters']['field_country_of_election_value']['expose']['label'] = 'Country of Election';
  $handler->display->display_options['filters']['field_country_of_election_value']['expose']['operator'] = 'field_country_of_election_value_op';
  $handler->display->display_options['filters']['field_country_of_election_value']['expose']['identifier'] = 'field_country_of_election_value';
  $handler->display->display_options['filters']['field_country_of_election_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Wheel Partner (field_wheel_partner) */
  $handler->display->display_options['filters']['field_wheel_partner_tid']['id'] = 'field_wheel_partner_tid';
  $handler->display->display_options['filters']['field_wheel_partner_tid']['table'] = 'field_data_field_wheel_partner';
  $handler->display->display_options['filters']['field_wheel_partner_tid']['field'] = 'field_wheel_partner_tid';
  $handler->display->display_options['filters']['field_wheel_partner_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_wheel_partner_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_wheel_partner_tid']['expose']['operator_id'] = 'field_wheel_partner_tid_op';
  $handler->display->display_options['filters']['field_wheel_partner_tid']['expose']['label'] = 'Wheel Partner';
  $handler->display->display_options['filters']['field_wheel_partner_tid']['expose']['operator'] = 'field_wheel_partner_tid_op';
  $handler->display->display_options['filters']['field_wheel_partner_tid']['expose']['identifier'] = 'field_wheel_partner_tid';
  $handler->display->display_options['filters']['field_wheel_partner_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_wheel_partner_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_wheel_partner_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_wheel_partner_tid']['vocabulary'] = 'wheel_partner';
  $handler->display->display_options['path'] = 'wheel';
  $handler->display->display_options['menu']['title'] = 'Leading Changemakers';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Leading Changemakers */
  $handler = $view->new_display('page', 'Leading Changemakers', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Wheel: Directory of Leading Changemakers';
  $handler->display->display_options['display_description'] = 'The list of all leading changemakers from our partners';
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_country_of_election',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results found. Please search by different filters.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Project URL */
  $handler->display->display_options['fields']['field_project_url']['id'] = 'field_project_url';
  $handler->display->display_options['fields']['field_project_url']['table'] = 'field_data_field_project_url';
  $handler->display->display_options['fields']['field_project_url']['field'] = 'field_project_url';
  $handler->display->display_options['fields']['field_project_url']['label'] = '';
  $handler->display->display_options['fields']['field_project_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_project_url']['alter']['text'] = '<a href="[field_project_url]" title="Website" target="_blank"><span class="fa-stack fa-lg">
  <i class="fa fa-square fa-stack-2x"></i>
  <i class="fa fa-external-link-square fa-stack-1x fa-inverse"></i>
</span></a>';
  $handler->display->display_options['fields']['field_project_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_project_url']['type'] = 'link_plain';
  /* Field: Content: LinkedIn */
  $handler->display->display_options['fields']['field_linkedin']['id'] = 'field_linkedin';
  $handler->display->display_options['fields']['field_linkedin']['table'] = 'field_data_field_linkedin';
  $handler->display->display_options['fields']['field_linkedin']['field'] = 'field_linkedin';
  $handler->display->display_options['fields']['field_linkedin']['label'] = '';
  $handler->display->display_options['fields']['field_linkedin']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin']['alter']['text'] = '<a href="[field_linkedin-url]" title="Linkedin" target="_blank"><span class="fa-stack fa-lg">
  <i class="fa fa-square fa-stack-2x"></i>
  <i class="fa fa-linkedin fa-stack-1x fa-inverse"></i>
</span></a>';
  $handler->display->display_options['fields']['field_linkedin']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_linkedin']['click_sort_column'] = 'url';
  /* Field: Content: Organization Twitter */
  $handler->display->display_options['fields']['field_twitter']['id'] = 'field_twitter';
  $handler->display->display_options['fields']['field_twitter']['table'] = 'field_data_field_twitter';
  $handler->display->display_options['fields']['field_twitter']['field'] = 'field_twitter';
  $handler->display->display_options['fields']['field_twitter']['label'] = '';
  $handler->display->display_options['fields']['field_twitter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_twitter']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_twitter']['alter']['text'] = '<a href="[field_twitter-url]" title="Twitter" target="_blank"><span class="fa-stack fa-lg">
  <i class="fa fa-square fa-stack-2x"></i>
  <i class="fa fa-twitter fa-stack-1x fa-inverse"></i>
</span></a>';
  $handler->display->display_options['fields']['field_twitter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_twitter']['click_sort_column'] = 'url';
  /* Field: Content: Member Image */
  $handler->display->display_options['fields']['field_member_image']['id'] = 'field_member_image';
  $handler->display->display_options['fields']['field_member_image']['table'] = 'field_data_field_member_image';
  $handler->display->display_options['fields']['field_member_image']['field'] = 'field_member_image';
  $handler->display->display_options['fields']['field_member_image']['label'] = '';
  $handler->display->display_options['fields']['field_member_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_member_image']['alter']['text'] = '<div class="extra-content"><div class="extra-content-inner">
<div class="field-website">[field_project_url]</div>
<div class="field-linkedin">[field_linkedin]</div>
<div class="field-twitter">[field_twitter]</div>
</div></div>
<div class="field-image">[field_member_image]</div>';
  $handler->display->display_options['fields']['field_member_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_member_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_member_image']['settings'] = array(
    'image_style' => 'square_thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Year of Induction */
  $handler->display->display_options['fields']['field_year_of_election']['id'] = 'field_year_of_election';
  $handler->display->display_options['fields']['field_year_of_election']['table'] = 'field_data_field_year_of_election';
  $handler->display->display_options['fields']['field_year_of_election']['field'] = 'field_year_of_election';
  $handler->display->display_options['fields']['field_year_of_election']['label'] = '';
  $handler->display->display_options['fields']['field_year_of_election']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_year_of_election']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_year_of_election']['alter']['text'] = '<br clear=all><h2>[field_year_of_election]</h2>';
  $handler->display->display_options['fields']['field_year_of_election']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_year_of_election']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Work Area */
  $handler->display->display_options['fields']['field_work_area']['id'] = 'field_work_area';
  $handler->display->display_options['fields']['field_work_area']['table'] = 'field_data_field_work_area';
  $handler->display->display_options['fields']['field_work_area']['field'] = 'field_work_area';
  $handler->display->display_options['fields']['field_work_area']['label'] = '';
  $handler->display->display_options['fields']['field_work_area']['alter']['text'] = '<br clear=all><h4>[field_work_area]</h4>';
  $handler->display->display_options['fields']['field_work_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_work_area']['delta_limit'] = '6';
  $handler->display->display_options['fields']['field_work_area']['delta_offset'] = '0';
  /* Field: Content: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  /* Field: Content: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['text'] = '<a href=[path]>[field_first_name] [field_last_name]</a>';
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Field: Content: Country of Election */
  $handler->display->display_options['fields']['field_country_of_election']['id'] = 'field_country_of_election';
  $handler->display->display_options['fields']['field_country_of_election']['table'] = 'field_data_field_country_of_election';
  $handler->display->display_options['fields']['field_country_of_election']['field'] = 'field_country_of_election';
  $handler->display->display_options['fields']['field_country_of_election']['label'] = '';
  $handler->display->display_options['fields']['field_country_of_election']['alter']['text'] = '<a href=/wheel?field_country_of_election_value=[field_country_of_election]>[field_country_of_election]</a>';
  $handler->display->display_options['fields']['field_country_of_election']['element_label_colon'] = FALSE;
  /* Field: Content: All taxonomy terms */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['label'] = '';
  $handler->display->display_options['fields']['term_node_tid']['alter']['text'] = '<a href=/wheel?field_wheel_partner_tid=[term_node_tid-tid]>[term_node_tid-name]</a>';
  $handler->display->display_options['fields']['term_node_tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['link_to_taxonomy'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['limit'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
    'wheel_partner' => 'wheel_partner',
    'forums' => 0,
    'changemaker_qualities' => 0,
    'faq_category' => 0,
    'fellow_affiliations' => 0,
    'get_involved_categories' => 0,
    'newsletter' => 0,
    'portfolio_category' => 0,
    'region' => 0,
    'slideshow_category' => 0,
    'tags' => 0,
    'work_area' => 0,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Last Name (field_last_name) */
  $handler->display->display_options['sorts']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['sorts']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['sorts']['field_last_name_value']['field'] = 'field_last_name_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'people' => 'people',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['operator'] = 'required';
  $handler->display->display_options['filters']['keys']['group'] = 1;
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Search Terms';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['keys']['remove_score'] = TRUE;
  /* Filter criterion: Content: Country of Election (field_country_of_election) */
  $handler->display->display_options['filters']['field_country_of_election_value']['id'] = 'field_country_of_election_value';
  $handler->display->display_options['filters']['field_country_of_election_value']['table'] = 'field_data_field_country_of_election';
  $handler->display->display_options['filters']['field_country_of_election_value']['field'] = 'field_country_of_election_value';
  $handler->display->display_options['filters']['field_country_of_election_value']['value'] = 'United States';
  $handler->display->display_options['filters']['field_country_of_election_value']['group'] = 1;
  $handler->display->display_options['filters']['field_country_of_election_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_country_of_election_value']['expose']['operator_id'] = 'field_country_of_election_value_op';
  $handler->display->display_options['filters']['field_country_of_election_value']['expose']['label'] = 'Country of Election';
  $handler->display->display_options['filters']['field_country_of_election_value']['expose']['operator'] = 'field_country_of_election_value_op';
  $handler->display->display_options['filters']['field_country_of_election_value']['expose']['identifier'] = 'field_country_of_election_value';
  $handler->display->display_options['filters']['field_country_of_election_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Wheel Partner (field_wheel_partner) */
  $handler->display->display_options['filters']['field_wheel_partner_tid']['id'] = 'field_wheel_partner_tid';
  $handler->display->display_options['filters']['field_wheel_partner_tid']['table'] = 'field_data_field_wheel_partner';
  $handler->display->display_options['filters']['field_wheel_partner_tid']['field'] = 'field_wheel_partner_tid';
  $handler->display->display_options['filters']['field_wheel_partner_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_wheel_partner_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_wheel_partner_tid']['expose']['operator_id'] = 'field_wheel_partner_tid_op';
  $handler->display->display_options['filters']['field_wheel_partner_tid']['expose']['label'] = 'Wheel Partner';
  $handler->display->display_options['filters']['field_wheel_partner_tid']['expose']['operator'] = 'field_wheel_partner_tid_op';
  $handler->display->display_options['filters']['field_wheel_partner_tid']['expose']['identifier'] = 'field_wheel_partner_tid';
  $handler->display->display_options['filters']['field_wheel_partner_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_wheel_partner_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_wheel_partner_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_wheel_partner_tid']['vocabulary'] = 'wheel_partner';
  $handler->display->display_options['path'] = 'wheelall';
  $handler->display->display_options['menu']['title'] = 'Leading Changemakers';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['leading_changemakers'] = $view;

  $view = new view();
  $view->name = 'omidyar_investees_randomized';
  $view->description = 'List all members of the team';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Omidyar Investees Randomized';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Our team';
  $handler->display->display_options['css_class'] = 'list-4-columns view-list-members';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '21600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter Fellows';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'fellow_categories:block_1';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Ashoka Fellows Description';
  $handler->display->display_options['header']['area']['content'] = 'Ashoka aims to identify, support, and accelerate the impact of social entrepreneurs (Ashoka Fellows) improving systems to create a more sustainable, equitable, and empathetic world. Specifically, their social impact would 1. redesign the marketplace and shape the policies that govern our societies so that everyone has equal access to opportunities 2. help private and citizen sectors work together to better solve societal challenges. 3. increase the number of people who are social problem solvers (changemakers and social entrepreneurs)

We select Fellows based on five key criteria:
<img>http://dev-africa-diamond.gotpantheon.com/sites/default/files/fellow_criteria-01.png</img>
';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<br clear=all /><div align=right><a href="/wheel" target="new">Click here to view all Leading Changemakers</a></div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'work area';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'work_area' => 'work_area',
    'forums' => 0,
    'faq_category' => 0,
    'newsletter' => 0,
    'portfolio_category' => 0,
    'region' => 0,
    'slideshow_category' => 0,
    'tags' => 0,
  );
  /* Field: Content: Work Area */
  $handler->display->display_options['fields']['field_work_area']['id'] = 'field_work_area';
  $handler->display->display_options['fields']['field_work_area']['table'] = 'field_data_field_work_area';
  $handler->display->display_options['fields']['field_work_area']['field'] = 'field_work_area';
  $handler->display->display_options['fields']['field_work_area']['label'] = '';
  $handler->display->display_options['fields']['field_work_area']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_work_area']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_work_area']['alter']['text'] = '<br clear=all><h4>[field_work_area]</h4>';
  $handler->display->display_options['fields']['field_work_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_work_area']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_work_area']['delta_limit'] = '6';
  $handler->display->display_options['fields']['field_work_area']['delta_offset'] = '0';
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['label'] = '';
  $handler->display->display_options['fields']['field_email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_email']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_email']['alter']['text'] = '<a href="mailto:[field_email]" title="Email"><span class="fa-stack fa-lg">
  <i class="fa fa-square fa-stack-2x"></i>
  <i class="fa fa-envelope fa-stack-1x fa-inverse"></i>
</span></a>';
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_email']['type'] = 'email_plain';
  /* Field: Content: LinkedIn */
  $handler->display->display_options['fields']['field_linkedin']['id'] = 'field_linkedin';
  $handler->display->display_options['fields']['field_linkedin']['table'] = 'field_data_field_linkedin';
  $handler->display->display_options['fields']['field_linkedin']['field'] = 'field_linkedin';
  $handler->display->display_options['fields']['field_linkedin']['label'] = '';
  $handler->display->display_options['fields']['field_linkedin']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin']['alter']['text'] = '<a href="[field_linkedin-url]" title="Linkedin" target="_blank"><span class="fa-stack fa-lg">
  <i class="fa fa-square fa-stack-2x"></i>
  <i class="fa fa-linkedin fa-stack-1x fa-inverse"></i>
</span></a>';
  $handler->display->display_options['fields']['field_linkedin']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_linkedin']['click_sort_column'] = 'url';
  /* Field: Content: Organization Twitter */
  $handler->display->display_options['fields']['field_twitter']['id'] = 'field_twitter';
  $handler->display->display_options['fields']['field_twitter']['table'] = 'field_data_field_twitter';
  $handler->display->display_options['fields']['field_twitter']['field'] = 'field_twitter';
  $handler->display->display_options['fields']['field_twitter']['label'] = '';
  $handler->display->display_options['fields']['field_twitter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_twitter']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_twitter']['alter']['text'] = '<a href="[field_twitter-url]" title="Twitter" target="_blank"><span class="fa-stack fa-lg">
  <i class="fa fa-square fa-stack-2x"></i>
  <i class="fa fa-twitter fa-stack-1x fa-inverse"></i>
</span></a>';
  $handler->display->display_options['fields']['field_twitter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_twitter']['click_sort_column'] = 'url';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  /* Field: Content: Member Image */
  $handler->display->display_options['fields']['field_member_image']['id'] = 'field_member_image';
  $handler->display->display_options['fields']['field_member_image']['table'] = 'field_data_field_member_image';
  $handler->display->display_options['fields']['field_member_image']['field'] = 'field_member_image';
  $handler->display->display_options['fields']['field_member_image']['label'] = '';
  $handler->display->display_options['fields']['field_member_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_member_image']['alter']['text'] = '<div class="extra-content"><div class="extra-content-inner">
<div class="field-email">[field_email]</div>
<div class="field-linkedin">[field_linkedin]</div>
<div class="field-twitter">[field_twitter]</div>
</div></div>
<div class="field-image">[field_member_image]</div>';
  $handler->display->display_options['fields']['field_member_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_member_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_member_image']['settings'] = array(
    'image_style' => 'square_thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Position */
  $handler->display->display_options['fields']['field_position']['id'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['table'] = 'field_data_field_position';
  $handler->display->display_options['fields']['field_position']['field'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['label'] = '';
  $handler->display->display_options['fields']['field_position']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Region */
  $handler->display->display_options['fields']['field_region']['id'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['table'] = 'field_data_field_region';
  $handler->display->display_options['fields']['field_region']['field'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['label'] = '';
  $handler->display->display_options['fields']['field_region']['element_label_colon'] = FALSE;
  /* Field: Content: New Idea */
  $handler->display->display_options['fields']['field_the_new_idea']['id'] = 'field_the_new_idea';
  $handler->display->display_options['fields']['field_the_new_idea']['table'] = 'field_data_field_the_new_idea';
  $handler->display->display_options['fields']['field_the_new_idea']['field'] = 'field_the_new_idea';
  $handler->display->display_options['fields']['field_the_new_idea']['label'] = '';
  $handler->display->display_options['fields']['field_the_new_idea']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['field_the_new_idea']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_the_new_idea']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Year of Induction (field_year_of_election) */
  $handler->display->display_options['sorts']['field_year_of_election_value']['id'] = 'field_year_of_election_value';
  $handler->display->display_options['sorts']['field_year_of_election_value']['table'] = 'field_data_field_year_of_election';
  $handler->display->display_options['sorts']['field_year_of_election_value']['field'] = 'field_year_of_election_value';
  $handler->display->display_options['sorts']['field_year_of_election_value']['order'] = 'DESC';
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight_1']['id'] = 'weight_1';
  $handler->display->display_options['sorts']['weight_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight_1']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight_1']['relationship'] = 'term_node_tid';
  /* Sort criterion: Weight: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'weight_weights';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'people' => 'people',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Taxonomy term: Term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    270 => '270',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'wheel_partner';

  /* Display: Omidyar Investees */
  $handler = $view->new_display('page', 'Omidyar Investees', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Omidyar Investees';
  $handler->display->display_options['display_description'] = 'A list of Omidyar Investees';
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '-1';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '-1';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<p><img src=/sites/default/files/logo-on.png border=0 alt=ON align=left hspace=5>Omidyar Network believes market forces can be a potent driver for positive social change. That’s why we invest in both for-profit businesses and nonprofit organizations, whose complementary roles can advance entire sectors.</p><p>Our efforts are focused in five key areas that strengthen prosperous, stable, and open societies: Consumer Internet and Mobile, Education, Financial Inclusion, Government Transparency, and Property Rights.</p>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results found. Please search by different filters.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'omidyarinvestee';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'region' => 'region',
    'wheel_partner' => 'wheel_partner',
    'work_area' => 'work_area',
    'forums' => 0,
    'changemaker_qualities' => 0,
    'faq_category' => 0,
    'fellow_affiliations' => 0,
    'get_involved_categories' => 0,
    'newsletter' => 0,
    'portfolio_category' => 0,
    'slideshow_category' => 0,
    'tags' => 0,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['path'] = 'snapshotomidyar';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Omidyar Investees';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['omidyar_investees_randomized'] = $view;

  return $export;
}
