/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:06 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NNMKAccountsSyncServiceServerDelegate <NSObject>
@required
-(void)accountsSyncServiceServer:(id)arg1 didSendProtobufSuccessfullyWithIDSIdentifier:(id)arg2;
-(void)accountsSyncServiceServer:(id)arg1 didFailSendingProtobufWithIDSIdentifier:(id)arg2 errorCode:(long long)arg3;
-(void)accountsSyncServiceServer:(id)arg1 didChangeAccountSourceType:(id)arg2;
-(void)accountsSyncServiceServer:(id)arg1 didReceivedAccountAuthenticationStatus:(id)arg2 requestTime:(double)arg3;

@end
