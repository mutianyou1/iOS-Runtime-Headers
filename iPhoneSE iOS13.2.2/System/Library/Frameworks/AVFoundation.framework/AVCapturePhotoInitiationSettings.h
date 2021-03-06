/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:10 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVCapturePhotoInitiationSettingsInternal;

@interface AVCapturePhotoInitiationSettings : NSObject {

	AVCapturePhotoInitiationSettingsInternal* _internal;

}

@property (nonatomic,readonly) unsigned long long timestamp; 
@property (nonatomic,readonly) long long uniqueID; 
@property (assign,nonatomic) long long flashMode; 
@property (assign,getter=isAutoStillImageStabilizationEnabled,nonatomic) BOOL autoStillImageStabilizationEnabled; 
@property (assign,nonatomic) long long HDRMode; 
@property (assign,nonatomic) BOOL burstQualityCaptureEnabled; 
+(id)photoInitiationSettingsWithUserInitiatedRequestTimestamp:(unsigned long long)arg1 ;
-(void)dealloc;
-(unsigned long long)timestamp;
-(long long)uniqueID;
-(long long)HDRMode;
-(long long)flashMode;
-(BOOL)burstQualityCaptureEnabled;
-(void)setFlashMode:(long long)arg1 ;
-(BOOL)isAutoStillImageStabilizationEnabled;
-(void)setHDRMode:(long long)arg1 ;
-(void)setAutoStillImageStabilizationEnabled:(BOOL)arg1 ;
-(id)_initWithTimestamp:(unsigned long long)arg1 ;
-(void)setBurstQualityCaptureEnabled:(BOOL)arg1 ;
@end

