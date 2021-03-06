/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:01 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/TUPluggable.h>

@interface NewsUI2.MagazineFeedPaywallViewController : UIViewController <TUPluggable> {

	 styler;
	 eventHandler;
	??? config;
	 layoutOptionsProvider;
	 layoutAttributesFactory;
	 renderer;
	 paywallView;
	 imageCache;
	 assetManager;
	 isBeingUsedAsPlugin;
	 pluggableDelegate;
	 purchasingSpinnerViewControllerFactory;
	 $__lazy_storage_$_spinnerViewController;
	 purchasePresenter;
	 renderToken;

}

@property (assign,nonatomic) BOOL isBeingUsedAsPlugin; 
@property (assign,__weak,nonatomic) id<TUPluggableDelegate> pluggableDelegate; 
-(void)initializeWithCompletion:(/*^block*/id)arg1 ;
-(void)relayoutWithCompletion:(/*^block*/id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setIsBeingUsedAsPlugin:(BOOL)arg1 ;
-(void)setPluggableDelegate:(id<TUPluggableDelegate>)arg1 ;
-(id<TUPluggableDelegate>)pluggableDelegate;
-(BOOL)isBeingUsedAsPlugin;
@end

