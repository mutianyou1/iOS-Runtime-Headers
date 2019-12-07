/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:10 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol INSearchForTimersIntentHandling <NSObject>
@optional
-(void)confirmSearchForTimers:(id)arg1 completion:(/*^block*/id)arg2;
-(void)resolveLabelForSearchForTimers:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)resolveDurationForSearchForTimers:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)resolveStateForSearchForTimers:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)resolveTypeForSearchForTimers:(id)arg1 withCompletion:(/*^block*/id)arg2;

@required
-(void)handleSearchForTimers:(id)arg1 completion:(/*^block*/id)arg2;

@end
