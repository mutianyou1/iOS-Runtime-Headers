/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:13 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ScreenReaderOutput/ScreenReaderOutput-Structs.h>
@interface SCROBrailleDisplayHistory : NSObject {

	CFArrayRef _announcements;
	CFArrayRef _unreadSnapshot;
	long long _currentIndex;
	long long _unreadCount;

}
+(void)initialize;
-(id)init;
-(void)dealloc;
-(void)addString:(id)arg1 ;
-(BOOL)_moveIndexBy:(long long)arg1 ;
-(void)snapshotUnread;
-(void)markSnapshotAsRead;
-(BOOL)hasUnread;
-(id)currentString;
-(BOOL)moveToNext;
-(BOOL)moveToPrevious;
-(BOOL)isOnMostRecent;
-(void)moveToMostRecent;
@end

