/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:10 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVCaptureOutput.h>
#import <AVFoundation/AVCaptureDataOutputDelegateOverride.h>

@class AVCaptureAudioDataOutputInternal, NSDictionary, NSString;

@interface AVCaptureAudioDataOutput : AVCaptureOutput <AVCaptureDataOutputDelegateOverride> {

	AVCaptureAudioDataOutputInternal* _internal;

}

@property (nonatomic,readonly) id<AVCaptureAudioDataOutputSampleBufferDelegate> sampleBufferDelegate; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> sampleBufferCallbackQueue; 
@property (nonatomic,copy) NSDictionary * audioSettings; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id delegateOverride; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateOverrideCallbackQueue; 
+(void)initialize;
+(id)new;
-(id)init;
-(void)dealloc;
-(void)setSampleBufferDelegate:(id)arg1 queue:(id)arg2 ;
-(id)delegateOverride;
-(NSObject*<OS_dispatch_queue>)delegateOverrideCallbackQueue;
-(NSDictionary *)audioSettings;
-(void)attachSafelyToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)detachSafelyFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(id)connectionMediaTypes;
-(BOOL)canAddConnection:(id)arg1 failureReason:(id*)arg2 ;
-(void)_handleNotification:(id)arg1 payload:(id)arg2 ;
-(id)supportedAssetWriterOutputFileTypes;
-(void)_updateRemoteQueue:(remoteQueueReceiverOpaqueRef)arg1 ;
-(void)_handleRemoteQueueOperation:(FigRemoteOperation*)arg1 ;
-(void)setDelegateOverride:(id)arg1 delegateOverrideCallbackQueue:(id)arg2 ;
-(id<AVCaptureAudioDataOutputSampleBufferDelegate>)sampleBufferDelegate;
-(NSObject*<OS_dispatch_queue>)sampleBufferCallbackQueue;
-(void)setAudioSettings:(NSDictionary *)arg1 ;
-(id)recommendedAudioSettingsForAssetWriterWithOutputFileType:(id)arg1 ;
@end

