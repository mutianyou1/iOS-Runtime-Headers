/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:31 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPPlaybackArchive;

@interface HFPlaybackArchive : NSObject {

	MPPlaybackArchive* _mediaPlayerPlaybackArchive;

}

@property (nonatomic,retain) MPPlaybackArchive * mediaPlayerPlaybackArchive;              //@synthesize mediaPlayerPlaybackArchive=_mediaPlayerPlaybackArchive - In the implementation block
@property (assign,nonatomic) unsigned long long targetOptions; 
@property (nonatomic,readonly) BOOL isShuffleSupported; 
@property (nonatomic,readonly) BOOL isRepeatSupported; 
@property (assign,getter=isShuffleEnabled,nonatomic) BOOL shuffleEnabled; 
@property (assign,getter=isRepeatEnabled,nonatomic) BOOL repeatEnabled; 
-(void)setShuffleEnabled:(BOOL)arg1 ;
-(id)initWithMediaPlayerPlaybackArchive:(id)arg1 ;
-(MPPlaybackArchive *)mediaPlayerPlaybackArchive;
-(BOOL)isRepeatEnabled;
-(BOOL)isRepeatSupported;
-(void)setRepeatEnabled:(BOOL)arg1 ;
-(BOOL)isShuffleEnabled;
-(BOOL)isShuffleSupported;
-(unsigned long long)targetOptions;
-(void)setTargetOptions:(unsigned long long)arg1 ;
-(void)setMediaPlayerPlaybackArchive:(MPPlaybackArchive *)arg1 ;
@end

