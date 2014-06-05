<?php

/**
 * Plugin definition
 */
$plugin = array(
  'title' => t('Team block'),
  'description' => t('Displays a sample front page block'),
  'single' => TRUE,
  'category' => array(t('Isis One')),
  'render callback' => 'vih_plugins_team_block_content_type_render',
);


/**
 * Render Callback
 */
function vih_plugins_team_block_content_type_render($subtype, $conf, $args, $context) {
  $block = new stdClass();
  $block->content = '<section>
  <div class="container">

    <article>
      <div class="row"><!-- row -->
        <div class="col-md-6"><!-- left -->

          <!--
              TEAM - CAROUSEL
              Each image should have `img-responsive` class
          -->
          <div class="owl-carousel text-center" data-navigation="false" data-singleitem="true" data-autoplay="true" data-transition="fade">

            <!-- TEAM 1 -->
            <div class="item text-center">

              <figure class="pull-left team-figure"><!-- image -->
                <img class="img-responsive" src="/panopoly/sites/all/themes/isis_one/assets/images/preview/content/people/1.jpg" height="200" alt="team member" />
                <!-- <img class="img-responsive" src="assets/images/1x1.png" data-src="holder.js/200x200/#999:#666/auto/" height="200" alt="team member" /> -->
              </figure>

              <div class="text-left clearfix fsize16"><!-- small description -->

                <h3 class="fsize20"><strong>Amanda Doe</strong> / CEO</h3>
                <p>Andouille tongue corned beef rump pork loin shank meatball capicola turducken venison shankle kevin pancetta tri-tip boudin.</p>

                <div class="socials"><!-- social icons -->
                  <a href="#" class="social fa fa-facebook"></a>
                  <a href="#" class="social fa fa-twitter"></a>
                  <a href="#" class="social fa fa-google-plus"></a>
                  <a href="#" class="social fa fa-linkedin"></a>
                  <a href="#" class="social fa fa-pinterest"></a>
                  <a href="#" class="social fa fa fa-vimeo-square"></a>
                  <a href="#" class="social fa fa-youtube-square"></a>
                </div>

              </div>

            </div>

            <!-- TEAM 2 -->
            <div class="item text-center">

              <figure class="pull-left team-figure"><!-- image -->
                <img class="img-responsive" src="/panopoly/sites/all/themes/isis_one/assets/images/preview/content/people/3.jpg" height="200" alt="team member" />
                <!-- <img class="img-responsive" src="assets/images/1x1.png" data-src="holder.js/200x200/#999:#666/auto/" height="200" alt="team member" /> -->
              </figure>

              <div class="text-left clearfix fsize16"><!-- small description -->

                <h3 class="fsize20"><strong>John Doe</strong> / DIRECTOR</h3>
                <p>Bacon ipsum dolor sit amet meatball shank pork chop capicola fatback pork loin sirloin flank.</p>

                <div class="socials"><!-- social icons -->
                  <a href="#" class="social fa fa-facebook"></a>
                  <a href="#" class="social fa fa-twitter"></a>
                  <a href="#" class="social fa fa-google-plus"></a>
                  <a href="#" class="social fa fa-linkedin"></a>
                  <a href="#" class="social fa fa-pinterest"></a>
                  <a href="#" class="social fa fa fa-vimeo-square"></a>
                  <a href="#" class="social fa fa-youtube-square"></a>
                </div>

              </div>

            </div>

            <!-- TEAM 3 -->
            <div class="item text-center">

              <figure class="pull-left team-figure"><!-- image -->
                <img class="img-responsive" src="/panopoly/sites/all/themes/isis_one/assets/images/preview/content/people/2.jpg" height="200" alt="team member" />
                <!-- <img class="img-responsive" src="assets/images/1x1.png" data-src="holder.js/200x200/#999:#666/auto/" height="200" alt="team member" /> -->
              </figure>

              <div class="text-left clearfix fsize16"><!-- small description -->

                <h3 class="fsize20"><strong>Cassie Doe</strong> / DESIGNER</h3>
                <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Maecenas metus nulla, commodo a sodales sed, dignissim pretium nunc.</p>

                <div class="socials"><!-- social icons -->
                  <a href="#" class="social fa fa-facebook"></a>
                  <a href="#" class="social fa fa-twitter"></a>
                  <a href="#" class="social fa fa-google-plus"></a>
                  <a href="#" class="social fa fa-linkedin"></a>
                  <a href="#" class="social fa fa-pinterest"></a>
                  <a href="#" class="social fa fa fa-vimeo-square"></a>
                  <a href="#" class="social fa fa-youtube-square"></a>
                </div>

              </div>

            </div>

            <!-- TEAM 4 -->
            <div class="item text-center">

              <figure class="pull-left team-figure"><!-- image -->
                <img class="img-responsive" src="/panopoly/sites/all/themes/isis_one/assets/images/preview/content/people/4.jpg" height="200" alt="team member" />
                <!-- <img class="img-responsive" src="assets/images/1x1.png" data-src="holder.js/200x200/#999:#666/auto/" height="200" alt="team member" /> -->
              </figure>

              <div class="text-left clearfix fsize16"><!-- small description -->

                <h3 class="fsize20"><strong>Bone Doe</strong> / PROGRAMMER</h3>
                <p>Bacon ipsum dolor sit amet meatball shank pork chop capicola fatback pork loin sirloin flank.</p>

                <div class="socials"><!-- social icons -->
                  <a href="#" class="social fa fa-facebook"></a>
                  <a href="#" class="social fa fa-twitter"></a>
                  <a href="#" class="social fa fa-google-plus"></a>
                  <a href="#" class="social fa fa-linkedin"></a>
                  <a href="#" class="social fa fa-pinterest"></a>
                  <a href="#" class="social fa fa fa-vimeo-square"></a>
                  <a href="#" class="social fa fa-youtube-square"></a>
                </div>

              </div>

            </div>

          </div>
          <!-- /TEAM - CAROUSEL -->

        </div><!-- /left -->



        <div class="col-md-6"><!-- right -->

          <!-- ABOUT US DESCRIPTION -->
          <h4>WHY WE ARE HERE?</h4>
          <p>Bacon ipsum dolor sit amet meatball shank pork chop capicola fatback pork loin sirloin flank. Andouille tongue corned beef rump pork loin shank meatball capicola turducken venison shankle kevin pancetta tri-tip boudin.</p>
          <p>Andouille tongue corned beef rump pork loin shank meatball capicola turducken venison shankle kevin pancetta tri-tip boudin.</p>

        </div><!-- /right -->
      </div><!-- /row -->


    </article>


  </div>
</section>';

  return $block;
}
