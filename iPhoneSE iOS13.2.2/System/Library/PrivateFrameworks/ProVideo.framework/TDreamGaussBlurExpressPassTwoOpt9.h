/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:08 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/TDreamProgramWrapper.h>

@interface TDreamGaussBlurExpressPassTwoOpt9 : TDreamProgramWrapper {

	float kernel[3];
	int kernelUniform;
	float offsets[3];
	int offsetsUniform;

}
-(id)init;
-(void)setOffsets:(const double*)arg1 ;
-(void)setUniforms;
-(void)setKernel:(const double*)arg1 ;
@end

