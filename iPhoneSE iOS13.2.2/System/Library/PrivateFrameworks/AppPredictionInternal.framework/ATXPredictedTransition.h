/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:57 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, ATXLocationOfInterest;

@interface ATXPredictedTransition : NSObject {

	NSDate* _date;
	ATXLocationOfInterest* _loi;

}

@property (nonatomic,readonly) NSDate * date;                            //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) ATXLocationOfInterest * loi;              //@synthesize loi=_loi - In the implementation block
-(id)init;
-(id)description;
-(NSDate *)date;
-(ATXLocationOfInterest *)loi;
-(id)transitionArrayForDate:(id)arg1 ;
-(id)initWithDate:(id)arg1 loi:(id)arg2 ;
@end

