/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:27 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIColorControls : CIFilter {

	CIImage* inputImage;
	NSNumber* inputSaturation;
	NSNumber* inputBrightness;
	NSNumber* inputContrast;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputSaturation; 
@property (nonatomic,retain) NSNumber * inputBrightness; 
@property (nonatomic,retain) NSNumber * inputContrast; 
+(id)customAttributes;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputSaturation;
-(void)setInputSaturation:(NSNumber *)arg1 ;
-(NSNumber *)inputBrightness;
-(void)setInputBrightness:(NSNumber *)arg1 ;
-(NSNumber *)inputContrast;
-(void)setInputContrast:(NSNumber *)arg1 ;
@end

