<?php

/**
* Plugin definition
*/
$plugin = array(
  'title' => t('Big Quote'),
  'single' => TRUE,
  'category' => array(t('VIH')),
  'edit form' => 'vih_plugins_quote_content_type_form',
);


/**
 * Settings Form
 */
function vih_plugins_quote_content_type_form($form, &$form_state) {
  $conf = $form_state['conf'];

  $form['quote'] = array(
    '#type' => 'textarea',
    '#title' => t('Quote'),
    '#default_value' => !empty($conf['quote']) ? $conf['quote'] : '',
    '#prefix' => '<div class="clear-block no-float">',
    '#suffix' => '</div>',
  );

  $form['author'] = array(
    '#type' => 'textfield',
    '#title' => t('Author'),
    '#default_value' => !empty($conf['author']) ? $conf['author'] : t(''),
    '#prefix' => '<div class="clear-block no-float">',
    '#suffix' => '</div>',
  );
  /*
  $form['image'] = array(
    '#title' => t('Image'),
    '#type' => 'managed_file',
    '#description' => t('Upload an Image that is associated with this content.'),
    '#default_value' => '',
    //'#default_value' => !empty($conf['image']) ? variable_get($conf['image']) : '',
    '#upload_location' => 'public://quote_pane/',
    '#upload_validators' => array(
      'file_validate_extensions' => array('png jpeg jpg')
    ),
    '#array_parents' => array('image')
  );
  */

  return $form;
}

function vih_plugins_quote_content_type_form_submit($form, &$form_state) {
  foreach (element_children($form) as $key) {
    if (!empty($form_state['values'][$key])) {
      $form_state['conf'][$key] = $form_state['values'][$key];
    }
  }
}

/**
 * Render Callback
 */
function vih_plugins_quote_content_type_render($subtype, $conf, $args) {
  $block = new stdClass();
  $block->title = isset($conf['title']) ? $conf['title'] : '';
  $block->content = '
    <blockquote data-animation="bounceIn">
        <p>' . $conf['quote'] . '</p>
        <cite>'. $conf['author'] . '</cite>
    </blockquote>';

  return $block;
}
