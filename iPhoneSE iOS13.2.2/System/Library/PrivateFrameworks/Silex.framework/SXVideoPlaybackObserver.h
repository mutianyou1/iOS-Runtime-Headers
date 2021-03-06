/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:37 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SXVideoPlaybackObserver <NSObject>
@optional
-(void)playbackCoordinatorStartedPlayback:(id)arg1;
-(void)playbackCoordinatorResumedPlayback:(id)arg1;
-(void)playbackCoordinatorPausedPlayback:(id)arg1;
-(void)playbackCoordinatorFinishedPlayback:(id)arg1;
-(void)playbackCoordinator:(id)arg1 playbackFailedWithError:(id)arg2;
-(void)playbackCoordinator:(id)arg1 timeElapsed:(double)arg2 duration:(double)arg3;
-(void)playbackCoordinator:(id)arg1 loadingProgressed:(double)arg2;
-(void)playbackCoordinatorPlaybackBufferFullStateChanged:(id)arg1;
-(void)playbackCoordinatorPlaybackLikelyToKeepUpStateChanged:(id)arg1;
-(void)playbackCoordinatorStateChanged:(id)arg1;
-(void)playbackCoordinatorMuteStateChanged:(id)arg1;

@end

