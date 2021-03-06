/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:57 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BKUIPearlEnrollViewDelegate <NSObject>
@required
-(void)enrollView:(id)arg1 willNudgeInDirection:(unsigned long long)arg2 nudgeCount:(unsigned long long)arg3;
-(void)enrollView:(id)arg1 didNudgeInDirection:(unsigned long long)arg2 nudgeCount:(unsigned long long)arg3;
-(void)didReachSmallNudgePeakForEnrollView:(id)arg1;
-(void)didReachLargeNudgePeakForEnrollView:(id)arg1;

@end

