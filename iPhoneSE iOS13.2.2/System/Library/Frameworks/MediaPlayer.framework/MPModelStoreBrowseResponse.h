/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:44 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPModelResponse.h>

@class MPChangeDetails, MPModelStoreBrowseResponseParser;

@interface MPModelStoreBrowseResponse : MPModelResponse {

	MPChangeDetails* _changeDetails;
	MPModelStoreBrowseResponseParser* _parser;

}

@property (nonatomic,retain) MPModelStoreBrowseResponseParser * parser;              //@synthesize parser=_parser - In the implementation block
@property (nonatomic,retain) MPChangeDetails * changeDetails;                        //@synthesize changeDetails=_changeDetails - In the implementation block
@property (nonatomic,readonly) BOOL hasAdditionalContentItems; 
-(MPModelStoreBrowseResponseParser *)parser;
-(void)setParser:(MPModelStoreBrowseResponseParser *)arg1 ;
-(BOOL)hasAdditionalContentItems;
-(MPChangeDetails *)changeDetails;
-(void)setChangeDetails:(MPChangeDetails *)arg1 ;
@end
