/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:06 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSLock, NSXPCConnection;

@interface ASDStoreKitServiceBroker : NSObject {

	NSLock* _serviceConnectionLock;
	NSXPCConnection* _serviceConnection;

}
+(id)defaultBroker;
+(id)_storeKitServiceInterface;
+(id)_storeKitClientInterface;
-(id)init;
-(id)_serviceConnection;
-(id)storeKitSynchronousServiceWithErrorHandler:(/*^block*/id)arg1 ;
-(id)storeKitService;
-(id)storeKitServiceWithErrorHandler:(/*^block*/id)arg1 ;
-(void)_serviceConnectionInvalidated;
-(id)storeKitSynchronousService;
@end

