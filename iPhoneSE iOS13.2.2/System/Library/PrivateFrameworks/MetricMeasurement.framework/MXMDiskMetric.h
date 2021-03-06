/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:45 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetricMeasurement/MXMMetric.h>

@class NSString, NSNumber, MXMInstrument;

@interface MXMDiskMetric : MXMMetric

@property (nonatomic,copy,readonly) NSString * processName; 
@property (nonatomic,copy,readonly) NSNumber * processIdentifier; 
@property (nonatomic,copy,readonly) MXMInstrument * instrument; 
+(id)currentProcess;
-(NSNumber *)processIdentifier;
-(NSString *)processName;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(id)initWithProcessIdentifier:(int)arg1 ;
-(id)initWithProcessName:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 filter:(id)arg2 ;
-(BOOL)_shouldConstructProbe;
-(id)_constructProbe;
@end

