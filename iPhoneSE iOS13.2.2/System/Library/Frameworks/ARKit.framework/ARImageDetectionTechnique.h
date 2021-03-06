/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:24 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARImageBasedTechnique.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSArray, NSObject, ARImageDetectionResultData, ARWorldTrackingPoseData, ARODTHandleManager, NSDictionary;

@interface ARImageDetectionTechnique : ARImageBasedTechnique {

	NSArray* _referenceImages;
	NSObject*<OS_dispatch_queue> _processDataQueue;
	NSObject*<OS_dispatch_semaphore> _loadingSemaphore;
	NSObject*<OS_dispatch_semaphore> _dataSemaphore;
	NSObject*<OS_dispatch_semaphore> _detectionSemaphore;
	ARImageDetectionResultData* _referenceImageData;
	BOOL _finishedLoadingImages;
	BOOL _tracking;
	BOOL _deterministicMode;
	shared_ptr<arkit::KeyMapBuffer<const void *, std::__1::vector<unsigned char, std::__1::allocator<unsigned char> > > >* _poseBuffer;
	BOOL _needsWorldTrackingPoseData;
	BOOL _enableAutomaticImageScaleEstimation;
	ARWorldTrackingPoseData* _currentWorldTrackingPose;
	ARODTHandleManager* _odtTHandleManger;
	NSDictionary* _referenceImageMap;

}

@property (retain) ARWorldTrackingPoseData * currentWorldTrackingPose;              //@synthesize currentWorldTrackingPose=_currentWorldTrackingPose - In the implementation block
@property (readonly) ARODTHandleManager * odtTHandleManger;                         //@synthesize odtTHandleManger=_odtTHandleManger - In the implementation block
@property (readonly) NSDictionary * referenceImageMap;                              //@synthesize referenceImageMap=_referenceImageMap - In the implementation block
@property (nonatomic,readonly) BOOL finishedLoadingImages; 
@property (assign,nonatomic) BOOL enableAutomaticImageScaleEstimation;              //@synthesize enableAutomaticImageScaleEstimation=_enableAutomaticImageScaleEstimation - In the implementation block
+(BOOL)_redetectionRequiredForContext:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)prepare;
-(id)processData:(id)arg1 ;
-(void)setCurrentWorldTrackingPose:(ARWorldTrackingPoseData *)arg1 ;
-(ARWorldTrackingPoseData *)currentWorldTrackingPose;
-(id)processResultData:(id)arg1 timestamp:(double)arg2 context:(id)arg3 ;
-(double)requiredTimeInterval;
-(unsigned long long)requiredSensorDataTypes;
-(id)initWithReferenceImages:(id)arg1 maximumNumberOfTrackedImages:(long long)arg2 continuousDetection:(BOOL)arg3 deterministicMode:(BOOL)arg4 processingQueue:(id)arg5 ;
-(id)initWithReferenceImages:(id)arg1 maximumNumberOfTrackedImages:(long long)arg2 ;
-(id)initWithReferenceImages:(id)arg1 maximumNumberOfTrackedImages:(long long)arg2 processingQueue:(id)arg3 ;
-(ARODTHandleManager *)odtTHandleManger;
-(BOOL)syncWithProcessedImage;
-(BOOL)finishedLoadingImages;
-(void)_enqueueImageForTrackingSynced:(id)arg1 ;
-(void)_enqueueImageForTrackingNonBlocking:(id)arg1 ;
-(NSDictionary *)referenceImageMap;
-(id)_addReferenceImagesAppleCV3D;
-(void)_loadReferenceImages;
-(id)_trackImagesWithImageData:(id)arg1 timeBudget:(double)arg2 ;
-(BOOL)enableAutomaticImageScaleEstimation;
-(void)setPowerUsage:(unsigned long long)arg1 ;
-(void)updateDevicePerformanceLevel:(id)arg1 ;
-(id)initWithReferenceImages:(id)arg1 ;
-(long long)captureBehavior;
-(BOOL)deterministicMode;
-(id)predictAtTimeStamp:(double)arg1 timeBudget:(double)arg2 predictedWorldTrackingPose:(id)arg3 ;
-(void)updateARPresentationMode:(long long)arg1 ;
-(void)setEnableAutomaticImageScaleEstimation:(BOOL)arg1 ;
@end

