<?php
/**
 * @file
 */

/**
 * Plugin definition.
 */
$plugin = array(
  'title' => t('Button'),
  'description'   => t('Render links list as buttons'),
  'render pane' => 'vih_plugins_link_render_pane',
);

/**
 * Render callback
 *
 * @ingroup themable
 */
function theme_vih_plugins_link_render_pane($vars) {
  $content = $vars['content'];
  $output = '<div class="btn-links">' . render($content->content) . '</div>';
  return $output;
}
