(function ($) {

  /**
   * The recommended way for producing HTML markup through JavaScript is to write
   * theming functions. These are similiar to the theming functions that you might
   * know from 'phptemplate' (the default PHP templating engine used by most
   * Drupal themes including Omega). JavaScript theme functions accept arguments
   * and can be overriden by sub-themes.
   *
   * In most cases, there is no good reason to NOT wrap your markup producing
   * JavaScript in a theme function.
   */
  Drupal.theme.prototype.omegaO2ExampleButton = function (path, title) {
    // Create an anchor element with jQuery.
    return $('<a href="' + path + '" title="' + title + '">' + title + '</a>');
  };

  /**
   * Behaviors are Drupal's way of applying JavaScript to a page. In short, the
   * advantage of Behaviors over a simple 'document.ready()' lies in how it
   * interacts with content loaded through Ajax. Opposed to the
   * 'document.ready()' event which is only fired once when the page is
   * initially loaded, behaviors get re-executed whenever something is added to
   * the page through Ajax.
   *
   * You can attach as many behaviors as you wish. In fact, instead of overloading
   * a single behavior with multiple, completely unrelated tasks you should create
   * a separate behavior for every separate task.
   *
   * In most cases, there is no good reason to NOT wrap your JavaScript code in a
   * behavior.
   *
   * @param context
   *   The context for which the behavior is being executed. This is either the
   *   full page or a piece of HTML that was just added through Ajax.
   * @param settings
   *   An array of settings (added through drupal_add_js()). Instead of accessing
   *   Drupal.settings directly you should use this because of potential
   *   modifications made by the Ajax callback that also produced 'context'.
   */
  Drupal.behaviors.omegaO2ExampleBehavior = {
    attach: function (context, settings) {
      // By using the 'context' variable we make sure that our code only runs on
      // the relevant HTML. Furthermore, by using jQuery.once() we make sure that
      // we don't run the same piece of code for an HTML snippet that we already
      // processed previously. By using .once('foo') all processed elements will
      // get tagged with a 'foo-processed' class, causing all future invocations
      // of this behavior to ignore them.
      $('.some-selector', context).once('foo', function () {
        // Now, we are invoking the previously declared theme function using two
        // settings as arguments.
        var $anchor = Drupal.theme('omegaO2ExampleButton', settings.myExampleLinkPath, settings.myExampleLinkTitle);

        // The anchor is then appended to the current element.
        $anchor.appendTo(this);
      });
    }
  };

    Drupal.behaviors.general = {
        attach: function (context, settings) {
            // add news-overview class
            //$('.page-node-23, .page-node-10, .page-node-115, .page-node-121').addClass('news-overview');

            // add testimonial-overview class
            //$('.page-node-33, .page-node-123, .page-node-122, .page-node-124').addClass('testimonial-overview');

            // add service-overview class
            //$('.page-node-9, .page-node-113, .page-node-116, .page-node-117').addClass('service-overview');

            // add megadropdown class
            $('li.menu-mlid-468, .menu-mlid-673, .menu-mlid-685, .menu-mlid-684').addClass('megadropdown');

            // split diensten
            $('.menu-mlid-479, .menu-mlid-678, .menu-mlid-682, .menu-mlid-683').addClass('split');
            $('.menu-mlid-478, .menu-mlid-679, .menu-mlid-680, .menu-mlid-681').addClass('split-end');
            $('.menu-mlid-479 ul, .menu-mlid-678 ul, .menu-mlid-682 ul, .menu-mlid-683 ul').each(function(i) {
                var colsize = Math.round($(this).find('li').size() / 2);
                $(this).find('li').each(function (i) {
                        if (i >= colsize) {
                            $(this).addClass('splitcol_right');
                        }
                    }
                );
                //$(this).find('.splitcol_right').insertAfter(this).wrapAll('<ul></ul>');
            }
            );
        }
    };

})(jQuery);
