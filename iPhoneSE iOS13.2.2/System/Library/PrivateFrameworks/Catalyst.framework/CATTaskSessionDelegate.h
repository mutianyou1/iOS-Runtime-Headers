/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:00 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CATTaskSessionDelegate <NSObject>
@optional
-(void)sessionDidConnect:(id)arg1;
-(void)sessionDidDisconnect:(id)arg1;
-(void)session:(id)arg1 didReceiveNotificationWithName:(id)arg2 userInfo:(id)arg3;
-(void)session:(id)arg1 didInterruptWithError:(id)arg2;
-(void)sessionWillInvalidate:(id)arg1;
-(void)sessionDidInvalidate:(id)arg1;
-(void)session:(id)arg1 enqueueOperation:(id)arg2;

@required
-(id)session:(id)arg1 prepareOperationForRequest:(id)arg2 error:(id*)arg3;
-(BOOL)session:(id)arg1 shouldAcceptConnectionFromTransport:(id)arg2;

@end

