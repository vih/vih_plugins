<?php

/**
 * Plugin definition
 */
$plugin = array(
  'title' => t('Video'),
  'single' => TRUE,
  'category' => array(t('VIH')),
  'edit form' => 'vih_plugins_video_content_type_form',
);


/**
 * Settings Form
 */
function vih_plugins_video_content_type_form($form, &$form_state) {
  $conf = $form_state['conf'];

  $form['video'] = array(
    '#type' => 'textfield',
    '#title' => t('Video'),
    '#default_value' => !empty($conf['video']) ? $conf['video'] : 'http://www.youtube.com/watch?v=A3PDXmYoF5U',
    '#prefix' => '<div class="clear-block no-float">',
    '#suffix' => '</div>',
  );

  return $form;
}

function vih_plugins_video_content_type_form_submit($form, &$form_state) {
  foreach (element_children($form) as $key) {
    if (!empty($form_state['values'][$key])) {
      $form_state['conf'][$key] = $form_state['values'][$key];
    }
  }
}

/**
 * Render Callback
 */
function vih_plugins_video_content_type_render($subtype, $conf, $args) {
  $block = new stdClass();

  $background = 'sites/all/themes/isis_one/assets/images/preview/slider/vision.jpg';
  $logo = 'sites/all/themes/isis_one/assets/images/fullscreen-video.png';
  $block->title = isset($conf['title']) ? $conf['title'] : '';
  $block->content = '<!-- HOME -->
<section id="home" class="full-screen video" style="background-image:url(\'' . $background . '\');"><!-- background used for mobiles or error/not loading -->

  <!-- video audio icon -->
  <a href="#" id="video-volume"><i class="fa fa-volume-down"></i></a>

  <!-- Video Background - replace videoURL with your youtube video URL -->
  <a id="YTPlayer" class="player" data-property="{videoURL:\'' . $conf['video'] . '\',containment:\'body\',autoPlay:true, mute:true, startAt:4, opacity:1}">youtube</a>
  <!--/Video Background -->

  <span class="raster"><!-- video raster --></span>

  <!-- Caption -->
  <div class="image-caption">
    <div class="inner">
      We need a call to action here instead of a logo
      <!-- <img src="'. $logo . '" class="img-responsive" alt="" /> -->
    </div>
  </div>

</section>
<!-- /HOME -->';

  return $block;
}
