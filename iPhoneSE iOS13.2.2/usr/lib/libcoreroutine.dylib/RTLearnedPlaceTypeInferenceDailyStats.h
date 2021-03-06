/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:43 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface RTLearnedPlaceTypeInferenceDailyStats : NSObject {

	NSDate* _start;
	NSDate* _end;
	unsigned long long _visitCount;
	double _aggregateDwellTimeBetweenDateRange;

}

@property (nonatomic,readonly) NSDate * start;                                         //@synthesize start=_start - In the implementation block
@property (nonatomic,readonly) NSDate * end;                                           //@synthesize end=_end - In the implementation block
@property (nonatomic,readonly) unsigned long long visitCount;                          //@synthesize visitCount=_visitCount - In the implementation block
@property (nonatomic,readonly) double aggregateDwellTimeBetweenDateRange;              //@synthesize aggregateDwellTimeBetweenDateRange=_aggregateDwellTimeBetweenDateRange - In the implementation block
-(id)description;
-(NSDate *)start;
-(NSDate *)end;
-(unsigned long long)visitCount;
-(id)initWithStart:(id)arg1 end:(id)arg2 visitCount:(unsigned long long)arg3 aggregateDwellTimeBetweenDateRange:(double)arg4 ;
-(double)aggregateDwellTimeBetweenDateRange;
@end

