/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:35 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HUCameraPlayerAVBehaviorDelegate <NSObject>
@optional
-(void)playbackControlsDidChangePlayerVolume:(float)arg1;
-(void)playbackControlsDidToggleMuted:(BOOL)arg1;
-(void)playbackControlsDidUpdateVisibilityOfLoadingIndicator:(BOOL)arg1;

@required
-(double)currentScrubberResolutionForBehavior:(id)arg1;
-(void)pictureInPictureDidToggleMicrophone;

@end
