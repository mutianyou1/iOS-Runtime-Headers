/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:47 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HDDataCollector <NSObject>
@optional
-(void)registerWithAggregators;
-(double)preferredAggregationIntervalForAggregator:(id)arg1;
-(Class)sensorDatumClassForAggregator:(id)arg1;
-(BOOL)canResumeCollectionFromLastSensorDatum;
-(void)dataAggregator:(id)arg1 didPersistDatums:(id)arg2 success:(BOOL)arg3 error:(id)arg4;
-(void)dataAggregator:(id)arg1 requestsCollectionThroughDate:(id)arg2 completion:(/*^block*/id)arg3;

@required
-(void)beginCollectionForDataAggregator:(id)arg1 lastPersistedSensorDatum:(id)arg2;
-(void)dataAggregator:(id)arg1 wantsCollectionWithConfiguration:(id)arg2;
-(id)sourceForDataAggregator:(id)arg1;
-(id)identifierForDataAggregator:(id)arg1;

@end

