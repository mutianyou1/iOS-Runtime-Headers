/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:01 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoImaging/PhotoImaging-Structs.h>
@class AVAsset, AVAssetTrack, NSArray;

@interface PIVideoReframeMetadataExtractor : NSObject {

	AVAsset* _asset;
	AVAssetTrack* _videoTrack;
	AVAssetTrack* _mdataTrack;
	CGAffineTransform ndcMetadataTransform;
	CGAffineTransform pxlMetadataTransform;
	NSArray* timedMetadataArray;

}

@property (nonatomic,readonly) NSArray * timedMetadataArray; 
-(id)init;
-(id)initWithAVAsset:(id)arg1 ;
-(id)extractMetadata;
-(NSArray *)timedMetadataArray;
-(void)overwriteTrackingMetadataWithPlist:(id)arg1 ;
-(id)subjectsFromMetadata:(const FigLivePhotoMetadata*)arg1 ;
-(CGVector)centerMotionVectorFromMetadata:(const FigLivePhotoMetadata*)arg1 ;
-(CGVector)motionBlurVectorFromMetadata:(const FigLivePhotoMetadata*)arg1 ;
-(SCD_Struct_PI9)trajectoryeHomographyFromMetadata:(const FigLivePhotoMetadata*)arg1 containsV3Metadata:(BOOL*)arg2 ;
@end

