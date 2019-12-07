/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:27 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TinCanShared.framework/TinCanShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TCSClientXPC.h>

@protocol TCSCallCenterDelegate;
@class NSXPCConnection, TCSCall, NSString;

@interface TCSCallCenter : NSObject <TCSClientXPC> {

	NSXPCConnection* _connection;
	TCSCall* _call;
	id<TCSCallCenterDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<TCSCallCenterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)invalidate;
-(id<TCSCallCenterDelegate>)delegate;
-(void)setDelegate:(id<TCSCallCenterDelegate>)arg1 ;
-(BOOL)hasValidConnection;
-(void)disconnectCall:(id)arg1 ;
-(void)applicationWillEnterForeground;
-(id)activeCall;
-(id)currentCall;
-(void)sessionViewControllerViewDidAppear;
-(void)setUplinkMuted:(BOOL)arg1 for:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)queryIsTinCannable:(id)arg1 ;
-(void)callConnected:(id)arg1 ;
-(void)callStatusChanged:(id)arg1 ;
-(void)remoteUplinkMuteChanged:(id)arg1 ;
-(void)synchronouslyFetchCall;
-(id)_callPassingPredicate:(/*^block*/id)arg1 ;
-(id)ringingCall;
-(id)endingCall;
-(void)logEntryForCallWithUniqueProxyIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
@end
