/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:48 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UIViewController.h>

@class UINavigationController, _SFSettingsAlertContentController, NSArray, _SFSettingsAlertItem;

@interface _SFSettingsAlertController : UIViewController {

	UINavigationController* _navigationController;

}

@property (nonatomic,readonly) _SFSettingsAlertContentController * _rootContentController; 
@property (nonatomic,readonly) NSArray * items; 
@property (nonatomic,retain) _SFSettingsAlertItem * focusedItem; 
-(NSArray *)items;
-(void)addItem:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(_SFSettingsAlertItem *)focusedItem;
-(void)_pushSubItemsForGroup:(id)arg1 ;
-(_SFSettingsAlertContentController *)_rootContentController;
-(void)addDivider;
-(void)setFocusedItem:(_SFSettingsAlertItem *)arg1 ;
@end
