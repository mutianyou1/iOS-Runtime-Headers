/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:15 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MPCPlaybackEngine.h>

@class MPCPlayerPath, NSXPCConnection;

@interface MPCRemotePlaybackEngine : MPCPlaybackEngine {

	MPCPlayerPath* _playerPath;
	NSXPCConnection* _connection;

}

@property (nonatomic,retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
+(BOOL)requiresMainThread;
-(void)dealloc;
-(void)start;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(id)playerPath;
-(void)setWantsReverseProcessAssertion:(BOOL)arg1 ;
-(void)becomeActive;
-(void)_updatePlayerPath;
-(void)_initializePlaybackStack;
@end

