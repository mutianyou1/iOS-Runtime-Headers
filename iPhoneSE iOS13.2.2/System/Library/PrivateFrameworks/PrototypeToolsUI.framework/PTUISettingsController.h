/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:09 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PrototypeToolsUI.framework/PrototypeToolsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UINavigationController.h>

@class UIBarButtonItem;

@interface PTUISettingsController : UINavigationController {

	UIBarButtonItem* _dismissButton;

}

@property (nonatomic,retain) UIBarButtonItem * dismissButton;              //@synthesize dismissButton=_dismissButton - In the implementation block
-(void)_pxswizzled_pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)px_performWithoutAnimations:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)px_shouldPreventAnimations;
-(void)px_setShouldPreventAnimations:(BOOL)arg1 ;
-(void)_dismiss;
-(void)setDismissButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)dismissButton;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithRootSettings:(id)arg1 ;
-(id)initWithRootModuleController:(id)arg1 ;
-(id)_defaultDismissButton;
-(void)_reloadRootModule;
@end

