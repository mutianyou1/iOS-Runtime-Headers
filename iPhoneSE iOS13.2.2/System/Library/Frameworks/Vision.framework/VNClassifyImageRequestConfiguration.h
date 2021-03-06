/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:20 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequestConfiguration.h>

@class VNClassificationCustomHierarchy;

@interface VNClassifyImageRequestConfiguration : VNImageBasedRequestConfiguration {

	VNClassificationCustomHierarchy* _customHierarchy;
	unsigned long long _maximumLeafObservations;
	unsigned long long _maximumHierarchicalObservations;
	unsigned long long _imageCropAndScaleOption;

}

@property (nonatomic,retain) VNClassificationCustomHierarchy * customHierarchy;               //@synthesize customHierarchy=_customHierarchy - In the implementation block
@property (assign,nonatomic) unsigned long long maximumLeafObservations;                      //@synthesize maximumLeafObservations=_maximumLeafObservations - In the implementation block
@property (assign,nonatomic) unsigned long long maximumHierarchicalObservations;              //@synthesize maximumHierarchicalObservations=_maximumHierarchicalObservations - In the implementation block
@property (assign,nonatomic) unsigned long long imageCropAndScaleOption;                      //@synthesize imageCropAndScaleOption=_imageCropAndScaleOption - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithRequestClass:(Class)arg1 ;
-(unsigned long long)imageCropAndScaleOption;
-(void)setImageCropAndScaleOption:(unsigned long long)arg1 ;
-(VNClassificationCustomHierarchy *)customHierarchy;
-(void)setCustomHierarchy:(VNClassificationCustomHierarchy *)arg1 ;
-(unsigned long long)maximumLeafObservations;
-(void)setMaximumLeafObservations:(unsigned long long)arg1 ;
-(unsigned long long)maximumHierarchicalObservations;
-(void)setMaximumHierarchicalObservations:(unsigned long long)arg1 ;
@end

