/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:35 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBSLockScreenServiceServerInterface
@required
-(oneway void)setPreventPasscodeLock:(id)arg1;
-(oneway void)setPreventSpuriousScreenUndim:(id)arg1;
-(oneway void)launchEmergencyDialerWithCompletion:(/*^block*/id)arg1;
-(oneway void)requestPasscodeUnlockUIWithOptions:(id)arg1 withCompletion:(/*^block*/id)arg2;

@end

