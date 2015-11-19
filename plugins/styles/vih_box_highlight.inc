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
  'defaults' => array(
    'style' => 'alternate',
  ),
);

/**
 * Render callback for pane
 */
function theme_vih_box_highlight_render_pane($vars) {
  $settings = $vars['settings'];
  $pane = $vars['pane'];

  return theme('panels_pane', array(
    'content' => $vars['content'],
    'pane' => $pane,
    'display' => $vars['display'],
    'settings' => $settings,
  ));
}

/**
 * Render callback for region
 */
function theme_vih_box_highlight_render_region($vars) {
  $output = '<div class="' . check_plain($style) . '">';
  $output .= implode($vars['panes']);
  $output .= '</div>';

  return $output;
}

/**
 * Settings form callback.
 */
function vih_box_highlight_settings_form($style_settings) {

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