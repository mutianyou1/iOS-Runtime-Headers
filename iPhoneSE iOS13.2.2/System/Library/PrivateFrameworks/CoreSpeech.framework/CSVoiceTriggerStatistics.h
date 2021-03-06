/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:37 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CSVoiceTriggerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface CSVoiceTriggerStatistics : NSObject <CSVoiceTriggerDelegate> {

	unsigned long long _triggerCount;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _consecutivePHSRejects;
	double _lastPHSReject;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)clearTriggerCount;
-(unsigned long long)triggerCount;
-(void)voiceTriggerDidDetectKeyword:(id)arg1 deviceId:(id)arg2 ;
-(void)resetPHSRejectCount;
-(double)getLastPHSRejectTime;
-(unsigned long long)getPHSRejectCount;
-(void)incrementPHSRejectCount;
-(void)increaseTriggerCount;
@end

