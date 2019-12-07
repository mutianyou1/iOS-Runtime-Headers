/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:13 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>

@class SKUIStarRatingControl;

@interface SKUIReviewInAppRatingControlViewController : UIViewController {

	SKUIStarRatingControl* _ratingControl;

}

@property (nonatomic,retain) SKUIStarRatingControl * ratingControl;              //@synthesize ratingControl=_ratingControl - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)commonInit;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(SKUIStarRatingControl *)ratingControl;
-(id)_repeatedTemplateImageForImage:(id)arg1 ;
-(void)setRatingControl:(SKUIStarRatingControl *)arg1 ;
@end
