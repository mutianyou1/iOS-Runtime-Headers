/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:17 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/FaceCore.framework/FaceCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <FaceCore/FaceCore-Structs.h>
@interface FCRImageConversionUtils : NSObject
+(char*)convertCGImageToBufferUsingDataProvider:(CGImageRef)arg1 usingGCD:(BOOL)arg2 dispatchQueue:(id)arg3 ;
+(char*)convertCGImageToBufferUsingRGBDevice:(CGImageRef)arg1 usingGCD:(BOOL)arg2 dispatchQueue:(id)arg3 cacheContext:(BOOL)arg4 ;
+(char*)convertCGImageToBufferUsingGrayDevice:(CGImageRef)arg1 ;
+(char*)convertCGImageToGrayscale:(CGImageRef)arg1 usingGCD:(BOOL)arg2 cacheContext:(BOOL)arg3 ;
@end
