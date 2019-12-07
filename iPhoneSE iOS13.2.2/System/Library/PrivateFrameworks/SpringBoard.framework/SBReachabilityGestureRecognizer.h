/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:40 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@class SBTouchHistory, UITouch, SBReachabilitySettings;

@interface SBReachabilityGestureRecognizer : UIGestureRecognizer {

	BOOL _everTranslatedUpwards;
	BOOL _movedPastHysteresis;
	SBTouchHistory* _touchHistory;
	UITouch* _activeTouch;
	SBReachabilitySettings* _settings;
	CGPoint _initialTouchLocation;

}

@property (nonatomic,retain) SBTouchHistory * touchHistory;                  //@synthesize touchHistory=_touchHistory - In the implementation block
@property (nonatomic,retain) UITouch * activeTouch;                          //@synthesize activeTouch=_activeTouch - In the implementation block
@property (assign,nonatomic) CGPoint initialTouchLocation;                   //@synthesize initialTouchLocation=_initialTouchLocation - In the implementation block
@property (assign,nonatomic) BOOL everTranslatedUpwards;                     //@synthesize everTranslatedUpwards=_everTranslatedUpwards - In the implementation block
@property (assign,nonatomic) BOOL movedPastHysteresis;                       //@synthesize movedPastHysteresis=_movedPastHysteresis - In the implementation block
@property (nonatomic,retain) SBReachabilitySettings * settings;              //@synthesize settings=_settings - In the implementation block
-(void)reset;
-(SBReachabilitySettings *)settings;
-(void)setSettings:(SBReachabilitySettings *)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(UITouch *)activeTouch;
-(SBTouchHistory *)touchHistory;
-(void)setActiveTouch:(UITouch *)arg1 ;
-(void)setInitialTouchLocation:(CGPoint)arg1 ;
-(CGPoint)initialTouchLocation;
-(void)setTouchHistory:(SBTouchHistory *)arg1 ;
-(BOOL)everTranslatedUpwards;
-(void)setEverTranslatedUpwards:(BOOL)arg1 ;
-(BOOL)movedPastHysteresis;
-(void)setMovedPastHysteresis:(BOOL)arg1 ;
@end
