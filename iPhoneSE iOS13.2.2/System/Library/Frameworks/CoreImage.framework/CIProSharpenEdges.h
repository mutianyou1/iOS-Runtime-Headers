/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:29 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIProSharpenEdges : CIFilter {

	CIImage* inputImage;
	NSNumber* inputFalloff;
	NSNumber* inputSharpness;
	NSNumber* inputEdgeScale;

}
+(id)customAttributes;
-(id)outputImage;
-(id)_CIEdgesPrep;
-(id)_CIFindEdges;
-(id)_CIConvertRGBtoY;
-(id)_CIBlur1;
-(id)_CIBlur2;
-(id)_CIBlur4;
-(id)_CISharpenCombineEdges;
@end
