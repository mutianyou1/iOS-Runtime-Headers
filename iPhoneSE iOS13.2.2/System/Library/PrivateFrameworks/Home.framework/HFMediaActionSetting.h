/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:29 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HFMediaPlaybackActionBuilder, HFPlaybackArchive;

@interface HFMediaActionSetting : NSObject {

	HFMediaPlaybackActionBuilder* _mediaActionBuilder;
	long long _originalHMNonPausePlaybackState;
	HFPlaybackArchive* _playbackArchive;

}

@property (nonatomic,readonly) HFMediaPlaybackActionBuilder * mediaActionBuilder;              //@synthesize mediaActionBuilder=_mediaActionBuilder - In the implementation block
@property (assign,nonatomic) long long originalHMNonPausePlaybackState;                        //@synthesize originalHMNonPausePlaybackState=_originalHMNonPausePlaybackState - In the implementation block
@property (nonatomic,retain) HFPlaybackArchive * playbackArchive;                              //@synthesize playbackArchive=_playbackArchive - In the implementation block
-(HFPlaybackArchive *)playbackArchive;
-(void)setPlaybackArchive:(HFPlaybackArchive *)arg1 ;
-(void)updatePlaybackState:(long long)arg1 ;
-(void)setOriginalHMNonPausePlaybackState:(long long)arg1 ;
-(HFMediaPlaybackActionBuilder *)mediaActionBuilder;
-(id)initWithActionBuilder:(id)arg1 ;
-(long long)originalHMNonPausePlaybackState;
@end

