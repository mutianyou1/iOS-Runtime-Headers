/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:43 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSXPCListener.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/RTEventAgentDaemonProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection, RTPlatform, NSString;

@interface RTEventAgentManager : NSXPCListener <NSXPCListenerDelegate, RTEventAgentDaemonProtocol> {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _pluginConnection;
	RTPlatform* _platform;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * pluginConnection;              //@synthesize pluginConnection=_pluginConnection - In the implementation block
@property (nonatomic,retain) RTPlatform * platform;                           //@synthesize platform=_platform - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSXPCConnection *)pluginConnection;
-(RTPlatform *)platform;
-(void)setPlatform:(RTPlatform *)arg1 ;
-(void)_setup;
-(id)initWithPlatform:(id)arg1 ;
-(void)checkin;
-(void)setup;
-(void)setPluginConnection:(NSXPCConnection *)arg1 ;
-(void)launchDaemonWithRestorationIdentifier:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)_launchDaemonWithRestorationIdentifier:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)onLaunchDaemonWithRestorationIdentifierFromDefaults;
@end
