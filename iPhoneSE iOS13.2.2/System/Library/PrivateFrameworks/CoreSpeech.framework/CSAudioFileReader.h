/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:35 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source, CSAudioFileReaderDelegate;
#import <CoreSpeech/CoreSpeech-Structs.h>
@class NSObject;

@interface CSAudioFileReader : NSObject {

	OpaqueExtAudioFileRef _fFile;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _audioFeedTimer;
	double _bufferDuration;
	AudioStreamBasicDescription _outASBD;
	id<CSAudioFileReaderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CSAudioFileReaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(void)close;
-(id<CSAudioFileReaderDelegate>)delegate;
-(void)setDelegate:(id<CSAudioFileReaderDelegate>)arg1 ;
-(void)stopRecording;
-(BOOL)startRecording;
-(BOOL)setRecordBufferDuration:(double)arg1 ;
-(void)_readAudioBufferAndFeed;
-(BOOL)prepareRecording:(id)arg1 ;
-(id)readSamplesFromChannelIdx:(unsigned)arg1 ;
@end

