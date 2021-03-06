/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:27 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CICheapBilateral : CIFilter {

	CIImage* inputImage;
	CIImage* inputSource;
	NSNumber* inputSigmaSpace;
	NSNumber* inputSigmaRange;

}

@property (nonatomic,retain) CIImage * inputSource; 
@property (nonatomic,retain) NSNumber * inputSigmaSpace; 
@property (nonatomic,retain) NSNumber * inputSigmaRange; 
+(id)customAttributes;
-(id)outputImage;
-(CIImage *)inputSource;
-(void)setInputSource:(CIImage *)arg1 ;
-(NSNumber *)inputSigmaSpace;
-(void)setInputSigmaSpace:(NSNumber *)arg1 ;
-(NSNumber *)inputSigmaRange;
-(void)setInputSigmaRange:(NSNumber *)arg1 ;
@end

