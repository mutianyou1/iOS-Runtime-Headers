/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:54 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSXPCListener, ATMessageLink, NSString;

@interface ATMessageLinkProxyListener : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* _listener;
	ATMessageLink* _messageLink;

}

@property (nonatomic,retain) ATMessageLink * messageLink;              //@synthesize messageLink=_messageLink - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)stop;
-(void)start;
-(id)endpoint;
-(ATMessageLink *)messageLink;
-(id)initWithMessageLink:(id)arg1 ;
-(void)setMessageLink:(ATMessageLink *)arg1 ;
@end
