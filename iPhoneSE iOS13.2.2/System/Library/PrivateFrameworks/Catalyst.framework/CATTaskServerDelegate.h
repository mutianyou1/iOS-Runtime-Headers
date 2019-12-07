/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:00 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CATTaskServerDelegate <NSObject>
@optional
-(void)serverDidInvalidate:(id)arg1;
-(BOOL)server:(id)arg1 clientSession:(id)arg2 shouldConnectWithTransport:(id)arg3;
-(void)server:(id)arg1 clientSession:(id)arg2 didReceiveNotificationWithName:(id)arg3 userInfo:(id)arg4;
-(void)server:(id)arg1 clientSession:(id)arg2 enqueueOperation:(id)arg3;
-(void)server:(id)arg1 clientSessionDidConnect:(id)arg2;
-(void)server:(id)arg1 clientSessionDidDisconnect:(id)arg2;
-(void)server:(id)arg1 clientSessionDidInvalidate:(id)arg2;

@required
-(id)server:(id)arg1 clientSession:(id)arg2 operationForRequest:(id)arg3 error:(id*)arg4;
-(void)server:(id)arg1 clientSession:(id)arg2 didInterruptWithError:(id)arg3;

@end
