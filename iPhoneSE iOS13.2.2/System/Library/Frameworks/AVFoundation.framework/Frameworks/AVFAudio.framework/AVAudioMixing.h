/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:14 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVAudioMixing <AVAudioStereoMixing,AVAudio3DMixing>
@property (assign,nonatomic) float volume; 
@required
-(float)volume;
-(void)setVolume:(float)arg1;
-(id)destinationForMixer:(id)arg1 bus:(unsigned long long)arg2;

@end

