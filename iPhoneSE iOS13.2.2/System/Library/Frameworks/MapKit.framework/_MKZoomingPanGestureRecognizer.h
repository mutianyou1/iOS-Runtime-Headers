/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:24 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIPanGestureRecognizer.h>

@interface _MKZoomingPanGestureRecognizer : UIPanGestureRecognizer {

	double _zoomDraggingResistance;
	double _translation;
	double _scale;
	double _velocity;
	double _previousVelocity;
	BOOL _didStartUpdate;
	double _lastUpdateTimestamp;

}

@property (assign,nonatomic) double zoomDraggingResistance;              //@synthesize zoomDraggingResistance=_zoomDraggingResistance - In the implementation block
@property (nonatomic,readonly) double scale; 
@property (nonatomic,readonly) double velocity; 
-(double)scale;
-(void)reset;
-(double)velocity;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)_updateScaleAndVelocityIfNeeded:(long long)arg1 ;
-(double)zoomDraggingResistance;
-(void)setZoomDraggingResistance:(double)arg1 ;
@end
