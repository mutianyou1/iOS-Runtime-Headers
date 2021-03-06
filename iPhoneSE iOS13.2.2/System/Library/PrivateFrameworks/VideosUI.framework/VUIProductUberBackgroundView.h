/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:36 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class VUIProductUberBackgroundViewLayout, _TVImageView, CAGradientLayer, UIView;

@interface VUIProductUberBackgroundView : UIView {

	VUIProductUberBackgroundViewLayout* _layout;
	_TVImageView* _imageView;
	CAGradientLayer* _maskGradientLayer;
	UIView* _blurEffectView;
	double _contentOffset;

}

@property (nonatomic,retain) CAGradientLayer * maskGradientLayer;                      //@synthesize maskGradientLayer=_maskGradientLayer - In the implementation block
@property (nonatomic,retain) UIView * blurEffectView;                                  //@synthesize blurEffectView=_blurEffectView - In the implementation block
@property (assign,nonatomic) double contentOffset;                                     //@synthesize contentOffset=_contentOffset - In the implementation block
@property (nonatomic,retain) VUIProductUberBackgroundViewLayout * layout;              //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) _TVImageView * imageView;                                 //@synthesize imageView=_imageView - In the implementation block
-(VUIProductUberBackgroundViewLayout *)layout;
-(void)setLayout:(VUIProductUberBackgroundViewLayout *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(_TVImageView *)imageView;
-(double)contentOffset;
-(void)setContentOffset:(double)arg1 ;
-(void)setImageView:(_TVImageView *)arg1 ;
-(void)setBlurEffectView:(UIView *)arg1 ;
-(UIView *)blurEffectView;
-(void)setImageOffset:(double)arg1 ;
-(void)configureBlurWithInterfaceStyle:(long long)arg1 ;
-(CAGradientLayer *)maskGradientLayer;
-(void)setMaskGradientLayer:(CAGradientLayer *)arg1 ;
@end

