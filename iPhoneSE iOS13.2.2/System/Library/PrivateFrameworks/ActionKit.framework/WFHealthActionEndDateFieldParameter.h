/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:51 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFDateFieldParameter.h>

@class HKSampleType;

@interface WFHealthActionEndDateFieldParameter : WFDateFieldParameter {

	HKSampleType* _sampleType;

}

@property (nonatomic,retain) HKSampleType * sampleType;              //@synthesize sampleType=_sampleType - In the implementation block
-(BOOL)isHidden;
-(HKSampleType *)sampleType;
-(void)setSampleType:(HKSampleType *)arg1 ;
@end
