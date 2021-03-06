/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:20 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/CoreAccessories/PlugIns/Features/Communications-iOS.feature/Communications-iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ACCCommunicationsCenterCallControlsDelegate <NSObject>
@required
-(BOOL)swapCalls;
-(BOOL)initiateCallToDestination:(id)arg1 withService:(int)arg2 addressBookID:(id)arg3;
-(BOOL)initiateCallToVoicemail;
-(BOOL)initiateRedial;
-(BOOL)acceptCallWithAction:(int)arg1 callUUID:(id)arg2;
-(BOOL)endCallWithAction:(int)arg1 callUUID:(id)arg2;
-(BOOL)endAllCalls;
-(BOOL)mergeCalls;
-(BOOL)updateHoldStatus:(BOOL)arg1 forCallWithUUID:(id)arg2;
-(BOOL)updateMuteStatus:(BOOL)arg1;
-(BOOL)sendDTMF:(int)arg1 forCallWithUUID:(id)arg2;

@end

