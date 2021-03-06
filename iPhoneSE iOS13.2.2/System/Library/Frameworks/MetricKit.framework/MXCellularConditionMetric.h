/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:41 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/MetricKit.framework/MetricKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetricKit/MXMetric.h>

@class MXHistogram;

@interface MXCellularConditionMetric : MXMetric {

	MXHistogram* _histogrammedCellularConditionTime;

}

@property (readonly) MXHistogram * histogrammedCellularConditionTime;              //@synthesize histogrammedCellularConditionTime=_histogrammedCellularConditionTime - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)toDictionary;
-(id)initWithCellularConditionTime:(id)arg1 ;
-(MXHistogram *)histogrammedCellularConditionTime;
@end

