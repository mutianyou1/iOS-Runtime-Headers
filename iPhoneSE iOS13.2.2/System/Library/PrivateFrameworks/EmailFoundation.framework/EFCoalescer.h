/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:07 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <EmailFoundation/EmailFoundation-Structs.h>
@class NSObject;

@interface EFCoalescer : NSObject {

	/*^block*/id _coalescerAction;
	os_unfair_lock_s _lock;
	id _coalescedValue;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _coalescer;

}
-(void)dealloc;
-(void)_handleCoalesceEvent;
-(id)initWithCoalescingAction:(/*^block*/id)arg1 ;
-(void)coalesceValue:(id)arg1 ;
@end
