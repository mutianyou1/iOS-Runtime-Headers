/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:28 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKInteractiveChartDisplayType.h>

@class NSArray;

@interface HKAnnotationDisplayType : HKInteractiveChartDisplayType {

	NSArray* _trendChartPoints;

}

@property (nonatomic,readonly) NSArray * trendChartPoints;              //@synthesize trendChartPoints=_trendChartPoints - In the implementation block
-(id)initWithDateInterval:(id)arg1 trendData:(id)arg2 ;
-(NSArray *)trendChartPoints;
@end

