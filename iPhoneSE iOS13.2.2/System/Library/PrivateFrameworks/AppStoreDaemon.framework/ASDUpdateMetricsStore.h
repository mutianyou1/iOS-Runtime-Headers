/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:06 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSLock, NSArray, NSDate;

@interface ASDUpdateMetricsStore : NSObject {

	NSLock* _lock;
	double _averagePollTime;
	NSArray* _metrics;
	NSDate* _lastAutoPollDate;

}

@property (nonatomic,readonly) double averagePollTime;                 //@synthesize averagePollTime=_averagePollTime - In the implementation block
@property (nonatomic,readonly) NSArray * metrics;                      //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,readonly) NSDate * lastAutoPollDate;              //@synthesize lastAutoPollDate=_lastAutoPollDate - In the implementation block
+(id)_updateMetrics;
+(void)_setUpdateMetrics:(id)arg1 ;
-(id)init;
-(void)synchronize;
-(NSArray *)metrics;
-(void)_load;
-(id)_serialableData;
-(void)addPoll:(id)arg1 ;
-(double)averagePollTime;
-(NSDate *)lastAutoPollDate;
@end

