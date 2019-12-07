/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:17 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDevice, MTLCommandQueue, MTLCommandBuffer;
@interface VCPCNNMetalContext : NSObject {

	id<MTLDevice> _device;
	id<MTLCommandQueue> _commandQueue;
	id<MTLCommandBuffer> _commandBuffer;

}

@property (retain) id<MTLDevice> device;                            //@synthesize device=_device - In the implementation block
@property (retain) id<MTLCommandQueue> commandQueue;                //@synthesize commandQueue=_commandQueue - In the implementation block
@property (retain) id<MTLCommandBuffer> commandBuffer;              //@synthesize commandBuffer=_commandBuffer - In the implementation block
+(BOOL)supportGPU;
+(BOOL)supportVectorForward;
+(id)sharedCommandQueue;
-(id<MTLDevice>)device;
-(id<MTLCommandBuffer>)commandBuffer;
-(id<MTLCommandQueue>)commandQueue;
-(void)setCommandBuffer:(id<MTLCommandBuffer>)arg1 ;
-(void)setCommandQueue:(id<MTLCommandQueue>)arg1 ;
-(int)execute;
-(void)setDevice:(id<MTLDevice>)arg1 ;
-(id)initNewContext:(BOOL)arg1 ;
@end
