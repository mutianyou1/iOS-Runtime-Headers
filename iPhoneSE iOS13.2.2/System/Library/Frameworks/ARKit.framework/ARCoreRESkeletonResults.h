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

@class NSArray, NSString;

@interface ARCoreRESkeletonResults : NSObject <ARResultData, NSCopying> {

	NSArray* _retargetedSkeletons;
	double _timestamp;

}

@property (nonatomic,copy) NSArray * retargetedSkeletons;              //@synthesize retargetedSkeletons=_retargetedSkeletons - In the implementation block
@property (assign,nonatomic) double timestamp;                         //@synthesize timestamp=_timestamp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(void)setRetargetedSkeletons:(NSArray *)arg1 ;
-(NSArray *)retargetedSkeletons;
-(id)anchorsForCameraWithTransform:(SCD_Struct_AR12)arg1 referenceOriginTransform:(SCD_Struct_AR12)arg2 existingAnchors:(id)arg3 anchorsToRemove:(id)arg4 ;
@end

