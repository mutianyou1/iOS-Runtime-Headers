/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:38 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSMatrix.framework/MPSMatrix
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSMatrix/MPSMatrixRandom.h>

@class MPSParallelRandomMTGP32;

@interface MPSMatrixRandomMTGP32 : MPSMatrixRandom {

	MPSParallelRandomMTGP32* _parallelFilter;

}
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)initWithDevice:(id)arg1 destinationDataType:(unsigned)arg2 seed:(unsigned long long)arg3 distributionDescriptor:(id)arg4 ;
-(id)initWithDevice:(id)arg1 destinationDataType:(unsigned)arg2 seed:(unsigned long long)arg3 ;
-(void)resetSeedOnCommandBuffer:(id)arg1 seed:(unsigned long long)arg2 ;
-(void)synchronizeStateOnCommandBuffer:(id)arg1 ;
-(void)encodeToCommandBuffer:(id)arg1 destinationVector:(id)arg2 ;
-(void)encodeToCommandBuffer:(id)arg1 destinationMatrix:(id)arg2 ;
@end
