/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2009-2016 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

#import "MatiseMapboxMapViewProxy.h"
#import "TiUtils.h"
#import "TiHost.h"

@implementation MatiseMapboxMapViewProxy

#pragma mark Custom functions
-(void)setCenterCoordinate:(id)args
{
    [[self view] performSelectorOnMainThread:@selector(setCenterCoordinate:)
                                  withObject:args waitUntilDone:NO];
}

-(void)addAnnotation:(id)args
{
    [[self view] performSelectorOnMainThread:@selector(addAnnotation:)
                                  withObject:args waitUntilDone:NO];
}

-(void)removeAnnotation:(id)args
{
    [[self view] performSelectorOnMainThread:@selector(removeAnnotation:)
                                  withObject:args waitUntilDone:NO];
}

- (void)drawPolyline:(id)args {
    // Perform GeoJSON parsing on a background thread
    [[self view] performSelectorInBackground:@selector(drawPolyline:)
                                  withObject:args];
}

@end
