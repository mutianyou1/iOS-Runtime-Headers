/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:49 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CALNUserNotificationCenter <CalActivatable>
@property (assign,nonatomic,__weak) id<CALNUserNotificationCenterDelegate> delegate; 
@required
-(id<CALNUserNotificationCenterDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)setNotificationCategories:(id)arg1;
-(id)notificationCategories;
-(void)removeDeliveredNotificationsWithIdentifiers:(id)arg1;
-(id)deliveredNotifications;
-(void)removeAllDeliveredNotifications;
-(BOOL)addNotificationRequest:(id)arg1 error:(id*)arg2;
-(BOOL)replaceNotificationRequest:(id)arg1 error:(id*)arg2;
-(void)collectSettingsStats:(id)arg1;

@end
