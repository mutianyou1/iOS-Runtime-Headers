/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:40 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSCore/MPSState.h>

@interface MPSCNNConvolutionWeightsAndBiasesState : MPSState {

	unsigned long long _numberOfWeights;
	unsigned long long _numberOfBiases;
	unsigned _weightsDataType;
	unsigned _weightsLayout;
	unsigned long long _weightsOffset;
	unsigned long long _biasesOffset;

}

@property (nonatomic,readonly) unsigned long long numberOfWeights; 
@property (nonatomic,readonly) unsigned long long numberOfBiases; 
@property (nonatomic,readonly) unsigned weightsDataType; 
@property (nonatomic,readonly) unsigned weightsLayout; 
@property (nonatomic,readonly) id<MTLBuffer> weights; 
@property (nonatomic,readonly) id<MTLBuffer> biases; 
@property (nonatomic,readonly) unsigned long long weightsOffset; 
@property (nonatomic,readonly) unsigned long long biasesOffset; 
+(id)temporaryCNNConvolutionWeightsAndBiasesStateWithCommandBuffer:(id)arg1 cnnConvolutionDescriptor:(id)arg2 weightsDataType:(unsigned)arg3 weightsLayout:(unsigned)arg4 ;
+(id)temporaryCNNConvolutionWeightsAndBiasesStateWithCommandBuffer:(id)arg1 cnnConvolutionDescriptor:(id)arg2 weightsDataType:(unsigned)arg3 ;
+(id)temporaryCNNConvolutionWeightsAndBiasesStateWithCommandBuffer:(id)arg1 cnnConvolutionDescriptor:(id)arg2 ;
-(id<MTLBuffer>)weights;
-(unsigned)weightsLayout;
-(id)initWithWeights:(id)arg1 biases:(id)arg2 ;
-(id<MTLBuffer>)biases;
-(unsigned)weightsDataType;
-(unsigned long long)weightsOffset;
-(unsigned long long)numberOfWeights;
-(unsigned long long)numberOfBiases;
-(unsigned long long)biasesOffset;
-(id)initWithDevice:(id)arg1 cnnConvolutionDescriptor:(id)arg2 weightsDataType:(unsigned)arg3 weightsLayout:(unsigned)arg4 ;
-(void)initializeWithWeightsCount:(unsigned long long)arg1 weightsOffset:(unsigned long long)arg2 weightsDataType:(unsigned)arg3 weightsLayout:(unsigned)arg4 biasesCount:(unsigned long long)arg5 biasesOffset:(unsigned long long)arg6 ;
-(id)initWithWeights:(id)arg1 biases:(id)arg2 weightsDataType:(unsigned)arg3 ;
-(id)initWithWeights:(id)arg1 biases:(id)arg2 weightsDataType:(unsigned)arg3 weightsLayout:(unsigned)arg4 ;
-(id)initWithDevice:(id)arg1 cnnConvolutionDescriptor:(id)arg2 weightsDataType:(unsigned)arg3 ;
-(id)initWithDevice:(id)arg1 cnnConvolutionDescriptor:(id)arg2 ;
-(id)initWithWeights:(id)arg1 weightsOffset:(unsigned long long)arg2 biases:(id)arg3 biasesOffset:(unsigned long long)arg4 cnnConvolutionDescriptor:(id)arg5 ;
-(id)initWithWeights:(id)arg1 weightsOffset:(unsigned long long)arg2 weightsDataType:(unsigned)arg3 weightsLayout:(unsigned)arg4 biases:(id)arg5 biasesOffset:(unsigned long long)arg6 cnnConvolutionDescriptor:(id)arg7 ;
@end
