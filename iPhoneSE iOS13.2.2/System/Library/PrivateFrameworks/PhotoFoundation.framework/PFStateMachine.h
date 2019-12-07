/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:22 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, PFStateMachineGraph, PFStateMachineNode, NSString, NSMutableArray;

@interface PFStateMachine : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	id _uuid;
	PFStateMachineGraph* _graph;
	PFStateMachineNode* _previousNode;
	PFStateMachineNode* _currentNode;
	id _owner;
	NSString* _name;
	id _delayedEventCancelToken;
	NSMutableArray* _subflowStack;

}

@property (readonly) NSString * name;              //@synthesize name=_name - In the implementation block
@property (readonly) id uuid;                      //@synthesize uuid=_uuid - In the implementation block
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(id)uuid;
-(id)owner;
-(id)graph;
-(void)handleEvent:(id)arg1 ;
-(id)initWithGraph:(id)arg1 name:(id)arg2 owner:(id)arg3 ;
-(id)previousNode;
-(id)currentNode;
-(void)_pushReturnTransition:(id)arg1 ;
-(id)_popReturnTransition;
-(void)_handleEvent:(id)arg1 ;
-(void)postEvent:(id)arg1 afterTimeout:(double)arg2 ;
-(void)atomicHandleEvent:(/*^block*/id)arg1 ;
-(void)atomicHandleEventAsync:(/*^block*/id)arg1 ;
-(id)atomicQueue;
-(void)_cancelLastDelayedEvent;
-(void)trace:(id)arg1 ;
-(void)traceObject:(id)arg1 state:(id)arg2 ;
@end
