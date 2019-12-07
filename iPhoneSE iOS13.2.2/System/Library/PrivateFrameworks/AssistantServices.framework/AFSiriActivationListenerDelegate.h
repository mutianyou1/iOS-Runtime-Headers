/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:20 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AFSiriActivationListenerDelegate <NSObject>
@optional
-(void)siriActivationListener:(id)arg1 handleIntent:(id)arg2 inBackgroundAppWithBundleId:(id)arg3 reply:(/*^block*/id)arg4;

@required
-(void)siriActivationListener:(id)arg1 prewarmWithRequestInfo:(id)arg2 completion:(/*^block*/id)arg3;
-(void)siriActivationListener:(id)arg1 activateWithRequestInfo:(id)arg2 completion:(/*^block*/id)arg3;
-(void)siriActivationListener:(id)arg1 deactivateForReason:(long long)arg2 options:(unsigned long long)arg3 analyticsContext:(id)arg4 completion:(/*^block*/id)arg5;

@end
