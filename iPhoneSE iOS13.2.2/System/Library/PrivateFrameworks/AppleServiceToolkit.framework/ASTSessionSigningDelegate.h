/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:55 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ASTSessionSigningDelegate <ASTSessionDelegate>
@optional
-(void)session:(id)arg1 signPayload:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)session:(id)arg1 signFile:(id)arg2 completionHandler:(/*^block*/id)arg3;

@required
-(void)session:(id)arg1 generateAuthInfoWithNonce:(id)arg2;

@end
