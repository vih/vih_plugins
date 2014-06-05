<?php

/**
 * Plugin definition
 */
$plugin = array(
  'title' => t('Content carousel block'),
  'description' => t('Displays a sample front page block'),
  'single' => TRUE,
  'category' => array(t('Isis One')),
  'render callback' => 'vih_plugins_content_carousel_block_content_type_render',
);


/**
 * Render Callback
 */
function vih_plugins_content_carousel_block_content_type_render($subtype, $conf, $args, $context) {
  $block = new stdClass();
  $block->content = '<section class="alternate">
  <div class="container">

    <article>
      <div class="row">
        <div class="col-md-6">
          <!--
              MULTIPLE VIDEOS - CAROUSEL TYPE
              If you ant a single video, delete this and add just a single line, example: <iframe width="800" height="450" src="http://www.youtube.com/embed/-bdKMT1znJ0"></iframe>
              Also, you can add images, not only videos - you can mix them! Be sure that you add to images: class="img-responsive"
          -->
          <div class="owl-carousel text-center" data-navigation="false" data-singleitem="true" data-autoplay="false" data-transition="false">
            <div class="item dragCursor text-center"><!-- video -->
              <iframe src="https://player.vimeo.com/video/23630702?title=0&amp;byline=0&amp;portrait=0" width="766" height="430"></iframe>
            </div>
            <div class="item dragCursor text-center"><!-- image -->
              <img class="img-responsive" src="/panopoly/sites/all/themes/isis_one/assets/images/preview/content/1_thumb.jpg" alt="" />
            </div>
            <div class="item dragCursor text-center"><!-- video -->
              <iframe width="800" height="450" src="http://www.youtube.com/embed/-bdKMT1znJ0"></iframe>
            </div>
          </div>
          <!-- /MULTIPLE VIDEOS - CAROUSEL TYPE -->
        </div>



        <div class="col-md-6">
          <!-- ARTICLE CONTENT -->
          <p>This is a content carousel. You can add videos and images. If you want to mix images and videos, be sure that you add <b>img-responsive</b> class to all images. Its required for images. </p>
          <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Maecenas metus nulla, commodo a sodales sed, dignissim pretium nunc. Nam et lacus neque. Ut enim massa, sodales tempor convallis et, iaculis ac massa. Etiam suscipit nisl eget lorem pellentesque quis iaculis mi mattis.</p>
          <!-- /ARTICLE CONTENT -->
        </div>
      </div>

    </article>

  </div>
</section>';

  return $block;
}
