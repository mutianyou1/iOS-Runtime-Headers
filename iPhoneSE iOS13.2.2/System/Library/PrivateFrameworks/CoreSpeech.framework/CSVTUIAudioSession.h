/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:36 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CSVTUIAudioSession
@required
-(void)setDelegate:(id)arg1;
-(float)averagePower;
-(BOOL)isRecording;
-(void)stopRecording;
-(unsigned long long)audioSource;
-(BOOL)hasAudioRoute;
-(void)releaseAudioSession;
-(BOOL)startRecording;
-(void)setEndpointerDelegate:(id)arg1;
-(void)updateMeters;
-(BOOL)prepareRecord;
-(BOOL)hasCorrectAudioRoute;
-(void)resetEndPointer;

@end

