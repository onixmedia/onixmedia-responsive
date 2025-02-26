<?php
/**
 * @file
 * Contains theme override functions and preprocess functions for the theme.
 *
 * ABOUT THE TEMPLATE.PHP FILE
 *
 *   The template.php file is one of the most useful files when creating or
 *   modifying Drupal themes. You can modify or override Drupal's theme
 *   functions, intercept or make additional variables available to your theme,
 *   and create custom PHP logic. For more information, please visit the Theme
 *   Developer's Guide on Drupal.org: http://drupal.org/theme-guide
 *
 * OVERRIDING THEME FUNCTIONS
 *
 *   The Drupal theme system uses special theme functions to generate HTML
 *   output automatically. Often we wish to customize this HTML output. To do
 *   this, we have to override the theme function. You have to first find the
 *   theme function that generates the output, and then "catch" it and modify it
 *   here. The easiest way to do it is to copy the original function in its
 *   entirety and paste it here, changing the prefix from theme_ to onix_.
 *   For example:
 *
 *     original: theme_breadcrumb()
 *     theme override: onix_breadcrumb()
 *
 *   where onix is the name of your sub-theme. For example, the
 *   zen_classic theme would define a zen_classic_breadcrumb() function.
 *
 *   If you would like to override either of the two theme functions used in Zen
 *   core, you should first look at how Zen core implements those functions:
 *     theme_breadcrumbs()      in zen/template.php
 *     theme_menu_local_tasks() in zen/template.php
 *
 *   For more information, please visit the Theme Developer's Guide on
 *   Drupal.org: http://drupal.org/node/173880
 *
 * CREATE OR MODIFY VARIABLES FOR YOUR THEME
 *
 *   Each tpl.php template file has several variables which hold various pieces
 *   of content. You can modify those variables (or add new ones) before they
 *   are used in the template files by using preprocess functions.
 *
 *   This makes THEME_preprocess_HOOK() functions the most powerful functions
 *   available to themers.
 *
 *   It works by having one preprocess function for each template file or its
 *   derivatives (called template suggestions). For example:
 *     THEME_preprocess_page    alters the variables for page.tpl.php
 *     THEME_preprocess_node    alters the variables for node.tpl.php or
 *                              for node-forum.tpl.php
 *     THEME_preprocess_comment alters the variables for comment.tpl.php
 *     THEME_preprocess_block   alters the variables for block.tpl.php
 *
 *   For more information on preprocess functions and template suggestions,
 *   please visit the Theme Developer's Guide on Drupal.org:
 *   http://drupal.org/node/223440
 *   and http://drupal.org/node/190815#template-suggestions
 */


/**
 * Override or insert variables into the html templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("html" in this case.)
 */
function onix_preprocess_html(&$variables, $hook) 
{
  // calculate device-specific guidelines
  $ipad = (bool) strpos($_SERVER['HTTP_USER_AGENT'],'iPad');
  $iphone = (bool) strpos($_SERVER['HTTP_USER_AGENT'],'iPhone');
  
  $width = ($ipad) ? '752' : '370';
  $viewport = array(
    '#tag' => 'meta',
    '#attributes' => array(
      'name' => 'viewport', 
      'content' => "width=$width, user-scalable=no",
    ));
  drupal_add_html_head($viewport, 'viewport');
  
  // indicate if its mobile
  drupal_add_js(array('onix'=>array('mobile'=> ($ipad or $iphone) )), 'setting');

  // The body tag's classes are controlled by the $classes_array variable. To
  // remove a class from $classes_array, use array_diff().
  //$variables['classes_array'] = array_diff($variables['classes_array'], array('class-to-remove'));
}
// */

/**
 * Override or insert variables into the page templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("page" in this case.)
 */

function onix_preprocess_page(&$variables, $hook) 
{
  drupal_add_css('http://cloud.webtype.com/css/587ba3fe-be14-440a-bb50-9c78f1ff0e61.css', array('type'=>'external'));
  
  if ($variables['is_front'])
  {
    drupal_add_js('http://maps.google.com/maps/api/js?sensor=false', array('type'=>'external'));
    drupal_add_js(drupal_get_path('theme', 'onix') .'/js/front.js', 'file');
    drupal_add_js(drupal_get_path('theme', 'onix') .'/js/scrollable.js', 'file');
    jquery_ui_add('ui.accordion');
  }
}
// */

/**
 * Override or insert variables into the node templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("node" in this case.)
 */
/* -- Delete this line if you want to use this function
function onix_preprocess_node(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');

  // Optionally, run node-type-specific preprocess functions, like
  // onix_preprocess_node_page() or onix_preprocess_node_story().
  $function = __FUNCTION__ . '_' . $variables['node']->type;
  if (function_exists($function)) {
    $function($variables, $hook);
  }
}
// */

/**
 * Override or insert variables into the comment templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("comment" in this case.)
 */
/* -- Delete this line if you want to use this function
function onix_preprocess_comment(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');
}
// */

/**
 * Override or insert variables into the block templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("block" in this case.)
 */
/* -- Delete this line if you want to use this function
function onix_preprocess_block(&$variables, $hook) {
  // Add a count to all the blocks in the region.
  $variables['classes_array'][] = 'count-' . $variables['block_id'];
}
// */

/*function onix_preprocess_page(&$variables, $hook) {
//print_r($variables);
  // Add per content type pages
  if (!empty($variables['node'])) {
    $variables['theme_hook_suggestions'][] = 'page__' . $variables['node']->type;
  }
}*/

function onix_preprocess_node(&$variables, $hook) {
  //$variables['sample_variable'] = t('Lorem ipsum.');

  // Optionally, run node-type-specific preprocess functions, like
  // onix_preprocess_node_page() or onix_preprocess_node_story().
  $function = __FUNCTION__ . '_' . $variables['node']->type;
  if (function_exists($function)) {
    $function($variables, $hook);
  }
}
