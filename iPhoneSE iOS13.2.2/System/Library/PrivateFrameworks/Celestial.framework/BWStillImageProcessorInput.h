/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:30 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FigCaptureStillImageSettings, BWStillImageCaptureSettings, BWStillImageCaptureStreamSettings, NSString;

@interface BWStillImageProcessorInput : NSObject {

	FigCaptureStillImageSettings* _settings;
	BWStillImageCaptureSettings* _captureSettings;
	BWStillImageCaptureStreamSettings* _captureStreamSettings;

}

@property (nonatomic,readonly) FigCaptureStillImageSettings * settings; 
@property (nonatomic,readonly) BWStillImageCaptureSettings * captureSettings; 
@property (nonatomic,readonly) BWStillImageCaptureStreamSettings * captureStreamSettings; 
@property (nonatomic,readonly) BOOL isMaster; 
@property (nonatomic,readonly) NSString * portType; 
-(void)dealloc;
-(id)description;
-(NSString *)portType;
-(FigCaptureStillImageSettings *)settings;
-(BOOL)isMaster;
-(BWStillImageCaptureStreamSettings *)captureStreamSettings;
-(BWStillImageCaptureSettings *)captureSettings;
-(id)initWithSettings:(id)arg1 captureSettings:(id)arg2 portType:(id)arg3 ;
@end

