/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:36 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CSAudioStartStreamOption : NSObject {

	BOOL _requestHistoricalAudioDataWithHostTime;
	BOOL _requestHistoricalAudioDataSampleCount;
	BOOL _useOpportunisticZLL;
	unsigned long long _startRecordingHostTime;
	unsigned long long _startRecordingSampleCount;
	long long _startAlertBehavior;
	long long _stopAlertBehavior;
	long long _errorAlertBehavior;

}

@property (assign,nonatomic) BOOL requestHistoricalAudioDataWithHostTime;               //@synthesize requestHistoricalAudioDataWithHostTime=_requestHistoricalAudioDataWithHostTime - In the implementation block
@property (assign,nonatomic) BOOL requestHistoricalAudioDataSampleCount;                //@synthesize requestHistoricalAudioDataSampleCount=_requestHistoricalAudioDataSampleCount - In the implementation block
@property (assign,nonatomic) unsigned long long startRecordingHostTime;                 //@synthesize startRecordingHostTime=_startRecordingHostTime - In the implementation block
@property (assign,nonatomic) unsigned long long startRecordingSampleCount;              //@synthesize startRecordingSampleCount=_startRecordingSampleCount - In the implementation block
@property (assign,nonatomic) BOOL useOpportunisticZLL;                                  //@synthesize useOpportunisticZLL=_useOpportunisticZLL - In the implementation block
@property (assign,nonatomic) long long startAlertBehavior;                              //@synthesize startAlertBehavior=_startAlertBehavior - In the implementation block
@property (assign,nonatomic) long long stopAlertBehavior;                               //@synthesize stopAlertBehavior=_stopAlertBehavior - In the implementation block
@property (assign,nonatomic) long long errorAlertBehavior;                              //@synthesize errorAlertBehavior=_errorAlertBehavior - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> xpcObject; 
@property (nonatomic,readonly) NSString * localizedDescription; 
+(id)mutedOption;
-(NSString *)localizedDescription;
-(id)initWithXPCObject:(id)arg1 ;
-(NSObject*<OS_xpc_object>)xpcObject;
-(void)setRequestHistoricalAudioDataWithHostTime:(BOOL)arg1 ;
-(void)setStartRecordingHostTime:(unsigned long long)arg1 ;
-(void)setAVVCAlertBehavior:(id)arg1 ;
-(void)setUseOpportunisticZLL:(BOOL)arg1 ;
-(void)setRequestHistoricalAudioDataSampleCount:(BOOL)arg1 ;
-(void)setStartRecordingSampleCount:(unsigned long long)arg1 ;
-(unsigned long long)startRecordingHostTime;
-(id)avvcAlertBehavior;
-(BOOL)requestHistoricalAudioDataWithHostTime;
-(long long)_alertBehaviorTypeFromAVVCOberrideType:(long long)arg1 ;
-(void)setStartAlertBehavior:(long long)arg1 ;
-(void)setStopAlertBehavior:(long long)arg1 ;
-(void)setErrorAlertBehavior:(long long)arg1 ;
-(long long)startAlertBehavior;
-(long long)_avvcAlertOverrideType:(long long)arg1 ;
-(long long)stopAlertBehavior;
-(long long)errorAlertBehavior;
-(id)avvcStartRecordSettingsWithAudioStreamHandleId:(unsigned long long)arg1 ;
-(id)avvcSettings;
-(BOOL)requestHistoricalAudioDataSampleCount;
-(unsigned long long)startRecordingSampleCount;
-(BOOL)useOpportunisticZLL;
@end

