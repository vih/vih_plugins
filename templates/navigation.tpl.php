<?php

/**
 * @file
 * Template for site navigation.
 */
?>

<!-- Collect the nav links, forms, and other content for toggling -->
<div class="collapse navbar-collapse" id="bs-example-navbar-collapse-1">

                <!-- Fullscreen Button - Unavailable for IE -->
                <a href="#" class="btn-fullscreen"><i class="fa fa-external-link"></i></a>

                <ul class="nav navbar-nav navbar-right">
                    <?php if ($main_menu): ?>
                        <?php print render($main_menu); ?>
                    <?php endif; ?>
                </ul>
            </div><!-- /.navbar-collapse -->
