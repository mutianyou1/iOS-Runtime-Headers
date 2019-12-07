/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:42 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIAccessibilityHUDItem, UIView, UIVisualEffectView, UIBlurEffect, UIImageView, UILabel;

@interface UIAccessibilityHUDView : UIView {

	UIAccessibilityHUDItem* _item;
	UIView* _transformContainer;
	UIVisualEffectView* _effectView;
	UIBlurEffect* _blurEffect;
	UIVisualEffectView* _itemEffectView;
	UIImageView* _imageView;
	UILabel* _titleLabel;
	UIView* _customView;

}

@property (nonatomic,copy) UIAccessibilityHUDItem * item;              //@synthesize item=_item - In the implementation block
+(CGSize)preferredHUDSize;
-(UIAccessibilityHUDItem *)item;
-(void)setItem:(UIAccessibilityHUDItem *)arg1 ;
-(id)layoutManager;
-(id)titleLabel;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)customView;
-(id)_contentEffectsForItem:(id)arg1 ;
-(void)_updateLabelForItem;
-(void)layoutSubviews;
-(void)_show:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithHUDItem:(id)arg1 ;
-(void)showAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)dismissAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)containerViewForLayout;
-(id)itemContainerViewForLayout;
-(UIEdgeInsets)imageInsetsForLayout;
-(id)imageView;
@end
