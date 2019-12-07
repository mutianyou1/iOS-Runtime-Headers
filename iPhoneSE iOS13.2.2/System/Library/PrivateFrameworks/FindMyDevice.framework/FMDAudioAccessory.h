/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:00 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSURL;


@protocol FMDAudioAccessory <NSObject>
@property (nonatomic,readonly) unsigned long long inEar; 
@property (nonatomic,readonly) NSString * audioRoutingIdentifier; 
@property (nonatomic,readonly) NSURL * audioURL; 
@property (nonatomic,readonly) BOOL playingSound; 
@optional
-(BOOL)shouldStopSoundNow;

@required
-(NSURL *)audioURL;
-(unsigned long long)inEar;
-(BOOL)updateAudioAsset:(id)arg1;
-(BOOL)updatePlaybackChannels:(id)arg1;
-(NSString *)audioRoutingIdentifier;
-(BOOL)playingSound;

@end
