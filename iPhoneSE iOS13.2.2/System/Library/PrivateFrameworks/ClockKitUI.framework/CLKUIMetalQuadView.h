/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:03 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClockKitUI/ClockKitUI-Structs.h>
#import <ClockKitUI/CLKUIQuadView.h>

@protocol MTLCommandQueue, MTLComputePipelineState;
@class MTLRenderPassDescriptor, CAMetalLayer, NSArray;

@interface CLKUIMetalQuadView : CLKUIQuadView {

	id<MTLCommandQueue> _commandQueue;
	MTLRenderPassDescriptor* _renderPassDescriptor;
	BOOL _drawableSizeNeedsUpdate;
	CLKUIQuadSize _quadSize;
	CAMetalLayer* _metalLayer;
	NSArray* _quads;
	id<MTLComputePipelineState> _aplPipelineState;
	unsigned long long _colorPixelFormat;

}

@property (nonatomic,readonly) unsigned long long colorPixelFormat;              //@synthesize colorPixelFormat=_colorPixelFormat - In the implementation block
-(void)setOpaque:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)discardContents;
-(id)metalLayer;
-(unsigned long long)colorPixelFormat;
-(id)initWithFrame:(CGRect)arg1 options:(unsigned long long)arg2 colorSpace:(long long)arg3 ;
-(BOOL)_displayAndCheckForDrawable:(BOOL)arg1 WithCompletion:(/*^block*/id)arg2 ;
-(void)_handleQuadArrayChange:(id)arg1 ;
-(id)snapshotInRect:(CGRect)arg1 scale:(double)arg2 time:(double)arg3 ;
-(void)setSingleBufferMode:(BOOL)arg1 ;
-(float)computeAPL;
-(id)_newRenderPassDescriptor;
-(id)_snapshotTextureInRect:(CGRect)arg1 scale:(double)arg2 time:(double)arg3 withAdditionalPasses:(/*^block*/id)arg4 ;
-(id)_textureToImage:(id)arg1 scale:(double)arg2 ;
-(void)_updateDrawableSizeIfNecessary;
-(float)computeAPLAndSnapshot:(id*)arg1 ;
-(id)snapshotTextureInRect:(CGRect)arg1 scale:(double)arg2 time:(double)arg3 ;
@end
