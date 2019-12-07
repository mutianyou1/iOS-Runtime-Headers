/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:23 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <libobjc.A.dylib/QLDismissGestureTracking.h>

@class NSString;

@interface QLPinchRotationTracker : NSObject <QLDismissGestureTracking> {

	double _trackedScale;
	double _rotation;
	double _previousScale;
	double _targetZoom;
	CGRect _initialBounds;
	CGPoint _initialTrackingCenter;
	CGPoint _initialGestureLocation;
	CGPoint _location;
	CGPoint _anchorLocationOffset;
	CGAffineTransform _trackedTransform;
	BOOL _shouldFinishDismissal;
	double _dismissalProgress;
	double _minimumZoomForDismissal;
	CGPoint _anchorPoint;
	CGPoint _trackedCenter;

}

@property (nonatomic,readonly) CGPoint anchorPoint;                                           //@synthesize anchorPoint=_anchorPoint - In the implementation block
@property (nonatomic,readonly) CGPoint trackedCenter;                                         //@synthesize trackedCenter=_trackedCenter - In the implementation block
@property (nonatomic,readonly) CGRect trackedBounds; 
@property (nonatomic,readonly) CGAffineTransform trackedTransform;                            //@synthesize trackedTransform=_trackedTransform - In the implementation block
@property (nonatomic,readonly) QLDismissGestureTrackingVelocity trackedVelocity; 
@property (nonatomic,readonly) double finalAnimationDuration; 
@property (nonatomic,readonly) double finalAnimationSpringDamping; 
@property (nonatomic,readonly) double dismissalProgress;                                      //@synthesize dismissalProgress=_dismissalProgress - In the implementation block
@property (nonatomic,readonly) BOOL shouldFinishDismissal;                                    //@synthesize shouldFinishDismissal=_shouldFinishDismissal - In the implementation block
@property (assign,nonatomic) double targetZoom;                                               //@synthesize targetZoom=_targetZoom - In the implementation block
@property (assign,nonatomic) double minimumZoomForDismissal;                                  //@synthesize minimumZoomForDismissal=_minimumZoomForDismissal - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)update;
-(CGPoint)anchorPoint;
-(CGPoint)trackedCenter;
-(CGAffineTransform)trackedTransform;
-(QLDismissGestureTrackingVelocity)trackedVelocity;
-(double)finalAnimationSpringDamping;
-(void)setMinimumZoomForDismissal:(double)arg1 ;
-(void)setTargetZoom:(double)arg1 ;
-(void)startTrackingCenter:(CGPoint)arg1 bounds:(CGRect)arg2 transform:(CGAffineTransform)arg3 withInitialGestureLocation:(CGPoint)arg4 ;
-(void)trackGestureLocation:(CGPoint)arg1 ;
-(void)trackRotation:(double)arg1 ;
-(void)trackScale:(double)arg1 ;
-(double)dismissalProgress;
-(BOOL)shouldFinishDismissal;
-(CGRect)trackedBounds;
-(double)finalAnimationDuration;
-(double)targetZoom;
-(double)minimumZoomForDismissal;
@end
