/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:26 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HKGraphSeriesChartData.h>

@class NSString;

@interface HKHistogramChartData : NSObject <HKGraphSeriesChartData> {

	double _xValue;
	double _yValue;

}

@property (nonatomic,readonly) double xValue;                       //@synthesize xValue=_xValue - In the implementation block
@property (nonatomic,readonly) double yValue;                       //@synthesize yValue=_yValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)xValue;
-(double)yValue;
-(id)initWithXValue:(double)arg1 yValue:(double)arg2 ;
@end

