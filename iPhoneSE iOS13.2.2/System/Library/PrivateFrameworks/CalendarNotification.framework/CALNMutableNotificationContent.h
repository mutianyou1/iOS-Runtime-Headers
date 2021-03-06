/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:49 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarNotification/CalendarNotification-Structs.h>
#import <CalendarNotification/CALNNotificationContent.h>

@class NSString, NSDate, NSURL, NSArray, CALNNotificationSound, NSDictionary;

@interface CALNMutableNotificationContent : CALNNotificationContent

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,copy) NSString * body; 
@property (nonatomic,copy) NSString * categoryIdentifier; 
@property (nonatomic,copy) NSString * sectionIdentifier; 
@property (nonatomic,copy) NSDate * date; 
@property (nonatomic,copy) NSDate * expirationDate; 
@property (nonatomic,copy) NSURL * defaultActionURL; 
@property (assign,nonatomic) BOOL shouldHideTime; 
@property (nonatomic,copy) NSString * iconIdentifier; 
@property (assign,nonatomic) BOOL shouldSuppressSyncDismissalWhenRemoved; 
@property (nonatomic,copy) NSArray * peopleIdentifiers; 
@property (nonatomic,copy) CALNNotificationSound * sound; 
@property (nonatomic,copy) NSDictionary * userInfo; 
@property (nonatomic,copy) NSString * threadIdentifier; 
@property (nonatomic,copy) NSString * summaryArgument; 
@property (assign,nonatomic) unsigned long long summaryArgumentCount; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(void)setPeopleIdentifiers:(NSArray *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setBody:(NSString *)arg1 ;
-(void)setCategoryIdentifier:(NSString *)arg1 ;
-(void)setSound:(CALNNotificationSound *)arg1 ;
-(void)setUserInfoValue:(id)arg1 forKey:(id)arg2 ;
-(void)setSummaryArgument:(NSString *)arg1 ;
-(void)setSummaryArgumentCount:(unsigned long long)arg1 ;
-(void)setThreadIdentifier:(NSString *)arg1 ;
-(void)setDefaultActionURL:(NSURL *)arg1 ;
-(void)setShouldHideTime:(BOOL)arg1 ;
-(void)setShouldSuppressSyncDismissalWhenRemoved:(BOOL)arg1 ;
-(void)setSectionIdentifier:(NSString *)arg1 ;
-(void)setIconIdentifier:(NSString *)arg1 ;
@end

