/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:19 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RBAssertionManagerQueueDelegate <NSObject>
@required
-(double)eventQueue:(id)arg1 startTimeForAssertion:(id)arg2;
-(void)eventQueue:(id)arg1 handleWarningEventForAssertion:(id)arg2;
-(void)eventQueue:(id)arg1 handleInvalidationEventForAssertion:(id)arg2;
-(double)eventQueue:(id)arg1 remainingRuntimeForProcessIdentity:(id)arg2;
-(void)eventQueue:(id)arg1 handleAssertionsExpirationWarningEventForProcessIdentity:(id)arg2 expirationTime:(double)arg3;

@end
