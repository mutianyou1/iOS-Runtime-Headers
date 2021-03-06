/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:39 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MOVStreamIO/MOVStreamIO-Structs.h>
@class AVTimedMetadataGroup;

@interface SampleBufferAndMetadata : NSObject {

	opaqueCMSampleBufferRef _sampleBuffer;
	AVTimedMetadataGroup* _metadata;

}

@property (assign) opaqueCMSampleBufferRef sampleBuffer;              //@synthesize sampleBuffer=_sampleBuffer - In the implementation block
@property (retain) AVTimedMetadataGroup * metadata;                   //@synthesize metadata=_metadata - In the implementation block
-(void)setMetadata:(AVTimedMetadataGroup *)arg1 ;
-(AVTimedMetadataGroup *)metadata;
-(opaqueCMSampleBufferRef)sampleBuffer;
-(void)setSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
@end

