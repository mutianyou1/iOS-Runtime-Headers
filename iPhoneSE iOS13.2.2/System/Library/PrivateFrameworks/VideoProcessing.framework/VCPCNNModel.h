/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:17 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VCPCNNBlock, VCPCNNMetalContext, VCPCNNData;

@interface VCPCNNModel : NSObject {

	VCPCNNBlock* _blocks[200];
	short _quantFactor;
	BOOL _useGPU;
	VCPCNNMetalContext* _context;
	VCPCNNData* _output;

}

@property (readonly) VCPCNNData * output;              //@synthesize output=_output - In the implementation block
-(id)init;
-(int)size;
-(VCPCNNData *)output;
-(int)add:(id)arg1 ;
-(id)initWithParameters:(short)arg1 useGPU:(BOOL)arg2 ;
-(id)getGPUContext;
-(int)prepareNetworkFromURL:(id)arg1 withInputSize:(id)arg2 ;
-(int)forward:(id)arg1 ;
-(int)dynamicForward:(id)arg1 paramFileUrl:(id)arg2 cancel:(/*^block*/id)arg3 ;
@end

