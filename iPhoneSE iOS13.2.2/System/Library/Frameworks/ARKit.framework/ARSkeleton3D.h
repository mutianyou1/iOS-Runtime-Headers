/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:26 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARSkeleton.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class ARCoreRESkeletonResult;

@interface ARSkeleton3D : ARSkeleton <NSSecureCoding> {

	ARCoreRESkeletonResult* _skeleton;

}

@property (nonatomic,readonly) ARCoreRESkeletonResult * coreRESkeleton; 
@property (nonatomic,readonly) const SCD_Struct_AR12* jointModelTransforms; 
@property (nonatomic,readonly) const SCD_Struct_AR12* jointLocalTransforms; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)definition;
-(unsigned long long)jointCount;
-(const SCD_Struct_AR12*)jointModelTransforms;
-(BOOL)isJointTracked:(long long)arg1 ;
-(id)initWithCoreRESkeletonResult:(id)arg1 ;
-(const SCD_Struct_AR12*)jointLocalTransforms;
-(ARCoreRESkeletonResult *)coreRESkeleton;
-(SCD_Struct_AR12)modelTransformForJointName:(id)arg1 ;
-(SCD_Struct_AR12)localTransformForJointName:(id)arg1 ;
@end
