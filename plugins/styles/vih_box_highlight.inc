<?php
/**
 * @file
 */

/**
 * Plugin definition.
 */
$plugin =  array(
  'title' => t('Highlight box on page'),
  'description'   => t('Highlight a box on the page'),
  'render pane' => 'vih_box_highlight_render_pane',
  'render region' => 'vih_box_highlight_render_region',
  'pane settings form' => 'vih_box_highlight_settings_form',
  'settings form' => 'vih_box_highlight_region_settings_form',
  'hook theme'    => array(
    'vih_box_highlight_theme_pane' => array(
      'template' => 'vih_box_highlight-pane',
      'path' => drupal_get_path('module', 'vih_plugins') .'/plugins/styles',
      'variables' => array(
        'content' => NULL,
        'settings' => NULL,
       ),
    ),
    'vih_box_highlight_theme_region' => array(
      'template' => 'vih_box_highlight-region',
      'path' => drupal_get_path('module', 'vih_plugins') .'/plugins/styles',
      'variables' => array(
        'content' => NULL,
        'settings' => NULL,
      ),
    ),
  ),
  'defaults' => array(
    'headline' => '',
    'style' => 'alternate',
  ),
);

/**
 * Render callback for pane
 */
function theme_vih_box_highlight_render_pane($vars) {
  $settings = $vars['settings'];
  $content = $vars['content'];
  return theme('vih_box_highlight_theme_pane', array('content' => $content, 'settings' => $settings));
}

/**
 * Render callback for region
 */
function theme_vih_box_highlight_render_region($vars) {
  $style = $vars['settings']['style'];

  $content = '';

  foreach ($vars['panes'] as $pane_id => $pane_output) {
    $content .= $pane_output;
  }
  if (empty($content)) {
    return;
  }

  return theme('vih_box_highlight_theme_region', array('content' => $content, 'style' => $style));
}

/**
 * Settings form callback.
 */
function vih_box_highlight_settings_form($style_settings) {

  $form['headline'] = array(
    '#type' => 'select',
    '#title' => t('Headline'),
    '#options' => array(
      '' => t('None'),
      'emphasis' => t('Emphasis'),
    ),
    '#default_value' => (isset($style_settings['headline'])) ? $style_settings['headline'] : '',
  );

  $form['style'] = array(
    '#type' => 'select',
    '#title' => t('Style'),
    '#options' => array(
      '' => t('None'),
      'emphasis' => t('Emphasis'),
      'alternate' => t('Alternate'),
      'boxed' => t('Box'),
      'jumbotron' => t('Jumbotron'),
    ),
    '#default_value' => (isset($style_settings['style'])) ? $style_settings['style'] : 'alternate',
  );

  return $form;
}

/**
 * Settings form callback.
 */
function vih_box_highlight_region_settings_form($style_settings) {

  $form['style'] = array(
    '#type' => 'select',
    '#title' => t('Style'),
    '#options' => array(
      '' => t('None'),
      'emphasis' => t('Emphasis'),
      'alternate' => t('Alternate'),
      'boxed' => t('Box'),
      'jumbotron' => t('Jumbotron'),
    ),
    '#default_value' => (isset($style_settings['style'])) ? $style_settings['style'] : 'alternate',
  );

  return $form;
}