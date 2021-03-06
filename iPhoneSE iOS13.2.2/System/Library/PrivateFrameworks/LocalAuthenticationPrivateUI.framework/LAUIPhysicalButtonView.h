/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:39 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/LocalAuthenticationPrivateUI.framework/LocalAuthenticationPrivateUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LocalAuthenticationPrivateUI/LocalAuthenticationPrivateUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol UICoordinateSpace;
@class UIView, UILabel, NSString;

@interface LAUIPhysicalButtonView : UIView {

	id<UICoordinateSpace> _fixedCoordinateSpace;
	id<UICoordinateSpace> _coordinateSpace;
	unsigned _edge;
	BOOL _onScreen;
	UIView* _containerView;
	UILabel* _instructionLabel;
	UIView* _buttonView;
	BOOL _animating;
	double _animationLength;
	NSString* _periodicAnimationKey;
	long long _style;
	NSString* _instruction;

}

@property (nonatomic,readonly) long long style;                              //@synthesize style=_style - In the implementation block
@property (assign,getter=isAnimating,nonatomic) BOOL animating;              //@synthesize animating=_animating - In the implementation block
@property (nonatomic,copy) NSString * instruction;                           //@synthesize instruction=_instruction - In the implementation block
-(id)init;
-(long long)style;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)isAnimating;
-(void)didMoveToWindow;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setAnimating:(BOOL)arg1 ;
-(NSString *)instruction;
-(void)setInstruction:(NSString *)arg1 ;
-(void)updateFrame;
-(void)_setOnScreen:(BOOL)arg1 ;
-(void)_beginAnimationIfNecessary;
-(void)_animateWithLength:(double)arg1 ;
-(void)_beginAnimationIfNecessaryWithDelay:(double)arg1 ;
-(void)_animateWithLength:(double)arg1 delay:(double)arg2 ;
-(void)_removePeriodicAnimationForKey:(id)arg1 fromLayer:(id)arg2 ;
-(void)_endAnimationIfNecessary;
@end

