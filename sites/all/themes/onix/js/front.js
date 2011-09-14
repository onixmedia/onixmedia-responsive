(function ($) {

  Drupal.behaviors.googlemap  = {
    attach: function(context) {
     var latlng = new google.maps.LatLng(25.6736,-100.337727);

      var myOptions = {
        zoom: 15,
        center: latlng,
        mapTypeId: google.maps.MapTypeId.ROADMAP
      };
      var map = new google.maps.Map(document.getElementById("mapa_onix"), myOptions);
      var contentString = '<div class="infowindow"><b>OnixMedia</b> <br/>Matamoros 1528 Ote. Col. Obispado, Monterrey Nuevo Leon <br/>+(52) 8180135723 </div>';
      var infowindow = new google.maps.InfoWindow({
          content: contentString
      });
      var marker = new google.maps.Marker({
          position: latlng,
          map: map,
          title:"OnixMedia (Monterrey)"
      });
      google.maps.event.addListener(marker, 'click', function() {
        infowindow.open(map,marker);
      });       
      //$("#mapa_onix").attr("position", "absolute");
      //$("#mapa_onix").attr("height", "321px");
    }
  };

}(jQuery));
