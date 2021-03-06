/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:38 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/LiveFS.framework/LiveFS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection;

@interface LiveFSClient : NSObject {

	NSXPCConnection* conn;

}
+(id)newConnectionForService:(id)arg1 ;
+(id)interfaceForListeners;
+(id)supportDirURL:(unsigned long long)arg1 forURL:(id)arg2 daemonPrefName:(id)arg3 error:(id*)arg4 ;
-(void)dealloc;
-(id)initConnectionForService:(id)arg1 ;
-(id)volumes:(id*)arg1 ;
-(void)listenerForVolume:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)listenerForVolume:(id)arg1 error:(id*)arg2 ;
-(id)forgetVolume:(id)arg1 ;
-(id)forgetVolume:(id)arg1 withFlags:(unsigned)arg2 ;
-(id)terminateDevice:(id)arg1 ;
@end

