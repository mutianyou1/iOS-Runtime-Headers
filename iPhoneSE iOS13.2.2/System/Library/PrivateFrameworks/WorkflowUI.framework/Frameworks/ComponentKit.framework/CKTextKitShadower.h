/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:42 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ComponentKit/ComponentKit-Structs.h>
@class UIColor;

@interface CKTextKitShadower : NSObject {

	UIEdgeInsets _calculatedShadowPadding;
	UIColor* _shadowColor;
	double _shadowOpacity;
	double _shadowRadius;
	CGSize _shadowOffset;

}

@property (nonatomic,readonly) CGSize shadowOffset;                //@synthesize shadowOffset=_shadowOffset - In the implementation block
@property (nonatomic,readonly) UIColor * shadowColor;              //@synthesize shadowColor=_shadowColor - In the implementation block
@property (nonatomic,readonly) double shadowOpacity;               //@synthesize shadowOpacity=_shadowOpacity - In the implementation block
@property (nonatomic,readonly) double shadowRadius;                //@synthesize shadowRadius=_shadowRadius - In the implementation block
-(double)shadowRadius;
-(CGSize)shadowOffset;
-(UIColor *)shadowColor;
-(double)shadowOpacity;
-(UIEdgeInsets)shadowPadding;
-(CGRect)offsetRectWithInternalRect:(CGRect)arg1 ;
-(CGPoint)offsetPointWithExternalPoint:(CGPoint)arg1 ;
-(void)setShadowInContext:(CGContextRef)arg1 ;
-(CGRect)insetRectWithConstrainedRect:(CGRect)arg1 ;
-(CGSize)outsetSizeWithInsetSize:(CGSize)arg1 ;
-(CGSize)insetSizeWithConstrainedSize:(CGSize)arg1 ;
-(id)initWithShadowOffset:(CGSize)arg1 shadowColor:(id)arg2 shadowOpacity:(double)arg3 shadowRadius:(double)arg4 ;
-(BOOL)_shouldDrawShadow;
-(CGRect)outsetRectWithInsetRect:(CGRect)arg1 ;
-(CGPoint)offsetPointWithInternalPoint:(CGPoint)arg1 ;
@end
