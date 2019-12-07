/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:10 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIViewServiceProxy_ReplyControl.h>

@class _UIViewServiceReplyControlTrampoline, _UIViewServiceReplyAwaitingTrampoline, NSLock;

@interface _UIViewServiceReplyControlProxy : NSObject <_UIViewServiceProxy_ReplyControl> {

	id _target;
	_UIViewServiceReplyControlTrampoline* _controlTrampoline;
	_UIViewServiceReplyAwaitingTrampoline* _awaitingTrampoline;
	NSLock* _lock;

}
+(id)proxyWithTarget:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)_awaitingReply;
-(id)_deliveringRepliesAsynchronously;
@end
