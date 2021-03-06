/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:04 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIView.h>

@interface CAMLevelCrosshair : UIView {

	BOOL _highlighted;

}

@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;              //@synthesize highlighted=_highlighted - In the implementation block
+(void)_drawCrosshairInContext:(CGContextRef)arg1 withBounds:(CGRect)arg2 strokeWidth:(double)arg3 color:(id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)_commonCAMLevelCrosshairInitialization;
@end

