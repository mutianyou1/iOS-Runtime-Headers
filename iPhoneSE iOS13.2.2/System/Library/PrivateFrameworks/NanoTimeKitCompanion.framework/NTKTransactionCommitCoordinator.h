/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:08 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface NTKTransactionCommitCoordinator : NSObject {

	NSMutableArray* _commitHandlers;

}
+(id)_sharedInstance;
+(BOOL)addTransactionCommitHandler:(/*^block*/id)arg1 ;
+(void)flushCommitHandlers;
-(id)init;
-(BOOL)_addTransactionCommitHandler:(/*^block*/id)arg1 ;
-(void)_registerCATransactionCommitHandler;
@end

