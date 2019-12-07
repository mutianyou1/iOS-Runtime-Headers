/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <UIKit/UIDynamicItem.h>

@class UIBezierPath, NSString;

@interface _MPUFallAnimatorDynamicItem : NSObject <UIDynamicItem> {

	CGPoint _center;
	CGRect _bounds;
	CGAffineTransform _transform;

}

@property (assign,nonatomic) CGRect bounds;                                         //@synthesize bounds=_bounds - In the implementation block
@property (assign,nonatomic) CGPoint center;                                        //@synthesize center=_center - In the implementation block
@property (assign,nonatomic) CGAffineTransform transform;                           //@synthesize transform=_transform - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long collisionBoundsType; 
@property (nonatomic,readonly) UIBezierPath * collisionBoundingPath; 
-(CGAffineTransform)transform;
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1 ;
-(CGPoint)center;
-(void)setCenter:(CGPoint)arg1 ;
-(void)setTransform:(CGAffineTransform)arg1 ;
@end
