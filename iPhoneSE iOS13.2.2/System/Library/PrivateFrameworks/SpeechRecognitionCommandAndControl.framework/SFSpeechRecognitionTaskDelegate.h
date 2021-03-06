/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:19 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SFSpeechRecognitionTaskDelegate <NSObject>
@optional
-(void)speechRecognitionDidDetectSpeech:(id)arg1;
-(void)speechRecognitionTask:(id)arg1 didHypothesizeTranscription:(id)arg2;
-(void)speechRecognitionTask:(id)arg1 didFinishRecognition:(id)arg2;
-(void)speechRecognitionTaskFinishedReadingAudio:(id)arg1;
-(void)speechRecognitionTaskWasCancelled:(id)arg1;
-(void)speechRecognitionTask:(id)arg1 didFinishSuccessfully:(BOOL)arg2;

@end

