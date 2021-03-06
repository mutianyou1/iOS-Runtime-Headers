/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:39 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthMenstrualCyclesDaemon.framework/HealthMenstrualCyclesDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface HDMCDaySummaryBuilder : NSObject {

	NSMutableArray* _menstrualFlowSamples;
	NSMutableArray* _intermenstrualBleedingSamples;
	NSMutableArray* _symptomsSamples;
	NSMutableArray* _sexualActivitySamples;
	NSMutableArray* _ovulationTestResultSamples;
	NSMutableArray* _cervicalMucusQualitySamples;
	NSMutableArray* _basalBodyTemperatureSamples;
	long long _dayIndex;

}

@property (nonatomic,readonly) long long dayIndex;              //@synthesize dayIndex=_dayIndex - In the implementation block
-(unsigned long long)_symptoms;
-(long long)_ovulationTestResult;
-(long long)dayIndex;
-(BOOL)_intermenstrualBleeding;
-(long long)_sexualActivity;
-(long long)_cervicalMucusQuality;
-(id)_basalBodyTemperature;
-(id)createDaySummaryWithDevice:(id)arg1 calendarCache:(id)arg2 ;
-(id)initWithDayIndex:(long long)arg1 ;
-(void)addCycleTrackingSample:(id)arg1 ;
-(long long)_menstrualFlowWithCalendarCache:(id)arg1 modificationDay:(long long*)arg2 startOfCycleFromCycleTracking:(id*)arg3 ;
@end

