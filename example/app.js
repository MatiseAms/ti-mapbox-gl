var win = Ti.UI.createWindow({
  backgroundColor: 'white'
});

var Mapbox = require('matise.mapbox');
var mapview = Mapbox.createMapView({
    styleUrl: "<your style url>",
    lat: 53.034413561940354,
    lng: 4.838747978210449,
    zoom: 12,
    // Only used on Android
    onMapReady: onMapReady,

    height: '50%',
    bottom: 0
});

// Add geojson
var file = Ti.Filesystem.getFile(Ti.Filesystem.resourcesDirectory, "geo.geojson");
var blob = file.read();
var geoJSON = blob.text;

if(OS_IOS)
    onMapReady();

function onMapReady() {
    // Add marker
    var marker = Mapbox.createPointAnnotation({
    	lat: 53.039316519775205,
        lng: 4.84801081161499,
        title: 'Hello',
        subtitle: 'Marker1',
        image: "marker.png"
    });

    var marker2 = Mapbox.createPointAnnotation({
    	lat: 53.039316519775205,
        lng: 4.83801081161499,
        title: 'Hello',
        subtitle: 'Marker2',
        image: "marker.png"
    });

    mapview.addAnnotation(marker);
    mapview.addAnnotation(marker2);

    setTimeout(function() {
        // On iOS the SDK does not support changing annotations, so they need to be removed and then re-added instead.
    	OS_IOS && mapview.removeAnnotation(marker);

    	marker.setCoordinate({
    		lat: 53.029316519775205,
        	lng: 4.83801081161499
    	});

        // On iOS the SDK does not support changing annotations, so they need to be removed and then re-added instead.
        OS_IOS && mapview.addAnnotation(marker);
    }, 2000);

    mapview.drawPolyline(geoJSON);
}

win.add(mapview);
win.open();
