/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2009-2016 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

#import "MatiseMapboxPointAnnotationProxy.h"
#import "TiUtils.h"
#import <Mapbox/Mapbox.h>

@implementation MatiseMapboxPointAnnotationProxy

-(void)_initWithProperties:(NSDictionary*)properties {
    double lat = [TiUtils doubleValue:[properties objectForKey:@"lat"]];
    double lng = [TiUtils doubleValue:[properties objectForKey:@"lng"]];
    NSString *title = [properties objectForKey:@"title"];
    NSString *subtitle = [properties objectForKey:@"subtitle"];
    NSString *image = [properties objectForKey:@"image"];
    
    NSLog(@"[INFO] Image: %@", image);
    
    // Declare the marker `hello` and set its coordinates, title, and subtitle
    marker = [[MatiseMapboxPointAnnotation alloc] init];
    marker.coordinate = CLLocationCoordinate2DMake(lat, lng);
    marker.title = title;
    marker.subtitle = subtitle;
    marker.image = image;
}

-(void)setCoordinate:(id)args
{
    ENSURE_SINGLE_ARG(args, NSDictionary);
    double lat = [TiUtils doubleValue:[args objectForKey:@"lat"]];
    double lng = [TiUtils doubleValue:[args objectForKey:@"lng"]];

    marker.coordinate = CLLocationCoordinate2DMake(lat, lng);
}

-(id)marker
{
    return marker;
}

@end
