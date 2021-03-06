/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:25 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARResultData.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString;

@interface ARObjectDetectionResultData : NSObject <ARResultData, NSCopying, NSSecureCoding> {

	NSArray* _detectedObjects;

}

@property (nonatomic,copy) NSArray * detectedObjects;               //@synthesize detectedObjects=_detectedObjects - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDetectedObjects:(NSArray *)arg1 ;
-(id)anchorsForCameraWithTransform:(SCD_Struct_AR12)arg1 referenceOriginTransform:(SCD_Struct_AR12)arg2 existingAnchors:(id)arg3 anchorsToRemove:(id)arg4 ;
-(NSArray *)detectedObjects;
@end

