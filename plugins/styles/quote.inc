<?php
/**
 * @file
 */

/**
 * Plugin definition.
 */
$plugin = array(
  'title' => t('Image widget as quote'),
  'description'   => t('Render image widget as a quote'),
  'render pane' => 'vih_plugins_quote_render_pane',
  'pane settings form' => 'vih_plugins_quote_settings_form',
);

/**
 * Settings form callback.
 */
function vih_plugins_quote_settings_form($style_settings) {

  $form['style'] = array(
    '#type' => 'select',
    '#title' => t('Style'),
    '#options' => array(
      '' => t('None'),
      'quote' => t('Quote'),
      'contact' => t('Contact'),
    ),
    '#default_value' => (isset($style_settings['style'])) ? $style_settings['style'] : '',
  );

  return $form;
}

/**
 * Render callback
 *
 * @ingroup themable
 */
function theme_vih_plugins_quote_render_pane($vars) {
  $settings = $vars['settings'];
  $content = $vars['content'];
  $output = '<div class="' . $settings['style'] . ' clearfix">';
  if (!empty($content->title)) {
    $output .= '<h3>' . $content->title . '</h3>';
  }
  $output .= '<span class="helper"></span>';
  $output .= '<img src="' . image_style_url('medium', $content->content['#fieldable_panels_pane']->field_basic_image_image[LANGUAGE_NONE][0]['uri']) . '" />';
  $output .= '<div class="caption">';
  $output .= $content->content['#fieldable_panels_pane']->field_basic_image_caption[LANGUAGE_NONE][0]['safe_value'];
  $output .= '</div>';
  $output .= '</div>';
  return $output;
}
