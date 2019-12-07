/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:58 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, _DKKnowledgeQuerying, OS_dispatch_source;
@class NSObject, NSDate;

@interface ATXDuetKnowledgeStoreManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	id<_DKKnowledgeQuerying> _store;
	NSDate* _lastUsedDate;
	NSObject*<OS_dispatch_source> _pressureSource;
	unsigned long long _previousPressure;
	NSObject*<OS_dispatch_source> _expirationSource;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)runBlock:(/*^block*/id)arg1 ;
-(void)_clear;
-(void)_handleMemoryPressure;
@end
