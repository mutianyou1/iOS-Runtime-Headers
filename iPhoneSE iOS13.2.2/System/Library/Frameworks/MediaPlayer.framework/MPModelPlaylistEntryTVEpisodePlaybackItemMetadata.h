/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:47 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPModelTVEpisodePlaybackItemMetadata.h>

@class MPModelGenericObject, MPModelPlaylistEntry;

@interface MPModelPlaylistEntryTVEpisodePlaybackItemMetadata : MPModelTVEpisodePlaybackItemMetadata {

	MPModelGenericObject* _modelGenericObject;
	MPModelPlaylistEntry* _playlistEntry;

}

@property (nonatomic,retain) MPModelPlaylistEntry * playlistEntry;              //@synthesize playlistEntry=_playlistEntry - In the implementation block
+(id)requiredProperties;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)modelGenericObject;
-(void)_invalidateModelObjectPlaybackItemMetadata;
-(void)setEpisode:(id)arg1 ;
-(id)episode;
-(void)setPlaylistEntry:(MPModelPlaylistEntry *)arg1 ;
-(MPModelPlaylistEntry *)playlistEntry;
@end
