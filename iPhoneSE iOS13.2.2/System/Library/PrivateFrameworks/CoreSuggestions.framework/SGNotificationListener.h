/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:41 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreSuggestions/CoreSuggestions-Structs.h>
@interface SGNotificationListener : NSObject {

	/*^block*/id _callback;
	CFStringRef _notification;
	opaque_pthread_mutex_t _lock;

}
-(void)dealloc;
-(void)_notify;
-(id)initWithNotification:(CFStringRef)arg1 callback:(/*^block*/id)arg2 ;
-(BOOL)unsubscribe;
@end
