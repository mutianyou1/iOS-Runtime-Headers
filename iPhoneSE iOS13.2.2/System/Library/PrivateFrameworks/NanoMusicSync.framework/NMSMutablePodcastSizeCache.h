/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:05 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoMusicSync/NMSPodcastSizeCache.h>

@class NSMutableDictionary;

@interface NMSMutablePodcastSizeCache : NMSPodcastSizeCache {

	NSMutableDictionary* _mutableRelationshipDict;
	NSMutableDictionary* _mutableEpisodeSizeInfoDict;

}

@property (retain) NSMutableDictionary * mutableRelationshipDict;                 //@synthesize mutableRelationshipDict=_mutableRelationshipDict - In the implementation block
@property (retain) NSMutableDictionary * mutableEpisodeSizeInfoDict;              //@synthesize mutableEpisodeSizeInfoDict=_mutableEpisodeSizeInfoDict - In the implementation block
-(id)init;
-(void)synchronize;
-(id)itemsForFeedURL:(id)arg1 ;
-(id)episodeSizeInfoDict;
-(id)relationshipDict;
-(NSMutableDictionary *)mutableRelationshipDict;
-(NSMutableDictionary *)mutableEpisodeSizeInfoDict;
-(id)_currentPodcastSizeDictionary;
-(void)setEpisodes:(id)arg1 forFeedURL:(id)arg2 ;
-(void)setEpisodeSizeInfo:(id)arg1 forEpisode:(id)arg2 ;
-(void)setMutableRelationshipDict:(NSMutableDictionary *)arg1 ;
-(void)setMutableEpisodeSizeInfoDict:(NSMutableDictionary *)arg1 ;
@end

