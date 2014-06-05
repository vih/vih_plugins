<?php

/**
 * Plugin definition
 */
$plugin = array(
  'title' => t('Blog block'),
  'description' => t('Displays a sample front page block'),
  'single' => TRUE,
  'category' => array(t('Isis One')),
  'render callback' => 'vih_plugins_blog_block_content_type_render',
);


/**
 * Render Callback
 */
function vih_plugins_blog_block_content_type_render($subtype, $conf, $args, $context) {
  $block = new stdClass();
  $block->content = '<!-- BLOG -->
<section id="quick-blog" class="alternate">
  <div class="container">
    <header class="text-center">
      <h1>BLOG</h1>
      <p>RECENT ENTRIES</p>
    </header>

    <div class="divider"><!-- lines divider --></div>

    <article>
      <div class="row animate_fade_in">

        <!-- article -->
        <div class="col-md-4 quick-hover">
          <div class="quick-item">
            <figure class="media-preview"><!-- image -->
              <img src="/panopoly/sites/all/themes/isis_one/assets/images/1x1.png" class="img-responsive" data-src="holder.js/360x200/#676767:#555555/auto/" alt="img" />
            </figure>

            <h4>Simple but powerful</h4>
            <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Maecenas metus nulla, commodo a sodales sed, dignissim pretium nunc. Nam et lacus neque.</p>
            <a href="blog-post.html" class="btn btn-xs"><i class="fa fa-sign-out"></i> READ MORE</a>
          </div>
        </div>


        <!-- article -->
        <div class="col-md-4 quick-hover">
          <div class="quick-item">
            <div class="media-preview"><!-- video -->
              <iframe src="https://player.vimeo.com/video/24569304?title=0&amp;byline=0&amp;portrait=0" width="360" height="200"></iframe>
            </div>

            <h4>Easy to customize</h4>
            <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Maecenas metus nulla, commodo a sodales sed, dignissim pretium nunc. Nam et lacus neque.</p>
            <a href="blog-post.html" class="btn btn-xs"><i class="fa fa-sign-out"></i> READ MORE</a>
          </div>
        </div>


        <!-- article -->
        <div class="col-md-4 quick-hover">
          <div class="quick-item">
            <div class="media-preview"><!-- audio -->
              <iframe class="fullwidth" height="200" src="https://w.soundcloud.com/player/?url=https%3A//api.soundcloud.com/tracks/97336936&amp;color=7E8344&amp;auto_play=false&amp;show_artwork=false"></iframe>
            </div>

            <h4>Easy to integrate</h4>
            <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Maecenas metus nulla, commodo a sodales sed, dignissim pretium nunc. Nam et lacus neque.</p>
            <a href="blog-post.html" class="btn btn-xs"><i class="fa fa-sign-out"></i> READ MORE</a>
          </div>
        </div>

      </div>
    </article>

    <div class="divider"><!-- lines divider --></div>

    <article class="text-center" data-animation="bounceIn">
      <a href="blog.html" class="plusNav" title="more from blog">+</a>
    </article>
  </div>
</section>
<!-- /BLOG -->';

  return $block;
}
