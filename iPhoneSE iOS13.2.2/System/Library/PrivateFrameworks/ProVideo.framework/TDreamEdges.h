/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:08 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/TDreamProgramWrapperTwoInput.h>

@interface TDreamEdges : TDreamProgramWrapperTwoInput {

	int passUniform;
	int radioUniform;
	int thresholdUniform;
	int preThresholdUniform;
	int modeUniform;
	int _mode;
	double _threshold;
	double _preThreshold;
	double _sigma;

}

@property (assign,nonatomic) double threshold;                 //@synthesize threshold=_threshold - In the implementation block
@property (assign,nonatomic) double preThreshold;              //@synthesize preThreshold=_preThreshold - In the implementation block
@property (assign,nonatomic) double sigma;                     //@synthesize sigma=_sigma - In the implementation block
@property (assign,nonatomic) int mode;                         //@synthesize mode=_mode - In the implementation block
-(id)init;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(double)threshold;
-(void)setThreshold:(double)arg1 ;
-(double)sigma;
-(void)setUniforms;
-(void)setSigma:(double)arg1 ;
-(void)setPreThreshold:(double)arg1 ;
-(double)preThreshold;
@end

