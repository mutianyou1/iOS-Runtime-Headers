/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:01 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CFXPreviewViewControllerDelegate <NSObject>
@required
-(long long)orientationUsedForCapture;
-(long long)cameraModeUsedForCapture;
-(void)previewViewController:(id)arg1 didStartExportingMediaItem:(id)arg2;
-(id)selectedAppIdentifierForPreviewViewController:(id)arg1;
-(void)previewViewControllerDidStartEditingText:(id)arg1;
-(void)previewViewController:(id)arg1 didProgress:(double)arg2 exportingMediaItem:(id)arg3;
-(void)previewViewControllerDidHideUserInterface:(id)arg1;
-(void)previewViewControllerDidShowUserInterface:(id)arg1;
-(void)previewViewController:(id)arg1 didFinishExportingMediaItem:(id)arg2 withError:(id)arg3;
-(BOOL)mediaCapturedInFunCam;
-(void)previewViewControllerDidStopEditingText:(id)arg1;

@end

