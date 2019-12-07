/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:26 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARResultData.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class ARCamera, NSArray, NSString;

@interface ARImageDetectionResultData : NSObject <ARResultData, NSCopying, NSSecureCoding> {

	BOOL _detectionOnly;
	BOOL _predicted;
	BOOL _providesWorldTrackingCameraPose;
	ARCamera* _currentCamera;
	NSArray* _detectedImages;

}

@property (assign,nonatomic) BOOL detectionOnly;                                //@synthesize detectionOnly=_detectionOnly - In the implementation block
@property (assign,nonatomic) BOOL predicted;                                    //@synthesize predicted=_predicted - In the implementation block
@property (assign,nonatomic) BOOL providesWorldTrackingCameraPose;              //@synthesize providesWorldTrackingCameraPose=_providesWorldTrackingCameraPose - In the implementation block
@property (nonatomic,copy) ARCamera * currentCamera;                            //@synthesize currentCamera=_currentCamera - In the implementation block
@property (nonatomic,copy) NSArray * detectedImages;                            //@synthesize detectedImages=_detectedImages - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)anchorsForCameraWithTransform:(SCD_Struct_AR12)arg1 referenceOriginTransform:(SCD_Struct_AR12)arg2 existingAnchors:(id)arg3 anchorsToRemove:(id)arg4 ;
-(NSArray *)detectedImages;
-(void)setDetectedImages:(NSArray *)arg1 ;
-(void)setProvidesWorldTrackingCameraPose:(BOOL)arg1 ;
-(void)setDetectionOnly:(BOOL)arg1 ;
-(void)setPredicted:(BOOL)arg1 ;
-(BOOL)predicted;
-(BOOL)detectionOnly;
-(void)setCurrentCamera:(ARCamera *)arg1 ;
-(BOOL)providesWorldTrackingCameraPose;
-(ARCamera *)currentCamera;
@end
