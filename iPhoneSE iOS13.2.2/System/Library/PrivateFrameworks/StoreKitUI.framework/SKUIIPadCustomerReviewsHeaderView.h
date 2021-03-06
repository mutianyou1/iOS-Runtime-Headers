/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:15 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/SKUIMenuViewControllerDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@class UIButton, SKUIClientContext, SKUIColorScheme, UIPopoverController, UIView, UILabel, NSArray, UIControl, NSString;

@interface SKUIIPadCustomerReviewsHeaderView : UIControl <SKUIMenuViewControllerDelegate, UIPopoverControllerDelegate> {

	UIButton* _appSupportButton;
	SKUIClientContext* _clientContext;
	SKUIColorScheme* _colorScheme;
	UIPopoverController* _sortPopoverController;
	long long _selectedSortIndex;
	UIView* _separatorView;
	UIButton* _sortButton;
	UILabel* _sortLabel;
	NSArray* _sortTitles;
	UILabel* _titleLabel;
	UIButton* _writeAReviewButton;

}

@property (nonatomic,retain) SKUIColorScheme * colorScheme;                 //@synthesize colorScheme=_colorScheme - In the implementation block
@property (nonatomic,readonly) UIControl * appSupportButton;                //@synthesize appSupportButton=_appSupportButton - In the implementation block
@property (nonatomic,readonly) UIControl * writeAReviewButton;              //@synthesize writeAReviewButton=_writeAReviewButton - In the implementation block
@property (assign,nonatomic) long long selectedSortIndex;                   //@synthesize selectedSortIndex=_selectedSortIndex - In the implementation block
@property (nonatomic,copy) NSArray * sortTitles;                            //@synthesize sortTitles=_sortTitles - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setBackgroundColor:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(long long)selectedSortIndex;
-(SKUIColorScheme *)colorScheme;
-(void)setColorScheme:(SKUIColorScheme *)arg1 ;
-(id)initWithClientContext:(id)arg1 ;
-(void)menuViewController:(id)arg1 didSelectItemAtIndex:(long long)arg2 ;
-(UIControl *)appSupportButton;
-(UIControl *)writeAReviewButton;
-(void)setSortTitles:(NSArray *)arg1 ;
-(void)_reloadSortButton;
-(void)_destroySortPopoverController;
-(void)_sortButtonAction:(id)arg1 ;
-(void)setSelectedSortIndex:(long long)arg1 ;
-(NSArray *)sortTitles;
@end

