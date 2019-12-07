/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:46 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HMDAccessoryBrowserHapProtocol
@required
-(void)updateStateForIdentifier:(id)arg1 stateNumber:(id)arg2;
-(void)updateBroadcastKeyForIdentifer:(id)arg1 key:(id)arg2 keyUpdatedStateNumber:(id)arg3 keyUpdatedTime:(double)arg4;
-(void)retrieveCurrentStateForIdentifer:(id)arg1 onQueue:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)configureAccessory:(id)arg1 trackState:(BOOL)arg2 connectionPriority:(BOOL)arg3;

@end
