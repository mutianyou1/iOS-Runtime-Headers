/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:32 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, NSDate, NSMutableDictionary, GEOXPCActivity;

@interface GEORequestCountPowerLogger : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSString* _eventName;
	NSDate* _startDate;
	NSMutableDictionary* _clientInfo;
	GEOXPCActivity* _activity;

}
+(id)sharedInstance;
+(BOOL)shouldIgnoreRequestType:(unsigned char)arg1 fromClientWithId:(id)arg2 ;
+(void)cancelOldActivities;
-(id)init;
-(void)dealloc;
-(void)startNewSessionWithName:(id)arg1 ;
-(void)_flushToPowerLog;
-(void)_cancelXpcActivity;
-(void)_scheduleXpcActivity;
-(void)incrementCountForClient:(id)arg1 requestType:(unsigned char)arg2 ;
@end
