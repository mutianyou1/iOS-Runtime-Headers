/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:25 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ARSkeleton2D;

@interface ARBody2D : NSObject {

	ARSkeleton2D* _skeleton;

}

@property (nonatomic,readonly) ARSkeleton2D * skeleton;              //@synthesize skeleton=_skeleton - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(ARSkeleton2D *)skeleton;
-(id)initWithSkeleton2D:(id)arg1 ;
@end

