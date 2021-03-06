/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:14 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CalDAVCalendarPropertyRefreshDelegate <CoreDAVTaskGroupDelegate>
@optional
-(BOOL)calendarRefreshShouldRetryMkCalendarForPrincipal:(id)arg1 calendar:(id)arg2 error:(id)arg3;
-(void)calendarRefreshFoundUpdatedContainerWithIgnoredEntityType:(id)arg1;
-(void)calendarRefreshFoundUpdatedSpecialContainer:(id)arg1;
-(void)calendarRefreshFoundDeletedContainerURL:(id)arg1;

@required
-(void)calendarRefreshForPrincipal:(id)arg1 completedWithNewCTags:(id)arg2 newSyncTokens:(id)arg3 calendarHomeSyncToken:(id)arg4 updatedCalendars:(id)arg5 error:(id)arg6;

@end

