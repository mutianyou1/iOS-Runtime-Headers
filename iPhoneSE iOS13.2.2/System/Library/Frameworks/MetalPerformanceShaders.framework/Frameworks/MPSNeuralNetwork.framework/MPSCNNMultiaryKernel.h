/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:40 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSCore/MPSKernel.h>

@protocol MPSNNPadding, MPSImageAllocator;
@interface MPSCNNMultiaryKernel : MPSKernel {

	NNKernelSourceParams* _srcInfo;
	unsigned long long _srcCount;
	SCD_Struct_MP4 _clipRect;
	unsigned long long _destinationFeatureChannelOffset;
	BOOL _isBackwards;
	BOOL _supportsBroadcasting;
	id<MPSNNPadding> _padding;
	id<MPSImageAllocator> _destinationImageAllocator;
	int _checkFlags;
	/*function pointer*/void* _batchEncode;
	void* _encodeData;

}

@property (nonatomic,readonly) unsigned long long sourceCount;                                //@synthesize srcCount=_srcCount - In the implementation block
@property (assign,nonatomic) SCD_Struct_MP4 clipRect;                                         //@synthesize clipRect=_clipRect - In the implementation block
@property (assign,nonatomic) unsigned long long destinationFeatureChannelOffset;              //@synthesize destinationFeatureChannelOffset=_destinationFeatureChannelOffset - In the implementation block
@property (nonatomic,readonly) BOOL isBackwards;                                              //@synthesize isBackwards=_isBackwards - In the implementation block
@property (nonatomic,readonly) BOOL isStateModified; 
@property (nonatomic,retain) id<MPSNNPadding> padding;                                        //@synthesize padding=_padding - In the implementation block
@property (nonatomic,retain) id<MPSImageAllocator> destinationImageAllocator;                 //@synthesize destinationImageAllocator=_destinationImageAllocator - In the implementation block
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setOffset:(SCD_Struct_MP11)arg1 ;
-(void)setEdgeMode:(unsigned long long)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(void)setClipRect:(SCD_Struct_MP4)arg1 ;
-(SCD_Struct_MP11)offset;
-(unsigned long long)kernelWidth;
-(void)setKernelWidth:(unsigned long long)arg1 ;
-(unsigned long long)kernelHeight;
-(void)setKernelHeight:(unsigned long long)arg1 ;
-(void)setStrideInPixelsX:(unsigned long long)arg1 ;
-(void)setStrideInPixelsY:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(void)setPadding:(id<MPSNNPadding>)arg1 ;
-(NSArray*)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 destinationStates:(NSArray*)arg3 destinationStateIsTemporary:(BOOL)arg4 ;
-(NSArray*)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 ;
-(id<MPSNNPadding>)padding;
-(unsigned long long)maxBatchSize;
-(unsigned long long)edgeMode;
-(SCD_Struct_MP4)clipRect;
-(unsigned long long)sourceCount;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)initWithDevice:(id)arg1 sourceCount:(unsigned long long)arg2 ;
-(id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 ;
-(BOOL)isResultStateReusedAcrossBatch;
-(unsigned long long)strideInPixelsX;
-(unsigned long long)strideInPixelsY;
-(unsigned long long)sourceFeatureChannelMaxCount;
-(unsigned long long)destinationFeatureChannelOffset;
-(void)setDestinationFeatureChannelOffset:(unsigned long long)arg1 ;
-(void)setSourceFeatureChannelOffset:(unsigned long long)arg1 ;
-(void)setSourceFeatureChannelMaxCount:(unsigned long long)arg1 ;
-(void)setDestinationImageAllocator:(id<MPSImageAllocator>)arg1 ;
-(void)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 destinationImages:(NSArray*)arg3 ;
-(unsigned long long)sourceFeatureChannelOffset;
-(void)encodeToCommandBuffer:(id)arg1 sourceImages:(id)arg2 destinationImage:(id)arg3 ;
-(void)copyToGradientState:(id)arg1 sourceImages:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4 ;
-(id)temporaryResultStateForCommandBuffer:(id)arg1 sourceImages:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4 ;
-(id)resultStateForSourceImages:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 ;
-(NSArray*)temporaryResultStateBatchForCommandBuffer:(id)arg1 sourceImages:(id)arg2 sourceStates:(id)arg3 destinationImage:(NSArray*)arg4 ;
-(NSArray*)resultStateBatchForSourceImages:(id)arg1 sourceStates:(id)arg2 destinationImage:(NSArray*)arg3 ;
-(void)setDilationRateX:(unsigned long long)arg1 ;
-(void)setDilationRateY:(unsigned long long)arg1 ;
-(id<MPSImageAllocator>)destinationImageAllocator;
-(BOOL)isStateModified;
-(void)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 inStates:(NSArray*)arg3 destinationImages:(NSArray*)arg4 ;
-(BOOL)appendBatchBarrier;
-(id)encodeToCommandBuffer:(id)arg1 sourceImages:(id)arg2 ;
-(NSArray*)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 sourceStates:(NSArray*)arg3 ;
-(unsigned long long)dilationRateX;
-(unsigned long long)dilationRateY;
-(BOOL)isBackwards;
-(void)encodeToCommandBuffer:(id)arg1 sourceImages:(id)arg2 inState:(id)arg3 destinationImage:(id)arg4 ;
-(id)encodeToCommandBuffer:(id)arg1 sourceImages:(id)arg2 inState:(id)arg3 ;
-(id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 paddingMethod:(unsigned long long)arg3 ;
-(SCD_Struct_MP11)offsetAtIndex:(unsigned long long)arg1 ;
-(void)setOffset:(SCD_Struct_MP11)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)sourceFeatureChannelOffsetAtIndex:(unsigned long long)arg1 ;
-(void)setSourceFeatureChannelOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)sourceFeatureChannelMaxCountAtIndex:(unsigned long long)arg1 ;
-(void)setSourceFeatureChannelMaxCount:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)edgeModeAtIndex:(unsigned long long)arg1 ;
-(void)setEdgeMode:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)kernelWidthAtIndex:(unsigned long long)arg1 ;
-(void)setKernelWidth:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)kernelHeightAtIndex:(unsigned long long)arg1 ;
-(void)setKernelHeight:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)strideInPixelsXatIndex:(unsigned long long)arg1 ;
-(void)setStrideInPixelsX:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)strideInPixelsYatIndex:(unsigned long long)arg1 ;
-(void)setStrideInPixelsY:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)dilationRateXatIndex:(unsigned long long)arg1 ;
-(void)setDilationRateX:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)dilationRateYatIndex:(unsigned long long)arg1 ;
-(void)setDilationRateY:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(id)encodeToCommandBuffer:(id)arg1 sourceImages:(id)arg2 destinationState:(id*)arg3 destinationStateIsTemporary:(BOOL)arg4 ;
@end

