/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:09 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVPortraitEffectsMatteInternal;

@interface AVPortraitEffectsMatte : NSObject {

	AVPortraitEffectsMatteInternal* _internal;

}

@property (readonly) unsigned pixelFormatType; 
@property (readonly) CVBufferRef mattingImage; 
+(void)initialize;
+(id)_allSupportedPortraitEffectsMattePixelFormatTypes;
+(id)portraitEffectsMatteFromDictionaryRepresentation:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(unsigned)pixelFormatType;
-(id)dictionaryRepresentationForAuxiliaryDataType:(id*)arg1 ;
-(CVBufferRef)mattingImage;
-(id)initWithPixelBuffer:(CVBufferRef)arg1 auxiliaryMetadata:(CGImageMetadataRef)arg2 ;
-(id)initWithPixelBuffer:(CVBufferRef)arg1 portraitEffectsMatteMetadataDictionary:(id)arg2 ;
-(const CGImageMetadataRef)copyAuxiliaryMetadata;
-(const CFStringRef)auxiliaryImageType;
-(id)portraitEffectsMatteByApplyingExifOrientation:(unsigned)arg1 ;
-(id)portraitEffectsMatteByReplacingPortraitEffectsMatteWithPixelBuffer:(CVBufferRef)arg1 error:(id*)arg2 ;
-(short)versionMajor;
-(short)versionMinor;
@end

