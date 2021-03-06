/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TAFilterGeneralSettings : NSObject {

	double _durationOfConsideration;
	double _thresholdOfLocationRelevance;
	double _thresholdOfSignificantDuration;
	double _thresholdOfSignificantDistance;
	double _capOfReasonableWalkingSpeed;

}

@property (nonatomic,readonly) double durationOfConsideration;                     //@synthesize durationOfConsideration=_durationOfConsideration - In the implementation block
@property (nonatomic,readonly) double thresholdOfLocationRelevance;                //@synthesize thresholdOfLocationRelevance=_thresholdOfLocationRelevance - In the implementation block
@property (nonatomic,readonly) double thresholdOfSignificantDuration;              //@synthesize thresholdOfSignificantDuration=_thresholdOfSignificantDuration - In the implementation block
@property (nonatomic,readonly) double thresholdOfSignificantDistance;              //@synthesize thresholdOfSignificantDistance=_thresholdOfSignificantDistance - In the implementation block
@property (nonatomic,readonly) double capOfReasonableWalkingSpeed;                 //@synthesize capOfReasonableWalkingSpeed=_capOfReasonableWalkingSpeed - In the implementation block
-(id)initWithDefaults;
-(double)thresholdOfSignificantDuration;
-(double)thresholdOfSignificantDistance;
-(id)initWithDurationOfConsiderationOrDefault:(id)arg1 thresholdOfLocationRelevanceOrDefault:(id)arg2 thresholdOfSignificantDurationOrDefault:(id)arg3 thresholdOfSignificantDistanceOrDefault:(id)arg4 capOfReasonableWalkingSpeedOrDefault:(id)arg5 ;
-(double)thresholdOfLocationRelevance;
-(double)durationOfConsideration;
-(double)capOfReasonableWalkingSpeed;
-(id)initWithDurationOfConsideration:(double)arg1 thresholdOfLocationRelevance:(double)arg2 thresholdOfSignificantDuration:(double)arg3 thresholdOfSignificantDistance:(double)arg4 capOfReasonableWalkingSpeed:(double)arg5 ;
@end

