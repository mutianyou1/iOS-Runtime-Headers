/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:24 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MKZoomingGestureControlConfiguration <NSObject>
@property (nonatomic,readonly) double decelerationThreshold; 
@property (nonatomic,readonly) double maximumZoomInVelocity; 
@property (nonatomic,readonly) double maximumZoomOutVelocity; 
@property (nonatomic,readonly) double zoomOutFrictionScale; 
@property (nonatomic,readonly) double zoomDraggingResistance; 
@required
-(double)decelerationThreshold;
-(double)maximumZoomOutVelocity;
-(double)maximumZoomInVelocity;
-(double)zoomOutFrictionScale;
-(double)zoomDraggingResistance;

@end

