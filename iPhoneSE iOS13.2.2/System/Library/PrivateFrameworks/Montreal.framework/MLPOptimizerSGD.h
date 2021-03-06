/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:33 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Montreal/MLPOptimizer.h>

@class MPSVector;

@interface MLPOptimizerSGD : MLPOptimizer {

	MPSVector* _momentum;

}

@property (retain) MPSVector * momentum;              //@synthesize momentum=_momentum - In the implementation block
-(MPSVector *)momentum;
-(void)encodeToCommandBuffer:(id)arg1 inputGradientVector:(id)arg2 inputValuesVector:(id)arg3 ;
-(void)setMomentum:(MPSVector *)arg1 ;
-(void)updateLearningRate:(float)arg1 ;
-(id)initWithNetwork:(id)arg1 momentum:(/*^block*/id)arg2 ;
@end

