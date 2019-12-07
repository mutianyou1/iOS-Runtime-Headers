/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:48 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NUJobPriorityQueue;

@interface NUJobQueue : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NUJobPriorityQueue* _interactiveQueue;
	NUJobPriorityQueue* _initiatedQueue;
	long long _updateGroupLevel;
	long long _stage;

}

@property (readonly) long long stage;              //@synthesize stage=_stage - In the implementation block
-(id)init;
-(id)description;
-(id)debugDescription;
-(long long)stage;
-(void)addJob:(id)arg1 ;
-(void)removeJob:(id)arg1 ;
-(void)_addJob:(id)arg1 ;
-(void)_removeJob:(id)arg1 ;
-(id)initWithStage:(long long)arg1 ;
-(void)addJobs:(id)arg1 ;
-(void)_addJobs:(id)arg1 ;
-(void)_incrementGroupLevel;
-(void)_decrementGroupLevel;
-(void)_startRunningIfNeeded;
-(void)finishedPriorityQueue:(id)arg1 ;
-(void)_finishedPriorityQueue:(id)arg1 ;
@end
