/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:15 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/IdleTimerServices.framework/IdleTimerServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ITIdleTimerStateRequestDelegate <NSObject>
@required
-(BOOL)handleIdleEvent:(unsigned long long)arg1 usingConfigurationWithIdentifier:(id)arg2;
-(void)resendIdleTimerAssertions;

@end
