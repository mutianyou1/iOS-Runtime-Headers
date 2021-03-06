/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:28 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CommunicationsSetupUI/CommunicationsSetupUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UINavigationItem, UILabel, UIActivityIndicatorView;

@interface CNFRegNavigationBarTitleView : UIView {

	UINavigationItem* _item;
	UILabel* _titleLabel;
	UIActivityIndicatorView* _activityIndicator;

}

@property (assign,nonatomic) UINavigationItem * item;              //@synthesize item=_item - In the implementation block
-(void)dealloc;
-(UINavigationItem *)item;
-(void)setItem:(UINavigationItem *)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)initWithNavigationItem:(id)arg1 ;
-(id)_defaultFont;
-(id)_currentTextColorForBarStyle:(long long)arg1 ;
-(CGSize)_currentTextShadowOffsetForBarStyle:(long long)arg1 ;
-(id)_currentTextShadowColorForBarStyle:(long long)arg1 ;
-(BOOL)_useSilverLookForBarStyle:(long long)arg1 ;
-(void)_updateTitleLabel;
-(id)_titleTextColorForBarStyle:(long long)arg1 ;
@end

