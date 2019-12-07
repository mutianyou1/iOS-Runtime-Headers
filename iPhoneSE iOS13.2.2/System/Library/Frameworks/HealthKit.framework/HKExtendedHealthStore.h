/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:47 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_HKXPCExportable.h>

@protocol OS_dispatch_queue;
@class _HKXPCConnection, NSObject, NSString;

@interface HKExtendedHealthStore : NSObject <_HKXPCExportable> {

	_HKXPCConnection* _connection;
	int _notifyToken;
	NSObject*<OS_dispatch_queue> _clientQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;              //@synthesize clientQueue=_clientQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)exportedInterface;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(void)connectionInvalidated;
-(void)connectionInterrupted;
-(id)remoteInterface;
-(void)daemonDidStart;
-(void)setCurrentActivityCacheOverrideDate:(id)arg1 timeZone:(id)arg2 completion:(/*^block*/id)arg3 ;
@end
