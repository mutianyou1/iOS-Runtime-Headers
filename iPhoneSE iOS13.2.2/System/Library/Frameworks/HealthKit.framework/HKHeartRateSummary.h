/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:47 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDateInterval, HKQuantity, HKHeartRateSummaryStatistics, NSArray;

@interface HKHeartRateSummary : NSObject <NSSecureCoding> {

	long long _activityCacheIndex;
	NSDateInterval* _heartRateDateInterval;
	HKQuantity* _restingHeartRate;
	HKQuantity* _walkingAverageHeartRate;
	HKHeartRateSummaryStatistics* _allDayStatistics;
	NSArray* _workoutStatistics;
	NSArray* _workoutRecoveryStatistics;
	NSArray* _breatheStatistics;

}

@property (assign,nonatomic) long long activityCacheIndex;                                 //@synthesize activityCacheIndex=_activityCacheIndex - In the implementation block
@property (nonatomic,retain) NSDateInterval * heartRateDateInterval;                       //@synthesize heartRateDateInterval=_heartRateDateInterval - In the implementation block
@property (nonatomic,retain) HKQuantity * restingHeartRate;                                //@synthesize restingHeartRate=_restingHeartRate - In the implementation block
@property (nonatomic,retain) HKQuantity * walkingAverageHeartRate;                         //@synthesize walkingAverageHeartRate=_walkingAverageHeartRate - In the implementation block
@property (nonatomic,retain) HKHeartRateSummaryStatistics * allDayStatistics;              //@synthesize allDayStatistics=_allDayStatistics - In the implementation block
@property (nonatomic,retain) NSArray * workoutStatistics;                                  //@synthesize workoutStatistics=_workoutStatistics - In the implementation block
@property (nonatomic,retain) NSArray * workoutRecoveryStatistics;                          //@synthesize workoutRecoveryStatistics=_workoutRecoveryStatistics - In the implementation block
@property (nonatomic,retain) NSArray * breatheStatistics;                                  //@synthesize breatheStatistics=_breatheStatistics - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)activityCacheIndex;
-(NSDateInterval *)heartRateDateInterval;
-(HKQuantity *)restingHeartRate;
-(HKQuantity *)walkingAverageHeartRate;
-(HKHeartRateSummaryStatistics *)allDayStatistics;
-(NSArray *)workoutStatistics;
-(NSArray *)workoutRecoveryStatistics;
-(NSArray *)breatheStatistics;
-(id)initWithActivityCacheIndex:(long long)arg1 heartRateDateInterval:(id)arg2 restingHeartRate:(id)arg3 walkingAverageHeartRate:(id)arg4 allDayStatistics:(id)arg5 workoutStatistics:(id)arg6 workoutRecoveryStatistics:(id)arg7 breatheStatistics:(id)arg8 ;
-(void)setActivityCacheIndex:(long long)arg1 ;
-(void)setHeartRateDateInterval:(NSDateInterval *)arg1 ;
-(void)setRestingHeartRate:(HKQuantity *)arg1 ;
-(void)setWalkingAverageHeartRate:(HKQuantity *)arg1 ;
-(void)setAllDayStatistics:(HKHeartRateSummaryStatistics *)arg1 ;
-(void)setWorkoutStatistics:(NSArray *)arg1 ;
-(void)setWorkoutRecoveryStatistics:(NSArray *)arg1 ;
-(void)setBreatheStatistics:(NSArray *)arg1 ;
@end
