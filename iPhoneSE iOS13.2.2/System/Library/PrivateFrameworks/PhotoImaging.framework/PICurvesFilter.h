/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:01 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage;

@interface PICurvesFilter : CIFilter {

	CIImage* _inputImage;
	CIImage* _inputTableImage;

}

@property (retain) CIImage * inputImage;                   //@synthesize inputImage=_inputImage - In the implementation block
@property (retain) CIImage * inputTableImage;              //@synthesize inputTableImage=_inputTableImage - In the implementation block
+(id)curvesKernel;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIImage *)inputTableImage;
-(void)setInputTableImage:(CIImage *)arg1 ;
@end

