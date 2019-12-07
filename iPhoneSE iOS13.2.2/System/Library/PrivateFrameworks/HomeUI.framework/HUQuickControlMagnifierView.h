/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:37 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface HUQuickControlMagnifierView : UIView {

	double _innerRadius;

}

@property (assign,nonatomic) double innerRadius;                   //@synthesize innerRadius=_innerRadius - In the implementation block
@property (nonatomic,retain) UIColor * selectedColor; 
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(double)_outlineWidth;
-(UIColor *)selectedColor;
-(void)setSelectedColor:(UIColor *)arg1 ;
-(void)setInnerRadius:(double)arg1 ;
-(double)innerRadius;
@end
