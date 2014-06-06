<?php
/**
 * @file
 */

/**
 * Plugin definition.
 */
$plugin = array(
  'title' => t('Contact action'),
  'description'   => t('Render text pane as a contact CTA'),
  'render pane' => 'vih_plugins_cta_render_pane',
);

/**
 * Render callback
 *
 * @ingroup themable
 */
function theme_vih_plugins_cta_render_pane($vars) {
  $settings = $vars['settings'];
  $content = $vars['content'];
  $output = '<div class="call-to-action-block">';;
  $output .= '<h3>' . $content->title . '</h3>';
  $output .= render($content->content);
  $output .= '</div>';
  return $output;
}
