/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:50 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDWorkoutEventCollector.h>

@protocol OS_dispatch_queue;
@class CMSkiTracker, CMSkiData, NSObject;

@interface HDSkiingWorkoutEventCollector : HDWorkoutEventCollector {

	CMSkiTracker* _skiTracker;
	CMSkiData* _referenceSkiData;
	NSObject*<OS_dispatch_queue> _workoutEventQueue;

}
+(BOOL)isAvailableInCurrentHardware;
-(void)stop;
-(void)startWithSessionId:(id)arg1 ;
-(void)requestPendingEventsThroughDate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithProfile:(id)arg1 delegate:(id)arg2 ;
-(BOOL)supportsWorkoutActivityType:(unsigned long long)arg1 ;
-(void)_queue_startCollectionWithSessionId:(id)arg1 ;
-(void)_queue_stopCollection;
-(void)_queue_errorOccurred:(id)arg1 ;
-(void)_queue_querySkiDataWithCompletion:(/*^block*/id)arg1 ;
-(void)_queue_processSkiData:(id)arg1 error:(id)arg2 ;
-(void)_queue_generateSegmentEventForSkiData:(id)arg1 referenceData:(id)arg2 ;
-(id)_queue_generateDownhillSnowSportsDistanceSampleForSkiData:(id)arg1 referenceData:(id)arg2 ;
-(void)_queue_saveDownhillSnowSportsDistanceSamples:(id)arg1 ;
-(double)_percentSlopeForAngle:(double)arg1 ;
@end

