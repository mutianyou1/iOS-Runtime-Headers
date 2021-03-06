/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:12 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIGiftStepViewController.h>

@class UIButton, UIImage, SKUIGiftItemView;

@interface SKUIGiftResultViewController : SKUIGiftStepViewController {

	UIButton* _giftAgainButton;
	UIImage* _itemImage;
	SKUIGiftItemView* _itemView;

}
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)_itemView;
-(id)initWithGift:(id)arg1 configuration:(id)arg2 ;
-(void)_setItemImage:(id)arg1 error:(id)arg2 ;
-(id)_itemImage;
-(void)_giftAgainAction:(id)arg1 ;
-(void)_doneButtonAction:(id)arg1 ;
@end

