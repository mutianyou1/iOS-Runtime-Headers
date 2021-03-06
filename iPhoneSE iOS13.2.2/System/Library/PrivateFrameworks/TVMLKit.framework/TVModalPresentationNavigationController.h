/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:22 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UINavigationController.h>
#import <TVMLKit/_TVModalPresenterFocusing.h>

@class NSHashTable, UIViewController, NSArray, NSMapTable, UIAlertController, TVModalPresentationConfiguration, NSString, UIView;

@interface TVModalPresentationNavigationController : UINavigationController <_TVModalPresenterFocusing> {

	NSHashTable* _presentedViewControllers;
	UIViewController* _rootViewController;
	NSArray* _previousViewControllers;
	NSMapTable* _pushCompletionBlocks;
	NSMapTable* _popCompletionBlocks;
	UIAlertController* _containingAlertController;
	TVModalPresentationConfiguration* _configuration;

}

@property (nonatomic,readonly) NSHashTable * presentedViewControllers; 
@property (assign,nonatomic,__weak) UIAlertController * containingAlertController;                //@synthesize containingAlertController=_containingAlertController - In the implementation block
@property (nonatomic,retain) TVModalPresentationConfiguration * configuration;                    //@synthesize configuration=_configuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * preferredFocusEnvironments; 
@property (nonatomic,__weak,readonly) id<UIFocusEnvironment> parentFocusEnvironment; 
@property (nonatomic,readonly) id<UIFocusItemContainer> focusItemContainer; 
@property (nonatomic,__weak,readonly) UIView * preferredFocusedView; 
-(void)setConfiguration:(TVModalPresentationConfiguration *)arg1 ;
-(TVModalPresentationConfiguration *)configuration;
-(id)initWithConfiguration:(id)arg1 ;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)popViewControllerAnimated:(BOOL)arg1 ;
-(void)didShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)popViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updateConfiguration;
-(NSHashTable *)presentedViewControllers;
-(void)updatePreferredFocusedViewStateForFocus:(BOOL)arg1 ;
-(UIAlertController *)containingAlertController;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_dismissForLastViewController:(BOOL)arg1 ;
-(void)setContainingAlertController:(UIAlertController *)arg1 ;
@end

