<?php 
/**
 * Implements hook_preprocess_social_widget().
 * @ingroup themeable
 */
function template_preprocess_social_widget(&$variables) {
  $networks = vih_plugins_get_social_networks();
  $variables['links'] = array();
  // Format and show links.
  foreach ($networks as $name => $network) {
    if (isset($variables['networks']['show_' . $name])) {
      if ($variables['networks']['show_' . $name]) {
        $button_text = $variables['networks'][$name . '_button_text'];
        $link = $network['default'];
        $button = l($button_text, $link, array(
          'attributes' => array(
            'class' => array('btn', 'btn-lg', 'btn-default', 'btn-' . $name),
          ),
        ));
        $variables['links'][] = array('#markup' => $button);
      }
    }
  }
}
