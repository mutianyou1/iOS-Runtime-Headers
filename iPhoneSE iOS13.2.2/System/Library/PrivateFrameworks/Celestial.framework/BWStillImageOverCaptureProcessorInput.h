/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:30 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWStillImageProcessorInput.h>

@protocol BWStillImageOverCaptureProcessorInputDelegate;
@interface BWStillImageOverCaptureProcessorInput : BWStillImageProcessorInput {

	id<BWStillImageOverCaptureProcessorInputDelegate> _delegate;
	opaqueCMSampleBufferRef _wideFieldOfViewFrame;
	opaqueCMSampleBufferRef _narrowFieldOfViewFrame;
	int overCaptureMode;
	BOOL _receivedAllFrames;
	int _receivedFrames;

}

@property (nonatomic,retain) id<BWStillImageOverCaptureProcessorInputDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) opaqueCMSampleBufferRef wideFieldOfViewFrame;                          //@synthesize wideFieldOfViewFrame=_wideFieldOfViewFrame - In the implementation block
@property (nonatomic,readonly) opaqueCMSampleBufferRef narrowFieldOfViewFrame;                        //@synthesize narrowFieldOfViewFrame=_narrowFieldOfViewFrame - In the implementation block
@property (nonatomic,readonly) int receivedFrames;                                                    //@synthesize receivedFrames=_receivedFrames - In the implementation block
@property (nonatomic,readonly) BOOL receivedAllFrames;                                                //@synthesize receivedAllFrames=_receivedAllFrames - In the implementation block
@property (nonatomic,readonly) int overCaptureMode; 
-(void)dealloc;
-(id<BWStillImageOverCaptureProcessorInputDelegate>)delegate;
-(void)setDelegate:(id<BWStillImageOverCaptureProcessorInputDelegate>)arg1 ;
-(int)receivedFrames;
-(void)addFrame:(opaqueCMSampleBufferRef)arg1 ;
-(int)overCaptureMode;
-(BOOL)receivedAllFrames;
-(id)initWithSettings:(id)arg1 captureSettings:(id)arg2 ;
-(opaqueCMSampleBufferRef)wideFieldOfViewFrame;
-(opaqueCMSampleBufferRef)narrowFieldOfViewFrame;
@end

