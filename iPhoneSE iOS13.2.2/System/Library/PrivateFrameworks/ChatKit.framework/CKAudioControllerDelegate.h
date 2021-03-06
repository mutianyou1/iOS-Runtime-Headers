/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:56 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKAudioControllerDelegate <NSObject>
@optional
-(void)audioController:(id)arg1 mediaObjectDidFinishPlaying:(id)arg2;
-(void)audioController:(id)arg1 mediaObjectProgressDidChange:(id)arg2 currentTime:(double)arg3 duration:(double)arg4;
-(void)audioControllerDidPause:(id)arg1;
-(void)audioControllerDidStop:(id)arg1;
-(void)audioControllerPlayingDidChange:(id)arg1;
-(void)audioController:(id)arg1 didPrepareMediaObjectToPlay:(id)arg2 successfully:(BOOL)arg3;

@end

