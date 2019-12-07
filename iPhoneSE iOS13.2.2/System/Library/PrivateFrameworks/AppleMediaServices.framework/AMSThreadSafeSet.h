/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:48 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject, NSArray;

@interface AMSThreadSafeSet : NSObject {

	NSMutableSet* _backingSet;
	NSObject*<OS_dispatch_queue> _backingSetAccessQueue;

}

@property (nonatomic,retain) NSMutableSet * backingSet;                                       //@synthesize backingSet=_backingSet - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> backingSetAccessQueue;              //@synthesize backingSetAccessQueue=_backingSetAccessQueue - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allObjects; 
@property (nonatomic,readonly) unsigned long long count; 
-(id)init;
-(unsigned long long)count;
-(void)addObject:(id)arg1 ;
-(void)removeObject:(id)arg1 ;
-(NSArray *)allObjects;
-(NSObject*<OS_dispatch_queue>)backingSetAccessQueue;
-(NSMutableSet *)backingSet;
-(void)setBackingSet:(NSMutableSet *)arg1 ;
-(void)setBackingSetAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end
