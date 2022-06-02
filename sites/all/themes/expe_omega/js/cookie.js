(function ($) {

  Drupal.behaviors.cookie = {
    attach: function(context, settings){
           
      $("#cookieAccept").click(function() {
        $.cookie('privacyWetgeving', '1', { expires: 999999, path: '/' });
        $("#cookieMessage").hide();
      });

      $.cookie('privacyWetgeving');
      cookie = parseInt($.cookie('privacyWetgeving'));

      if (cookie != 1) {
        $("#cookieMessage").show();
        $("#cookieMessage").css('bottom','0');
      }

    }
  }

})(jQuery);

