/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:14 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UIColor, UILabel;

@interface SKUIOnboardingCircleView : UIView {

	UIImageView* _backgroundImageView;
	UIEdgeInsets _edgeInsets;
	double _minimumDiameter;
	UIColor* _fillColor;
	UILabel* _titleLabel;
	long long _titlePosition;

}

@property (assign,nonatomic) UIEdgeInsets edgeInsets;              //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (nonatomic,copy) UIColor * fillColor;                    //@synthesize fillColor=_fillColor - In the implementation block
@property (assign,nonatomic) double minimumDiameter;               //@synthesize minimumDiameter=_minimumDiameter - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel; 
@property (assign,nonatomic) long long titlePosition;              //@synthesize titlePosition=_titlePosition - In the implementation block
-(id)description;
-(void)setBackgroundImage:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(void)layoutSubviews;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)edgeInsets;
-(UIColor *)fillColor;
-(void)drawRect:(CGRect)arg1 ;
-(void)setFillColor:(UIColor *)arg1 ;
-(void)setTitlePosition:(long long)arg1 ;
-(void)setBackgroundImageAlpha:(double)arg1 ;
-(void)setMinimumDiameter:(double)arg1 ;
-(double)minimumDiameter;
-(long long)titlePosition;
@end

