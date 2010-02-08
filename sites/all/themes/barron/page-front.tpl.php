<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN"
  "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" lang="<?php print $language->language ?>" xml:lang="<?php print $language->language ?>">

  <head>
    <title><?php print $head_title ?></title>
    <?php print $head ?>
    <?php print $styles ?>
    <?php print $scripts ?>
    <!--[if lte IE 7]>
    <style type="text/css" media="all">@import "<?php print base_path() . path_to_theme() ?>/ie-fixes.css";</style>
    <![endif]-->
  </head>

  <body>
    <div id="container">
      <div id="header">
        <div id="nav">
          <?php if (isset($primary_links)) : ?>
            <?php print theme('links', $primary_links) ?>
          <?php endif; ?>
        </div><!-- /nav -->
        <div id="logo-wrapper">
          <?php if ($logo) { ?>
          <div id="logo"><a href="<?php print $base_path ?>" title="<?php print t('Home') ?>"><img src="<?php print $logo ?>" alt="<?php print t('Home') ?>" /></a></div><?php } ?>
          <?php if ($site_name) { ?><h1 class="site-name"><a href="<?php print $base_path ?>" title="<?php print t('Home') ?>"><?php print $site_name ?></a></h1><?php } ?>
          <?php if ($site_slogan) { ?><h2 class="site-slogan"><?php print $site_slogan ?></h2><?php } ?>
        </div><!-- /logo-wrapper-->
      </div><!-- /header-->

      <div id="content">
        <?php if ($mission) : ?>
          <div class="mission">
            <?php print $mission ?>
          </div>
        <?php endif; ?>
        <?php print $breadcrumb ?>
        <h2 class="page-title"><?php print $title; ?></h2>
        <div class="tabs"><?php print $tabs; ?></div>
        <?php print $help; ?>
        <?php print $messages; ?>
	      <?php print $content_top; ?>
        <?php print $content; ?>
        <?php print $content_bottom; ?>
        <?php print $feed_icons; ?>
      </div><!-- /content -->

      <div id="sidebar-wrapper">
        <div id="sidebar">
          <?php print $search_box; ?>
          <?php print $sidebar; ?>
        </div><!-- /sidebar -->
      </div><!-- /sidebar-wrapper -->
      
      <div id="footer">
        <?php print $footer_message; ?>
        <?php print $footer; ?>
      </div><!-- /footer -->
    </div><!-- /container -->
    <?php print $closure; ?>
  </body>
</html>