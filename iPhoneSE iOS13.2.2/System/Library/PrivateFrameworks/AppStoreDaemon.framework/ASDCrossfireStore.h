/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:05 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ASDServiceProvider.h>

@class ASDServiceBroker, NSString;

@interface ASDCrossfireStore : NSObject <ASDServiceProvider> {

	ASDServiceBroker* _serviceBroker;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)interface;
-(id)init;
-(id)_initWithServiceBroker:(id)arg1 ;
-(void)flushMetricsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)recordLaunchesWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)recordMetricsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)reportAppEvent:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)resetMetricsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)getAppEventsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)sendMetricsWithCompletionBlock:(/*^block*/id)arg1 ;
@end

