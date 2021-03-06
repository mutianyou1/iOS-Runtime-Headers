/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:41 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetAppsUtilities/NAFuture.h>

@protocol NAScheduler, OS_dispatch_queue;
@class NSObject;

@interface _NALazyFuture : NAFuture {

	BOOL _started;
	/*^block*/id _block;
	id<NAScheduler> _scheduler;
	NSObject*<OS_dispatch_queue> _accessQueue;

}

@property (nonatomic,copy) id block;                                                //@synthesize block=_block - In the implementation block
@property (nonatomic,retain) id<NAScheduler> scheduler;                             //@synthesize scheduler=_scheduler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> accessQueue;              //@synthesize accessQueue=_accessQueue - In the implementation block
@property (assign,nonatomic) BOOL started;                                          //@synthesize started=_started - In the implementation block
-(id)block;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(void)setBlock:(id)arg1 ;
-(BOOL)started;
-(void)setStarted:(BOOL)arg1 ;
-(id<NAScheduler>)scheduler;
-(void)setScheduler:(id<NAScheduler>)arg1 ;
-(void)setAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 scheduler:(id)arg2 ;
-(void)willAddCompletionBlock;
@end

