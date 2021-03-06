/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:14 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFAudio/AVAudioUnitEffect.h>

@interface AVAudioUnitDelay : AVAudioUnitEffect

@property (assign,nonatomic) double delayTime; 
@property (assign,nonatomic) float feedback; 
@property (assign,nonatomic) float lowPassCutoff; 
@property (assign,nonatomic) float wetDryMix; 
-(id)init;
-(float)feedback;
-(void)setFeedback:(float)arg1 ;
-(void)setWetDryMix:(float)arg1 ;
-(void)setDelayTime:(double)arg1 ;
-(void)setLowPassCutoff:(float)arg1 ;
-(float)wetDryMix;
-(double)delayTime;
-(float)lowPassCutoff;
@end

