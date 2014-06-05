<?php

/**
 * Plugin definition
 */
$plugin = array(
  'title' => t('Call to action block'),
  'description' => t('Displays a call to action box'),
  'single' => TRUE,
  'category' => array(t('VIH')),
  'edit form' => 'vih_plugins_calltoaction_content_type_form',
  'admin info' => 'vih_plugins_calltoaction_admin_info',
  'defaults' => array(),
);

/**
 * Settings Form
 */
function vih_plugins_calltoaction_content_type_form($form, &$form_state) {
  $conf = $form_state['conf'];

  $form['header'] = array(
    '#type' => 'textarea',
    '#title' => t('Header'),
    '#default_value' => !empty($conf['header']) ? $conf['header'] : '',
    '#prefix' => '<div class="clear-block no-float">',
    '#suffix' => '</div>',
  );

  $form['text'] = array(
    '#type' => 'textarea',
    '#title' => t('Text'),
    '#default_value' => !empty($conf['text']) ? $conf['text'] : t(''),
    '#prefix' => '<div class="clear-block no-float">',
    '#suffix' => '</div>',
  );

  return $form;
}

/**
 * Submit handler
 */
function vih_plugins_calltoaction_content_type_form_submit($form, &$form_state) {
  foreach (element_children($form) as $key) {
    if (!empty($form_state['values'][$key])) {
      $form_state['conf'][$key] = $form_state['values'][$key];
    }
  }
}

/**
 * Render Callback
 */
function vih_plugins_calltoaction_content_type_render($subtype, $conf, $args, $context) {
  $block = new stdClass();
  $block->content = '
<div class="util-row calltoaction-block">
  <h2>' . $conf['title'] . '</h2>
  <div>
    <h3>' . $conf['header'] . '</h3>
    <p>' . $conf['text'] . '</p>
  </div>
</div>';

  return $block;
}

/**
 * ‘admin info’ callback for panel pane.
 */
function vih_plugins_calltoaction_admin_info($subtype, $conf, $contexts) {
  // TODO What should be returned here for at better interface?
}