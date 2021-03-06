/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:02 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class CPSLabeledValueView, NSDateFormatter, NSDateComponentsFormatter, NSCalendar, NSTimeZone, NSMeasurement;

@interface CPSRouteEstimatesView : UIView {

	double _estimatedTimeRemaining;
	unsigned long long _timeRemainingColor;
	CPSLabeledValueView* _timeRemainingView;
	unsigned long long _tripEstimateStyle;
	CPSLabeledValueView* _arrivalTimeView;
	CPSLabeledValueView* _distanceRemainingView;
	NSDateFormatter* _arrivalDateFormatter;
	NSDateComponentsFormatter* _remainingTimeFormatter;
	NSCalendar* _calendar;

}

@property (nonatomic,readonly) CPSLabeledValueView * arrivalTimeView;                           //@synthesize arrivalTimeView=_arrivalTimeView - In the implementation block
@property (nonatomic,readonly) CPSLabeledValueView * distanceRemainingView;                     //@synthesize distanceRemainingView=_distanceRemainingView - In the implementation block
@property (nonatomic,readonly) NSDateFormatter * arrivalDateFormatter;                          //@synthesize arrivalDateFormatter=_arrivalDateFormatter - In the implementation block
@property (nonatomic,readonly) NSDateComponentsFormatter * remainingTimeFormatter;              //@synthesize remainingTimeFormatter=_remainingTimeFormatter - In the implementation block
@property (nonatomic,readonly) NSCalendar * calendar;                                           //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,copy) NSTimeZone * arrivalTimeZone; 
@property (assign,nonatomic) double estimatedTimeRemaining;                                     //@synthesize estimatedTimeRemaining=_estimatedTimeRemaining - In the implementation block
@property (nonatomic,copy) NSMeasurement * distanceRemaining; 
@property (assign,nonatomic) unsigned long long timeRemainingColor;                             //@synthesize timeRemainingColor=_timeRemainingColor - In the implementation block
@property (nonatomic,readonly) CPSLabeledValueView * timeRemainingView;                         //@synthesize timeRemainingView=_timeRemainingView - In the implementation block
@property (assign,nonatomic) unsigned long long tripEstimateStyle;                              //@synthesize tripEstimateStyle=_tripEstimateStyle - In the implementation block
-(NSCalendar *)calendar;
-(double)estimatedTimeRemaining;
-(void)setEstimatedTimeRemaining:(double)arg1 ;
-(id)initWithStyle:(unsigned long long)arg1 ;
-(void)_updateTextColors;
-(id)_defaultColorForStyle:(unsigned long long)arg1 ;
-(void)setDistanceRemaining:(NSMeasurement *)arg1 ;
-(NSTimeZone *)arrivalTimeZone;
-(NSDateComponentsFormatter *)remainingTimeFormatter;
-(unsigned long long)timeRemainingColor;
-(void)setTimeRemainingColor:(unsigned long long)arg1 ;
-(unsigned long long)tripEstimateStyle;
-(void)setTripEstimateStyle:(unsigned long long)arg1 ;
-(id)_timeRemainingColorForColor:(unsigned long long)arg1 style:(unsigned long long)arg2 ;
-(CPSLabeledValueView *)timeRemainingView;
-(CPSLabeledValueView *)distanceRemainingView;
-(CPSLabeledValueView *)arrivalTimeView;
-(NSDateFormatter *)arrivalDateFormatter;
-(void)_setArrivalTime:(id)arg1 ;
-(void)_setTimeRemaining:(id)arg1 units:(id)arg2 ;
-(void)_setDistanceRemaining:(id)arg1 units:(id)arg2 ;
-(id)_greenColorForStyle:(unsigned long long)arg1 ;
-(id)_orangeColorForStyle:(unsigned long long)arg1 ;
-(id)_redColorForStyle:(unsigned long long)arg1 ;
-(void)setArrivalTimeZone:(NSTimeZone *)arg1 ;
@end

