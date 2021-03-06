/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:38 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkPresentation/LPFetcherResponse.h>

@class LPAudio;

@interface LPFetcherAudioResponse : LPFetcherResponse {

	LPAudio* _audio;

}

@property (nonatomic,retain,readonly) LPAudio * audio;              //@synthesize audio=_audio - In the implementation block
+(id)audioPropertiesForFetcher:(id)arg1 ;
-(id)initWithAudio:(id)arg1 fetcher:(id)arg2 ;
-(LPAudio *)audio;
@end

