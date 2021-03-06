/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:38 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveML/PMLAWDSessionTracker.h>

@class NSMutableArray, NSArray;

@interface PMLAWDSessionTrackerMock : PMLAWDSessionTracker {

	NSMutableArray* _internalTrackedSessions;
	NSArray* _trackedSessions;

}

@property (readonly) NSArray * trackedSessions;              //@synthesize trackedSessions=_trackedSessions - In the implementation block
-(id)initWithModel:(id)arg1 ;
-(void)postMetricId:(unsigned)arg1 message:(id)arg2 ;
-(void)clearTrackedSessions;
-(NSArray *)trackedSessions;
@end

