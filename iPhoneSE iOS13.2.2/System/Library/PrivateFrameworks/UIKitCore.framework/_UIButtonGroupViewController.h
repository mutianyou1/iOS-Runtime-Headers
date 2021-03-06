/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:44 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@class _UIButtonBar, UIScrollView, NSArray, NSString;

@interface _UIButtonGroupViewController : UIViewController <UIPopoverPresentationControllerDelegate> {

	_UIButtonBar* _originalOwner;
	_UIButtonBar* _buttonBar;
	UIScrollView* _scrollView;
	NSArray* _barButtonItemGroups;
	BOOL _overLightKeyboard;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCoder:(id)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)dismissIfNecessary;
-(void)_cleanupForDismissal;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg1 ;
-(id)initWithBarButtonItemGroups:(id)arg1 fromButtonBar:(id)arg2 ;
@end

