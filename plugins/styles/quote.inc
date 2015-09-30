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
);

/**
 * Render callback
 *
 * @ingroup themable
 */
function theme_vih_plugins_quote_render_pane($vars) {
  $settings = $vars['settings'];
  $content = $vars['content'];
  $output = '<div class="quote clearfix">';
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
