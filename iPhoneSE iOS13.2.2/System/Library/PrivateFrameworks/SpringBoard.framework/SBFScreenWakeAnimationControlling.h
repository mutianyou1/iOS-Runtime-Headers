/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:35 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBFScreenWakeAnimationControlling <NSObject>
@required
-(BOOL)isWakeAnimationInProgress;
-(void)prepareToWakeForSource:(long long)arg1 timeAlpha:(double)arg2 statusBarAlpha:(double)arg3 target:(id)arg4 completion:(/*^block*/id)arg5;
-(BOOL)isSleepAnimationInProgress;
-(void)sleepForSource:(long long)arg1 target:(id)arg2 completion:(/*^block*/id)arg3;
-(BOOL)interruptSleepAnimationIfNeeded;
-(BOOL)isWakeAnimationInProgressForSource:(long long)arg1;
-(void)setScreenWakeTemporarilyDisabled:(BOOL)arg1 forReason:(id)arg2;

@end
