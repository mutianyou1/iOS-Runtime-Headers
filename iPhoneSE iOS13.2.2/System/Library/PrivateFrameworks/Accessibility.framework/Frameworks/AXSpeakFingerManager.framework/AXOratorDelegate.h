/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:47 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXSpeakFingerManager.framework/AXSpeakFingerManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AXOratorDelegate <NSObject>
@optional
-(void)oratorDidResumeSpeaking:(id)arg1;
-(void)oratorShouldFetchNextElements:(id)arg1 shouldScrollOpaqueProviderIfNecessary:(BOOL)arg2;
-(void)oratorDidFinishSpeaking:(id)arg1;
-(void)oratorDidChangeSpeakingRate:(id)arg1;
-(void)oratorDidPauseSpeaking:(id)arg1;
-(void)oratorDidStartSpeaking:(id)arg1;
-(void)oratorDidCancelSpeaking:(id)arg1;
-(void)orator:(id)arg1 willSpeakRange:(NSRange)arg2 ofContent:(id)arg3;

@end
