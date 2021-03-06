/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:08 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSTimer;

@interface TITypingAssertion : NSObject {

	BOOL _active;
	NSMutableSet* _restingPathIndices;
	NSTimer* _timer;

}

@property (nonatomic,retain) NSTimer * timer;                          //@synthesize timer=_timer - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active; 
+(id)sharedTypingAssertion;
-(id)init;
-(void)dealloc;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(NSTimer *)timer;
-(void)setTimer:(NSTimer *)arg1 ;
-(void)touch;
-(void)timerFired:(id)arg1 ;
-(void)restResetTouches;
-(void)restTouchStartWithPathIndex:(long long)arg1 ;
-(void)restTouchEndWithPathIndex:(long long)arg1 ;
-(void)_sbsSetTypingActive:(BOOL)arg1 ;
-(void)touchWithDuration:(double)arg1 ;
-(id)__restingPathIndices;
@end

