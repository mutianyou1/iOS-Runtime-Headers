/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:37 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue_attr, OS_dispatch_queue;
@class NSObject;

@interface BSDispatchQueueAttributes : NSObject <NSCopying> {

	NSObject*<OS_dispatch_queue_attr> _attrs;
	NSObject*<OS_dispatch_queue> _targetQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue_attr> attributes;                   //@synthesize attrs=_attrs - In the implementation block
@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> targetQueue;              //@synthesize targetQueue=_targetQueue - In the implementation block
+(id)serial;
+(id)_attributesWithAttributes:(id)arg1 ;
+(id)concurrent;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSObject*<OS_dispatch_queue_attr>)attributes;
-(void)setAttributes:(NSObject*<OS_dispatch_queue_attr>)arg1 ;
-(NSObject*<OS_dispatch_queue>)targetQueue;
-(id)serviceClass:(unsigned)arg1 relativePriority:(int)arg2 ;
-(id)serviceClass:(unsigned)arg1 ;
-(id)autoreleaseFrequency:(unsigned long long)arg1 ;
-(id)targetQueue:(id)arg1 ;
-(id)inactive;
@end

