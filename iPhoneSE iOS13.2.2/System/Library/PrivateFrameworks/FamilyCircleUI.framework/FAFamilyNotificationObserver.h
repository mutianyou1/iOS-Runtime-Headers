/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:17 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FAFamilyNotificationObserver : NSObject {

	BOOL _observing;
	/*^block*/id _notificationHandler;

}
+(void)initialize;
+(id)familyNotificationObserverWithNotificationHandler:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)stopObserving;
-(void)_startObserving;
-(id)_initWithNotificationHandler:(/*^block*/id)arg1 ;
-(void)_didReceiveNotification;
@end

