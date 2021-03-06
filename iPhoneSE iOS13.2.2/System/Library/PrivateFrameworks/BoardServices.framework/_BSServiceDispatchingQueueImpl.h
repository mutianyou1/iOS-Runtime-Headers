/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:22 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSServiceDispatchingQueue.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface _BSServiceDispatchingQueueImpl : NSObject <BSServiceDispatchingQueue> {

	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithQueue:(id)arg1 ;
-(void)performAsync:(/*^block*/id)arg1 ;
-(void)assertOnQueue;
-(id)backingQueueIfExists;
-(void)performAsync:(/*^block*/id)arg1 withHandoff:(id)arg2 ;
@end

