<?php

/**
 * Plugin definition
 */
$plugin = array(
  'title' => t('Full screen image'),
  'description' => t('Displays a sample front page block'),
  'single' => TRUE,
  'category' => array(t('Isis One')),
  'render callback' => 'vih_plugins_banner_image_block_content_type_render',
);


/**
 * Render Callback
 */
function vih_plugins_banner_image_block_content_type_render($subtype, $conf, $args, $context) {
  $block = new stdClass();
  $block->content = '<!-- HOME -->
<section id="home" class="full-screen"><!-- full-screen or half-screen (550px height) -->

  <div id="slider">

    <!-- slider navigation -->
    <nav class="slides-navigation">
      <a class="prev" href="#"></a>
      <a class="next" href="#"></a>
    </nav>

    <ul class="slides-container">

      <!-- Item 1 -->
      <li>
        <div class="image-caption">
          <hr /><hr />
          <div class="inner">
            <h2 class="bigtext strtoupper nomargin">Lets work together</h2>
            <a class="btn btn-primary white nofill scrollTo" href="#services"><i class="fa fa-play"></i> High Quality Services</a>
          </div>
          <hr /><hr />
        </div>

        <!--<span class="overlay"></span>-->
        <div style="background-image: url(\'sites/all/themes/isis_one/assets/images/preview/slider/background.jpg\');" class="fullscreen-img"></div>
      </li>

      <!-- Item 2 -->
      <li>
        <div class="image-caption">
          <hr /><hr />
          <div class="inner">
            <h1 class="bigtext strtoupper nomargin">ONE PAGE DESIGN</h1>
            <p>THE TEMPLATE IS EASY TO SET UP</p>
          </div>
          <hr /><hr />
        </div>

        <!--<span class="overlay"></span>-->
        <div style="background-image: url(\'sites/all/themes/isis_one/assets/images/preview/slider/vision.jpg\');" class="fullscreen-img"></div>
      </li>


      <!-- Item 3 -->
      <li>
        <div class="image-caption">
          <hr /><hr />
          <div class="inner">
            <h2 class="strtoupper nomargin">RESPONSIVE LAYOUT</h2>
          </div>
          <hr /><hr />
        </div>

        <!--<span class="overlay"></span>-->
        <div style="background-image: url(\'sites/all/themes/isis_one/assets/images/preview/slider/1.jpg\');" class="fullscreen-img"></div>
      </li>


    </ul>

  </div>

</section>
<!-- /HOME -->
';

  return $block;
}
