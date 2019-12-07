/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:49 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CALNNotificationStorage.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSString;

@interface CALNInMemoryNotificationStorage : NSObject <CALNNotificationStorage> {

	NSMutableDictionary* _recordMap;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (nonatomic,readonly) NSMutableDictionary * recordMap;                     //@synthesize recordMap=_recordMap - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSMutableDictionary *)recordMap;
-(void)addNotificationRecord:(id)arg1 ;
-(id)notificationRecords;
-(void)removeNotificationRecordsPassingTest:(/*^block*/id)arg1 ;
-(id)_notificationRecords;
-(void)_addNotificationRecord:(id)arg1 ;
-(void)_removeNotificationRecordsPassingTest:(/*^block*/id)arg1 ;
@end
