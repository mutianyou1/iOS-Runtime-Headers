/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:24 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ARTechniqueDelegate;
@class NSNumber;

@interface ARTechnique : NSObject {

	id<ARTechniqueDelegate> _delegate;
	unsigned long long _powerUsage;
	double _bonusLatency;
	NSNumber* _traceKey;

}

@property (__weak) id<ARTechniqueDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) unsigned long long powerUsage;                 //@synthesize powerUsage=_powerUsage - In the implementation block
@property (assign) double bonusLatency;                           //@synthesize bonusLatency=_bonusLatency - In the implementation block
@property (readonly) NSNumber * traceKey;                         //@synthesize traceKey=_traceKey - In the implementation block
+(id)techniqueOfClass:(Class)arg1 inArray:(id)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id<ARTechniqueDelegate>)delegate;
-(void)setDelegate:(id<ARTechniqueDelegate>)arg1 ;
-(void)prepare;
-(id)processData:(id)arg1 ;
-(id)processResultData:(id)arg1 timestamp:(double)arg2 context:(id)arg3 ;
-(void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2 ;
-(double)requiredTimeInterval;
-(id)resultDataClasses;
-(unsigned long long)requiredSensorDataTypes;
-(BOOL)reconfigurableFrom:(id)arg1 ;
-(void)reconfigureFrom:(id)arg1 ;
-(NSNumber *)traceKey;
-(void)setPowerUsage:(unsigned long long)arg1 ;
-(long long)captureBehavior;
-(BOOL)deterministicMode;
-(unsigned long long)powerUsage;
-(id)initWithParallelTechniques:(id)arg1 ;
-(id)initWithTechniques:(id)arg1 ;
-(id)techniques;
-(id)techniqueOfClass:(Class)arg1 ;
-(void)siblingTechniquesDidChange:(id)arg1 ;
-(id)predictedResultDataAtTimestamp:(double)arg1 context:(id)arg2 ;
-(void)mergeResultData:(id)arg1 intoData:(id)arg2 context:(id)arg3 ;
-(void)replaceTechniques:(id)arg1 ;
-(double)bonusLatency;
-(void)setBonusLatency:(double)arg1 ;
@end
