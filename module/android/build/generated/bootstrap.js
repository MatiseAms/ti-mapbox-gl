/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2011 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 *
 * Warning: This file is GENERATED, and should not be modified
 */
var bootstrap = kroll.NativeModule.require("bootstrap"),
	invoker = kroll.NativeModule.require("invoker"),
	Titanium = kroll.binding("Titanium").Titanium;

function moduleBootstrap(moduleBinding) {
	function lazyGet(object, binding, name, namespace) {
		return bootstrap.lazyGet(object, binding,
			name, namespace, moduleBinding.getBinding);
	}

	var module = moduleBinding.getBinding("matise.mapbox.MapboxModule")["Mapbox"];
	var invocationAPIs = module.invocationAPIs = [];
	module.apiName = "Mapbox";

	function addInvocationAPI(module, moduleNamespace, namespace, api) {
		invocationAPIs.push({ namespace: namespace, api: api });
	}

		addInvocationAPI(module, "Mapbox", "Mapbox", "createDemoView");
	addInvocationAPI(module, "Mapbox", "Mapbox", "createExample");
	addInvocationAPI(module, "Mapbox", "Mapbox", "createMapView");
	addInvocationAPI(module, "Mapbox", "Mapbox", "createPointAnnotation");

			if (!("__propertiesDefined__" in module)) {		
		Object.defineProperties(module, {
			"MapView": {
				get: function() {
					var MapView = lazyGet(this, "matise.mapbox.MapViewProxy", "MapView", "MapView");
					return MapView;
				},
				configurable: true
			},
			"PointAnnotation": {
				get: function() {
					var PointAnnotation = lazyGet(this, "matise.mapbox.PointAnnotationProxy", "PointAnnotation", "PointAnnotation");
					return PointAnnotation;
				},
				configurable: true
			},
			"DemoView": {
				get: function() {
					var DemoView = lazyGet(this, "matise.mapbox.DemoViewProxy", "DemoView", "DemoView");
					return DemoView;
				},
				configurable: true
			},
			"Example": {
				get: function() {
					var Example = lazyGet(this, "matise.mapbox.ExampleProxy", "Example", "Example");
					return Example;
				},
				configurable: true
			},
		
		});
		module.constructor.prototype.createDemoView = function() {
			return new module.DemoView(arguments);
		}
		module.constructor.prototype.createExample = function() {
			return new module.Example(arguments);
		}
		module.constructor.prototype.createMapView = function() {
			return new module.MapView(arguments);
		}
		module.constructor.prototype.createPointAnnotation = function() {
			return new module.PointAnnotation(arguments);
		}
		}
		module.__propertiesDefined__ = true;
		return module;

}
exports.bootstrap = moduleBootstrap;
