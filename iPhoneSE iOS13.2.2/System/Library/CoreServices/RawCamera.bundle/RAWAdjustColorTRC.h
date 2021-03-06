/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:15 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RawCamera/RAWFilter.h>

@class CIImage, NSNumber;

@interface RAWAdjustColorTRC : RAWFilter {

	CIImage* inputImage;
	id inputColorSpace;
	NSNumber* inputTRCs0;
	NSNumber* inputTRCy1;
	NSNumber* inputTRCs1;
	NSNumber* inputTRCy2;
	NSNumber* inputTRCs2;
	NSNumber* inputTRCy3;
	NSNumber* inputTRCs3;
	NSNumber* inputTRCs4;
	NSNumber* inputBoostAmount;
	NSNumber* inputBoostShadowAmount;
	NSNumber* inputBoostPreserveHueAmount;
	NSNumber* inputBoostPreserveRYHueAmount;
	NSNumber* inputBoostPreserveYGHueAmount;
	NSNumber* inputBoostPreserveGCHueAmount;
	NSNumber* inputBoostPreserveCBHueAmount;
	NSNumber* inputBoostPreserveBMHueAmount;
	NSNumber* inputBoostPreserveMRHueAmount;
	NSNumber* inputVersion;

}
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)customAttributes;
-(id)customAttributes;
-(id)outputImage;
-(void)setInputBoostAmount:(id)arg1 ;
@end

