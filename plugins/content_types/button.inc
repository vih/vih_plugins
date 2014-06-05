<?php

/**
 * Plugin definition
 */
$plugin = array(
  'title' => t('Call to action button'),
  'description' => t('Adds a call to action button'),
  'single' => TRUE,
  'category' => array(t('VIH')),
  'edit form' => 'vih_plugins_button_content_type_form',
  'defaults' => array(
    'override_title' => FALSE,
    'override_title_text' => '',
    'widget' => '',
  ),
);

/**
 * Settings Form
 */
function vih_plugins_button_content_type_form($form, &$form_state) {
  $conf = $form_state['conf'];

  $form['button_text'] = array(
    '#type' => 'textfield',
    '#title' => t('Button Text'),
    '#default_value' => !empty($conf['button_text']) ? $conf['button_text'] : t(''),
    '#prefix' => '<div class="clear-block no-float">',
    '#suffix' => '</div>',
  );

  $form['link'] = array(
    '#type' => 'textfield',
    '#title' => t('Link'),
    '#default_value' => !empty($conf['link']) ? $conf['link'] : t(''),
    '#prefix' => '<div class="clear-block no-float">',
    '#suffix' => '</div>',
  );

  return $form;
}

/**
 * Submit handler
 */
function vih_plugins_button_content_type_form_submit($form, &$form_state) {
  foreach (element_children($form) as $key) {
    if (!empty($form_state['values'][$key])) {
      $form_state['conf'][$key] = $form_state['values'][$key];
    }
  }
}

/**
 * Render Callback
 */
function vih_plugins_button_content_type_render($subtype, $conf, $args, $context) {
  $block = new stdClass();
  $block->title = isset($conf['title']) ? $conf['title'] : '';
  $content[] = '<p><a class="btn btn-primary btn-lg" role="button"><a href="' . check_plain($conf['link']) . '">' . check_plain($conf['button_text']) . '</a></p>';

  $block->content = implode("\n", $content);

  return $block;
}