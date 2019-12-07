/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:53 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject;

@interface IDSRemoteCredential : NSObject {

	NSObject*<OS_xpc_object> _connection;
	int _retries;
	BOOL _wantsRetries;

}

@property (assign,nonatomic) BOOL wantsRetries;              //@synthesize wantsRetries=_wantsRetries - In the implementation block
-(void)dealloc;
-(void)_disconnected;
-(BOOL)_disconnect;
-(BOOL)_connect;
-(void)_sendMessage:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)fetchRemoteiMessageAndFaceTimeAccountInfoWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)fetchRemoteAccountsOfServiceTypes:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)sendIDSLocalDeviceInfoRequestWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)requestIDStatusForURIs:(id)arg1 service:(id)arg2 lightQuery:(BOOL)arg3 allowQuery:(BOOL)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)sendAccountSyncMessage:(id)arg1 messageID:(id)arg2 queueOneIdentifier:(id)arg3 allowCloudFallback:(BOOL)arg4 completionBlock:(/*^block*/id)arg5 ;
-(BOOL)wantsRetries;
-(void)setWantsRetries:(BOOL)arg1 ;
@end
