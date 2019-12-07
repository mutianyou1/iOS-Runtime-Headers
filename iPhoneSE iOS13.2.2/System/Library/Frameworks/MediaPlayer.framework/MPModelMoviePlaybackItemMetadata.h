/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:46 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPModelSongPlaybackItemMetadata.h>

@class MPModelGenericObject, MPModelMovie;

@interface MPModelMoviePlaybackItemMetadata : MPModelSongPlaybackItemMetadata {

	MPModelGenericObject* _modelGenericObject;
	MPModelMovie* _movie;

}

@property (nonatomic,retain) MPModelMovie * movie;              //@synthesize movie=_movie - In the implementation block
+(id)requiredProperties;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)contentType;
-(MPModelMovie *)movie;
-(void)setMovie:(MPModelMovie *)arg1 ;
-(id)mediaItem;
-(BOOL)isExplicitTrack;
-(long long)storeSubscriptionAdamID;
-(id)modelGenericObject;
-(BOOL)allowsInitiatingPlayWhileDownload;
-(id)artworkCatalogForPlaybackTime:(double)arg1 ;
-(id)contentTitle;
-(double)expectedDuration;
-(long long)storeAdamID;
-(unsigned long long)storeSagaID;
-(id)localFileAsset;
-(id)playbackPosition;
-(id)storeAsset;
-(void)_invalidateModelObjectPlaybackItemMetadata;
@end
