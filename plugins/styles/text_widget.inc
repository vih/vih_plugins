<?php
/**
 * @file
 *
 * @see http://www.grasmash.com/article/simple-custom-panels-pane-style
 */

/**
 * Plugin definition.
 */
$plugin = array(
  'title' => t('Style text widgets'),
  'description'   => t('Render text widget making links to a call to action button'),
  'render pane' => 'vih_plugins_text_widget_render_pane',
  'pane settings form' => 'vih_plugins_text_widget_settings_form',
  'defaults' => array(
    'style' => 'inverted',
    'cta' => 'cta-button'
  ),
);

/**
 * Settings form callback.
 */
function vih_plugins_text_widget_settings_form($style_settings) {

  $form['style'] = array(
    '#type' => 'select',
    '#title' => t('Style'),
    '#options' => array(
      '' => t('None'),
      'emphasis' => t('Emphasis'),
      'alternate' => t('Alternate'),
      'boxed' => t('Box'),
      'jumbotron' => t('Jumbotron'),
      'inverted' => t('Inverted'),
    ),
    '#default_value' => (isset($style_settings['style'])) ? $style_settings['style'] : 'alternate',
  );

  $form['cta'] = array(
    '#type' => 'select',
    '#title' => t('Render links as Call To Action buttons'),
    '#options' => array(
      'cta-button' => t('Yes'),
      '' => t('No'),
    ),
    '#default_value' => (isset($style_settings['cta'])) ? $style_settings['cta'] : 'cta-button',
  );

  return $form;
}

/**
 * Render callback
 *
 * @ingroup themable
 */
function theme_vih_plugins_text_widget_render_pane($vars) {
  $settings = $vars['settings'];
  $pane = $vars['pane'];

  return theme('panels_pane', array(
    'content' => $vars['content'],
    'pane' => $pane,
    'display' => $vars['display'],
    'settings' => $settings,
  ));
}
