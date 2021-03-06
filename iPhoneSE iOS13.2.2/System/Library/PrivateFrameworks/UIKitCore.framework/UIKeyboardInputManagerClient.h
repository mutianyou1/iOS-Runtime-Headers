/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:59 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection;

@interface UIKeyboardInputManagerClient : NSObject {

	NSXPCConnection* _connection;

}

@property (nonatomic,retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)handleRequest:(id)arg1 ;
-(void)handleError:(id)arg1 forRequest:(id)arg2 ;
@end

