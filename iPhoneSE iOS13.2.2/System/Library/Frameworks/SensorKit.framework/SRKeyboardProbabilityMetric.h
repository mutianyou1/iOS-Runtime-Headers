/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:22 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/SensorKit.framework/SensorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUnit, NSMutableArray, NSArray;

@interface SRKeyboardProbabilityMetric : NSObject <NSSecureCoding> {

	NSUnit* _unitType;
	long long _totalDataSamples;
	NSMutableArray* _mutableSampleValues;

}

@property (copy) NSUnit * unitType;                                        //@synthesize unitType=_unitType - In the implementation block
@property (assign,nonatomic) long long totalDataSamples;                   //@synthesize totalDataSamples=_totalDataSamples - In the implementation block
@property (retain) NSMutableArray * mutableSampleValues;                   //@synthesize mutableSampleValues=_mutableSampleValues - In the implementation block
@property (copy,readonly) NSArray * distributionSampleValues; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUnit *)unitType;
-(void)setUnitType:(NSUnit *)arg1 ;
-(NSMutableArray *)mutableSampleValues;
-(long long)totalDataSamples;
-(void)setMutableSampleValues:(NSMutableArray *)arg1 ;
-(NSArray *)distributionSampleValues;
-(void)setTotalDataSamples:(long long)arg1 ;
@end
