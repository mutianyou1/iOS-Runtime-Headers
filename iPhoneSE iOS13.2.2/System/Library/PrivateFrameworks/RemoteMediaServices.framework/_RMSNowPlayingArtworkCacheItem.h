/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:11 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSDiscardableContent.h>

@class NSString, NSData;

@interface _RMSNowPlayingArtworkCacheItem : NSObject <NSDiscardableContent> {

	BOOL _keepAlive;
	NSString* _artworkIdentifier;
	NSData* _artworkData;

}

@property (nonatomic,retain) NSString * artworkIdentifier;              //@synthesize artworkIdentifier=_artworkIdentifier - In the implementation block
@property (nonatomic,retain) NSData * artworkData;                      //@synthesize artworkData=_artworkData - In the implementation block
-(BOOL)beginContentAccess;
-(void)endContentAccess;
-(void)discardContentIfPossible;
-(BOOL)isContentDiscarded;
-(void)setArtworkIdentifier:(NSString *)arg1 ;
-(NSString *)artworkIdentifier;
-(NSData *)artworkData;
-(void)setArtworkData:(NSData *)arg1 ;
@end

