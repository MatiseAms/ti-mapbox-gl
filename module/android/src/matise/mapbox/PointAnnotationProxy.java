package matise.mapbox;

import org.appcelerator.kroll.KrollDict;
import org.appcelerator.kroll.KrollProxy;
import org.appcelerator.kroll.annotations.Kroll;
import org.appcelerator.titanium.util.Log;

import android.app.Activity;

import com.mapbox.mapboxsdk.annotations.Marker;
import com.mapbox.mapboxsdk.annotations.MarkerOptions;
import com.mapbox.mapboxsdk.geometry.LatLng;

// This proxy can be created by calling Mapbox.createExample({message: "hello world"})
@Kroll.proxy(creatableInModule=MapboxModule.class)
public class PointAnnotationProxy extends KrollProxy
{
    private static final String TAG = "PointAnnotationProxy";
    protected Marker marker;
    protected MarkerOptions options;

    // Constructor
	public PointAnnotationProxy()
	{
		super();
	}

    @Override
	public void handleCreationDict(KrollDict dict)
	{
		Log.d(TAG, "[PointAnnotationProxy] processProperties " + dict);

        options = new MarkerOptions()
            .position(new LatLng(53.039316519775205, 4.83801081161499))
            .title("Cape Town Harbour");
            ///*.icon(icon)*/);
	}
}
