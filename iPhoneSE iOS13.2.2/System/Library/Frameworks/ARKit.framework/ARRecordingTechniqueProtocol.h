/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:24 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSURL, NSSet;


@protocol ARRecordingTechniqueProtocol <NSObject>
@property (nonatomic,readonly) NSURL * outputFileURL; 
@property (assign,nonatomic) BOOL expectDepthData; 
@property (assign,nonatomic) BOOL expectAudioData; 
@property (assign,nonatomic) BOOL expectCustomData; 
@property (assign,nonatomic) BOOL shouldSaveVideoInPhotosLibrary; 
@property (__weak) id<ARRecordingTechniqueDelegate> recordingTechniqueDelegate; 
@property (nonatomic,readonly) unsigned long long recordingSensorDataTypes; 
@property (nonatomic,readonly) NSSet * recordingResultDataClasses; 
@required
+(id)metadataIdentifierForARRecordableResultsClass:(Class)arg1;
-(NSURL *)outputFileURL;
-(void)startRecording;
-(unsigned long long)recordingSensorDataTypes;
-(NSSet *)recordingResultDataClasses;
-(id)initWithFileURL:(id)arg1 recordingSensorDataTypes:(unsigned long long)arg2 recordingResultDataClasses:(id)arg3;
-(id)initWithFileURL:(id)arg1 sensorDataTypes:(unsigned long long)arg2;
-(id)initWithFileURL:(id)arg1 recordingSensorDataTypes:(unsigned long long)arg2 recordingResultDataClasses:(id)arg3 startImmediately:(BOOL)arg4;
-(void)finishRecording;
-(id<ARRecordingTechniqueDelegate>)recordingTechniqueDelegate;
-(BOOL)expectAudioData;
-(void)recordCustomData:(id)arg1 forTimestamp:(double)arg2;
-(void)abortRecording;
-(BOOL)expectDepthData;
-(void)setExpectDepthData:(BOOL)arg1;
-(void)setExpectAudioData:(BOOL)arg1;
-(BOOL)expectCustomData;
-(void)setExpectCustomData:(BOOL)arg1;
-(BOOL)shouldSaveVideoInPhotosLibrary;
-(void)setShouldSaveVideoInPhotosLibrary:(BOOL)arg1;
-(void)setRecordingTechniqueDelegate:(id)arg1;

@end

