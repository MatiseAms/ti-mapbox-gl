# Mapbox Module

The goal of this module is to support as much as possible of the latest Mapbox SDK.

## Quick Start

### Get it
Download the latest zip file from [Releases](https://github.com/MatiseAms/ti-mapbox-gl/releases) and consult the [Titanium Documentation](http://docs.appcelerator.com/titanium/latest/#!/guide/Using_a_Module) on how install it.

Besides installing the module, for iOS it is also needed to download the plugin and install it. This can be done by cpoying the `ti.dynamiclib` folder to the plugins folder and add the plugin to the `tiapp.xml` file.

## Accessing the Mapbox Module

To access this module from JavaScript, you would do the following:

`var mapbox = require('matise.mapbox');`


The `mapbox` variable is a reference to the Module object.

## Reference

The documentation is split up in the following sections:

* TODO, please see the app.js example.

## Building new version

When updating the iOS Mapbox SDK it is important to run the `strip.sh` script in the `iphone` directory to generate a stripped framework for AdHoc and AppStore distribution. The dynamic library contains i386 and x64 archs which are not allowed to upload to the AppStore. The original framework is copied to both `platform` and zplatform/simz. The `strip.sh` creates a stripped version in `platform/appstore`. The `ti.dynamiclib.js` plugin than copies the correct framework during the build process to make sure the right framework is used.
