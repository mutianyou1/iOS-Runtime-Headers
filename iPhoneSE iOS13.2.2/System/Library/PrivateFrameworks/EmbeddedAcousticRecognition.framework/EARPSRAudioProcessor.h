/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:48 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EARPSRAudioProcessorDelegate, OS_dispatch_queue;
#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
@class NSString, NSObject;

@interface EARPSRAudioProcessor : NSObject {

	shared_ptr<quasar::PSRAudioProcessor>* _audioProcessor;
	SystemConfig* _sysConfig;
	unsigned long long _sampleRate;
	NSString* _configRoot;
	id<EARPSRAudioProcessorDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (assign,nonatomic,__weak) id<EARPSRAudioProcessorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * configRoot;                                         //@synthesize configRoot=_configRoot - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                            //@synthesize queue=_queue - In the implementation block
+(void)initialize;
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<EARPSRAudioProcessorDelegate>)delegate;
-(void)setDelegate:(id<EARPSRAudioProcessorDelegate>)arg1 ;
-(void)endAudio;
-(id)initWithConfigFile:(id)arg1 configRoot:(id)arg2 sampleRate:(unsigned long long)arg3 delegate:(id)arg4 queue:(id)arg5 ;
-(void)_startComputeTask;
-(id)initWithConfigFile:(id)arg1 configRoot:(id)arg2 sampleRate:(unsigned long long)arg3 delegate:(id)arg4 ;
-(void)addAudio:(id)arg1 ;
-(void)resetForNewRequest;
-(NSString *)configRoot;
-(void)setConfigRoot:(NSString *)arg1 ;
@end
