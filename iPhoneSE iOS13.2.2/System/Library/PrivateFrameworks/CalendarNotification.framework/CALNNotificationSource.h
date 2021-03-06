/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:49 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray;


@protocol CALNNotificationSource <CALNNotificationResponseDelegate>
@property (nonatomic,readonly) NSString * sourceIdentifier; 
@property (nonatomic,readonly) NSArray * categories; 
@required
-(NSArray *)categories;
-(NSString *)sourceIdentifier;
-(id)contentForNotificationWithSourceClientIdentifier:(id)arg1;
-(void)refreshNotifications:(id)arg1;

@end

