/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:47 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class SSXPCConnection, SSWatchMetricsConfiguration, NSObject;

@interface SSWatchMetricsController : NSObject {

	SSXPCConnection* _connection;
	SSWatchMetricsConfiguration* _metricsConfiguration;
	NSObject*<OS_dispatch_queue> _serialQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;                      //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,copy) SSWatchMetricsConfiguration * metricsConfiguration;              //@synthesize metricsConfiguration=_metricsConfiguration - In the implementation block
-(id)init;
-(id)_connection;
-(BOOL)isEnabled;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)insertEvent:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(SSWatchMetricsConfiguration *)metricsConfiguration;
-(void)setMetricsConfiguration:(SSWatchMetricsConfiguration *)arg1 ;
@end

