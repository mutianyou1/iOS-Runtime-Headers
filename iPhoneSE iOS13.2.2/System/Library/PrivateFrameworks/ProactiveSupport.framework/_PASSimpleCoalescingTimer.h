/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:21 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _PASCoalescingTimer;

@interface _PASSimpleCoalescingTimer : NSObject {

	_PASCoalescingTimer* _timer;

}
-(void)cancelPendingOperations;
-(id)initWithQueue:(id)arg1 leewaySeconds:(double)arg2 operation:(/*^block*/id)arg3 ;
-(id)initWithQueue:(id)arg1 operation:(/*^block*/id)arg2 ;
-(void)runAfterDelaySeconds:(double)arg1 coalescingBehavior:(unsigned char)arg2 ;
-(void)runImmediately;
-(void)runAfterStrictDelaySeconds:(double)arg1 ;
@end

