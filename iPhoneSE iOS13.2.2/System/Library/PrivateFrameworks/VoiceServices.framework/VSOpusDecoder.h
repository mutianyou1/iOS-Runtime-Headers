/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:03 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VoiceServices/VoiceServices-Structs.h>
@interface VSOpusDecoder : NSObject {

	OpaqueAudioConverterRef _decoder;
	AudioStreamBasicDescription _asbd;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)beginChunkDecoderForStreamDescription:(AudioStreamBasicDescription)arg1 ;
-(id)decodeChunk:(id)arg1 outError:(id*)arg2 ;
-(void)endChunkDecoding;
-(OpaqueAudioConverterRef)_opusDecoder:(AudioStreamBasicDescription)arg1 ;
-(id)decodeChunks:(id)arg1 streamDescription:(AudioStreamBasicDescription)arg2 outError:(id*)arg3 ;
@end
