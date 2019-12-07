/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:35 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, AVPresentationContainerViewLayer, AVPresentationContainerViewAppearanceProxy;

@interface AVPresentationContainerView : UIView {

	BOOL _counterRotatingContentView;
	BOOL _wantsAppearanceConfigValues;
	BOOL _beingPresented;
	BOOL _beingDismissed;
	BOOL _willBeginOrientationChange;
	UIView* _presentationContainerContentView;
	long long _fromOrientation;
	long long _toOrientation;

}

@property (nonatomic,readonly) AVPresentationContainerViewLayer * layer; 
@property (assign,getter=isCounterRotatingContentView,nonatomic) BOOL counterRotatingContentView;              //@synthesize counterRotatingContentView=_counterRotatingContentView - In the implementation block
@property (assign,getter=isBeingPresented,nonatomic) BOOL beingPresented;                                      //@synthesize beingPresented=_beingPresented - In the implementation block
@property (assign,getter=isBeingDismissed,nonatomic) BOOL beingDismissed;                                      //@synthesize beingDismissed=_beingDismissed - In the implementation block
@property (assign,nonatomic) long long fromOrientation;                                                        //@synthesize fromOrientation=_fromOrientation - In the implementation block
@property (assign,nonatomic) long long toOrientation;                                                          //@synthesize toOrientation=_toOrientation - In the implementation block
@property (assign,nonatomic) BOOL willBeginOrientationChange;                                                  //@synthesize willBeginOrientationChange=_willBeginOrientationChange - In the implementation block
@property (assign,nonatomic,__weak) UIView * presentationContainerContentView;                                 //@synthesize presentationContainerContentView=_presentationContainerContentView - In the implementation block
@property (nonatomic,readonly) AVPresentationContainerViewAppearanceProxy * appearanceProxy; 
@property (assign,nonatomic) BOOL wantsAppearanceConfigValues;                                                 //@synthesize wantsAppearanceConfigValues=_wantsAppearanceConfigValues - In the implementation block
+(Class)layerClass;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setClipsToBounds:(BOOL)arg1 ;
-(void)layoutSubviews;
-(BOOL)isBeingPresented;
-(BOOL)isBeingDismissed;
-(void)_setContinuousCornerRadius:(double)arg1 ;
-(double)_cornerRadius;
-(void)_setCornerRadius:(double)arg1 ;
-(double)_continuousCornerRadius;
-(long long)fromOrientation;
-(long long)toOrientation;
-(void)setToOrientation:(long long)arg1 ;
-(void)setFromOrientation:(long long)arg1 ;
-(UIEdgeInsets)avkit_overrideLayoutMarginsForCounterRotation;
-(BOOL)avkit_isVideoGravityFrozen;
-(BOOL)avkit_isCounterRotatedForTransition;
-(BOOL)avkit_isBeingDismissed;
-(AVPresentationContainerViewAppearanceProxy *)appearanceProxy;
-(void)setWantsAppearanceConfigValues:(BOOL)arg1 ;
-(BOOL)wantsAppearanceConfigValues;
-(void)willBeginAdjustingOrientation;
-(UIEdgeInsets)avkit_overrideLayoutMarginsForInterfaceOrientation:(long long)arg1 ;
-(void)willStartPresentationTransitionFromInterfaceOrientation:(long long)arg1 toOrientation:(long long)arg2 needsCounterRotation:(BOOL)arg3 ;
-(void)willStartDismissalTransitionFromInterfaceOrientation:(long long)arg1 toOrientation:(long long)arg2 needsCounterRotation:(BOOL)arg3 ;
-(void)didStopTransition;
-(CGAffineTransform)_contentTransform;
-(double)_radiansForCounterRotation;
-(BOOL)isCounterRotatingContentView;
-(void)setCounterRotatingContentView:(BOOL)arg1 ;
-(UIView *)presentationContainerContentView;
-(void)setPresentationContainerContentView:(UIView *)arg1 ;
-(void)setBeingPresented:(BOOL)arg1 ;
-(void)setBeingDismissed:(BOOL)arg1 ;
-(BOOL)willBeginOrientationChange;
-(void)setWillBeginOrientationChange:(BOOL)arg1 ;
@end
