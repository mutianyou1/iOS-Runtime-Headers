/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:22 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PFPriorityEnqueuing
@required
-(void)enqueueWithPriority:(unsigned long long)arg1 qos:(unsigned)arg2 block:(/*^block*/id)arg3;
-(void)enqueueWithPriority:(unsigned long long)arg1 block:(/*^block*/id)arg2;
-(void)enqueueEmptyNotification:(/*^block*/id)arg1;
-(unsigned long long)schedulingLimitForPriorityLevel:(unsigned long long)arg1;
-(void)suspendScheduling;
-(void)resumeScheduling;

@end
