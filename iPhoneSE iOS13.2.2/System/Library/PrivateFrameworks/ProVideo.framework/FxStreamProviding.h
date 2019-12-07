/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:08 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FxStreamProviding
@required
-(unsigned)timeScaleForStream:(id)arg1;
-(double)startTimeForStream:(id)arg1;
-(double)durationForStream:(id)arg1;
-(double)frameDurationForStream:(id)arg1;
-(BOOL)isStreamPremultiplied:(id)arg1;
-(double)pixelAspectForStream:(id)arg1;
-(BOOL)isContextTypeSupported:(int)arg1 bySample:(id)arg2;
-(unsigned long long)fieldOrderForSample:(id)arg1;
-(BOOL)isSamplePredetermined:(id)arg1;
-(id)requiredSamplesForSample:(id)arg1;
-(id)evaluateSample:(id)arg1 withOptions:(id)arg2;
-(id)domainOfDefinitionForSample:(id)arg1;

@end
