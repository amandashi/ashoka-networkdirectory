<?php print $doctype; ?>
<html lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"<?php print $rdf->version . $rdf->namespaces; ?>>
<head<?php print $rdf->profile; ?>>
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>  
  <?php print $styles; ?>
  <?php print $scripts; ?>
  <!--[if lt IE 9]>
    <script src="http://html5shiv.googlecode.com/svn/trunk/html5.js"></script>
    
  <![endif]-->
  
  <!--[if IE 8]>
    <link type="text/css" rel="stylesheet" media="all" href="<?php print base_path().path_to_theme(); ?>/css/ie8-fixes.css" />
  <![endif]-->
  <!--[if IE 7]>  
    <link type="text/css" rel="stylesheet" media="all" href="<?php print base_path().path_to_theme(); ?>/css/ie7-fixes.css" />
  <![endif]-->
  <!--[if IE]>  
    <link type="text/css" rel="stylesheet" media="all" href="<?php print base_path().path_to_theme(); ?>/css/ie-fixes.css" />
  <![endif]-->
  <link href='http://fonts.googleapis.com/css?family=Open+Sans:400,600,300,700' rel='stylesheet' type='text/css'>
 <link type="text/css" rel="stylesheet" media="all" href="<?php print base_path().path_to_theme(); ?>/fontawesome/css/font-awesome.min.css" />
 
</head>
<body<?php print $attributes;?>>
  <div id="skip-link">
    <a href="#main-content" class="element-invisible element-focusable"><?php print t('Skip to main content'); ?></a>
  </div>
  <div id="toTop"><i class="fa fa-chevron-up"></i></div>
  
  <!-- Preloader -->
  <div id="preloader">
    <div id="status">&nbsp;</div>
  </div>
  <?php print $page_top; ?>
  <?php print $page; ?>
  
  <?php print $page_bottom; ?>

  <script type="text/javascript" src="https://jira.changemakers.com/s/d41d8cd98f00b204e9800998ecf8427e/en_USavy1i5-1988229788/6252/31/1.4.7/_/download/batch/com.atlassian.jira.collector.plugin.jira-issue-collector-plugin:issuecollector/com.atlassian.jira.collector.plugin.jira-issue-collector-plugin:issuecollector.js?collectorId=f666a835"></script>

</body>
</html>
