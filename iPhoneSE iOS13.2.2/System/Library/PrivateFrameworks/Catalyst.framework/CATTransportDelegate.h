/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:00 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CATTransportDelegate <NSObject>
@optional
-(void)transportDidResume:(id)arg1;
-(void)transportDidInvalidate:(id)arg1;
-(void)transportDidConnect:(id)arg1;
-(void)transport:(id)arg1 didSendMessage:(id)arg2;
-(void)transport:(id)arg1 didFailToSendMessage:(id)arg2 error:(id)arg3;
-(void)transport:(id)arg1 didReceiveMessage:(id)arg2;
-(void)transport:(id)arg1 didInterruptWithError:(id)arg2;

@end
