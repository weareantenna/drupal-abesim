(function ($, Drupal) {
    /**
     * Toggle show/hide nav on mobile devices
     */
    Drupal.behaviors.offCanvas = {
        attach: function (context) {
            $('.trigger').click(function(e) {
                $('html').toggleClass('js-nav-open');
                e.preventDefault();
                e.stopPropagation();
                console.log('ok');
            });
        }
    };

})(jQuery, Drupal);