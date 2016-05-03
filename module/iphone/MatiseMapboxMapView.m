/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2009-2016 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

#import "MatiseMapboxMapView.h"

@implementation MatiseMapboxMapView

-(void)dealloc
{
    RELEASE_TO_NIL(mapView);
    [super dealloc];
}

-(void)configurationSet
{
    mapView = [[MGLMapView alloc] initWithFrame:self.frame styleURL:[NSURL URLWithString:@"mapbox://styles/snowciety/cim0rhpm000jgccm3ltxwgrfq"]];
    
//    if([self proxyValueForKey:@"objectID"]) {
//        NSString *objectID = [self proxyValueForKey:@"objectID"];
//        
//        ENSURE_STRING(objectID);
//        
//        button.objectID = objectID;
//    }
    
    [self addSubview:mapView];
}

-(void)frameSizeChanged:(CGRect)frame bounds:(CGRect)bounds
{
    if (mapView != nil)
    {
        [TiUtils setView:mapView positionRect:bounds];
    }
    
    [super frameSizeChanged:frame bounds:bounds];
}

@end
