/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2009-2016 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */
#import "TiViewProxy.h"

@interface MatiseMapboxMapViewProxy : TiViewProxy {

}

- (void)setCenterCoordinate:(id)args;
- (void)addAnnotation:(id)args;
- (void)removeAnnotation:(id)args;
- (void)drawPolyline:(id)jsonPath;

@end
