/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:58 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
@class NSString;

@interface _ATXInternalNotification : NSObject {

	NSString* _notificationName;
	id _token;
	opaque_pthread_mutex_t _lock;

}
+(void)postData:(id)arg1 forNotificationNamed:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)registerForNotifications:(/*^block*/id)arg1 ;
-(id)initWithNotificationName:(id)arg1 ;
@end

