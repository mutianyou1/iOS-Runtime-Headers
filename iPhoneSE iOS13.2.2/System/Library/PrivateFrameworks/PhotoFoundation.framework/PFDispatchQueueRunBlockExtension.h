/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:22 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoFoundation/PFDispatchQueueExtension.h>

@interface PFDispatchQueueRunBlockExtension : PFDispatchQueueExtension
+(id)alloc;
+(void)initialize;
+(id)sharedRunBlockExtension;
-(id)init;
-(id)initInternal;
-(void)installOnQueue:(id)arg1 ;
-(id)queue:(id)arg1 willTargetQueue:(id)arg2 ;
-(void)queue:(id)arg1 didDequeue:(id)arg2 skipExecution:(/*^block*/id)arg3 ;
-(void)queue:(id)arg1 didExecute:(id)arg2 ;
-(void)queue:(id)arg1 skippedExecuting:(id)arg2 ;
@end

