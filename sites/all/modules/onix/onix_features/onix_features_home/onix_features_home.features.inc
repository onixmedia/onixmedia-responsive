<?php
/**
 * @file
 * onix_features_home.features.inc
 */

/**
 * Implements hook_views_api().
 */
function onix_features_home_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function onix_features_home_image_default_styles() {
  $styles = array();

  // Exported image style: project_thumb1
  $styles['project_thumb1'] = array(
    'name' => 'project_thumb1',
    'effects' => array(
      2 => array(
        'label' => 'Escalar y recortar',
        'help' => 'Escalar y recortar mantendrán la relación de proporciones de la imagen original y se desechará lo que sobre por el lado mayor. Esto es especialmente útil para crear miniaturas perfectamente cuadradas sin deformar la imagen.',
        'effect callback' => 'image_scale_and_crop_effect',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '480',
          'height' => '400',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: project_thumb2
  $styles['project_thumb2'] = array(
    'name' => 'project_thumb2',
    'effects' => array(
      3 => array(
        'label' => 'Escalar y recortar',
        'help' => 'Escalar y recortar mantendrán la relación de proporciones de la imagen original y se desechará lo que sobre por el lado mayor. Esto es especialmente útil para crear miniaturas perfectamente cuadradas sin deformar la imagen.',
        'effect callback' => 'image_scale_and_crop_effect',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '220',
          'height' => '260',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: project_thumb3
  $styles['project_thumb3'] = array(
    'name' => 'project_thumb3',
    'effects' => array(
      4 => array(
        'label' => 'Escalar y recortar',
        'help' => 'Escalar y recortar mantendrán la relación de proporciones de la imagen original y se desechará lo que sobre por el lado mayor. Esto es especialmente útil para crear miniaturas perfectamente cuadradas sin deformar la imagen.',
        'effect callback' => 'image_scale_and_crop_effect',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '110',
          'height' => '140',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: slideshow
  $styles['slideshow'] = array(
    'name' => 'slideshow',
    'effects' => array(
      1 => array(
        'label' => 'Escala',
        'help' => 'El escalado mantiene la relación de proporciones de la imagen original. Si sólo se especifica una dimensión, la otra se calculará.',
        'effect callback' => 'image_scale_effect',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '960',
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function onix_features_home_node_info() {
  $items = array(
    'knowledge' => array(
      'name' => t('Knowledge'),
      'base' => 'node_content',
      'description' => t('Knowledge by OnixMedia'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'projects' => array(
      'name' => t('Projects'),
      'base' => 'node_content',
      'description' => t('Projects by OnixMedia'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'slideshow' => array(
      'name' => t('Slideshow'),
      'base' => 'node_content',
      'description' => t('Slideshows for OnixMedia'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'solutions' => array(
      'name' => t('Solutions'),
      'base' => 'node_content',
      'description' => t('Solutions by OnixMedia'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
