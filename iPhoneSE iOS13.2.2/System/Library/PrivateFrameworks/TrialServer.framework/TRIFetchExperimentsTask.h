/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:31 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrialServer/TRIBaseTask.h>

@protocol TRITaskQueuing;
@class NSMutableArray, NSDate;

@interface TRIFetchExperimentsTask : TRIBaseTask {

	NSMutableArray* _nextTasks;
	id<TRITaskQueuing> _taskQueue;
	NSDate* _earliestDate;

}

@property (retain) NSDate * earliestDate;              //@synthesize earliestDate=_earliestDate - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)taskWithQueue:(id)arg1 earliestDate:(id)arg2 ;
+(id)taskWithQueue:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)earliestDate;
-(void)setEarliestDate:(NSDate *)arg1 ;
-(id)nextTasksForRunStatus:(int)arg1 ;
-(int)runTask;
-(id)initWithQueue:(id)arg1 earliestDate:(id)arg2 ;
-(BOOL)saveExperiment:(id)arg1 ;
-(id)getNextTaskForExperiment:(id)arg1 ;
-(void)addNextTask:(id)arg1 ;
-(BOOL)processExperiment:(id)arg1 ;
-(long long)nextTaskCount;
@end

