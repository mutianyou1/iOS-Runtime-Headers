/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:15 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RawCamera/RAWFilter.h>

@class CIImage, NSData, NSNumber;

@interface RAWVignetteTable : RAWFilter {

	CIImage* inputImage;
	NSData* inputVignetteTableData;
	NSNumber* inputVignetteTableDataSize;
	id inputColorSpace;
	CIImage* vigImg;

}
-(void)dealloc;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)outputImage;
-(BOOL)makeMapImages;
@end
