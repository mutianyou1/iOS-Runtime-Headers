/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:05 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMVideoHDRSuspensionCommand : CAMCaptureCommand {

	BOOL _videoHDRSuspended;

}

@property (getter=isVideoHDRSuspended,nonatomic,readonly) BOOL videoHDRSuspended;              //@synthesize videoHDRSuspended=_videoHDRSuspended - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isVideoHDRSuspended;
-(void)executeWithContext:(id)arg1 ;
-(id)initWithVideoHDRSuspended:(BOOL)arg1 ;
@end
