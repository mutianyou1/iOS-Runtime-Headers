/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:18 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CACUserAttentionSignalProviderFactory : NSObject {

	double _samplingInterval;
	double _attentionLossTimeout;
	unsigned long long _supportedAttentionAwarenessEvents;

}
+(id)_attentionAwarenessConfigurationWithIdentifier:(id)arg1 eventMask:(unsigned long long)arg2 samplingInterval:(double)arg3 attentionLossTimeout:(double)arg4 ;
-(id)wakeGestureManager;
-(unsigned long long)_faceAttentionAwarenessEventMask;
-(unsigned long long)_touchAttentionAwarenessEventMask;
-(id)initWithSamplingInterval:(double)arg1 attentionLossTimeout:(double)arg2 supportedAttentionAwarenessEvents:(unsigned long long)arg3 ;
-(id)faceAttentionAwarenessClient;
-(id)touchAttentionAwarenessClient;
@end
