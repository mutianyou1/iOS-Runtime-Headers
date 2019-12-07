/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:06 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ASDServiceProvider.h>

@class NSString;

@interface ASDInstallApps : NSObject <ASDServiceProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)interface;
+(void)installApp:(id)arg1 onPairedDevice:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
+(void)installApps:(id)arg1 onPairedDevice:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
+(void)_installApps:(id)arg1 onPairedDevice:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
+(id)_availableMetadataClasses;
+(void)installApp:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(void)installApps:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
@end
