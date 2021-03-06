/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:37 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/IdentityLookupUI.framework/IdentityLookupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@protocol ILClassificationExtensionShellViewControllerDelegate;
@class UIViewController, UIBarButtonItem;

@interface ILClassificationExtensionShellViewController : UIViewController {

	BOOL _enableFinishOption;
	id<ILClassificationExtensionShellViewControllerDelegate> _delegate;
	UIViewController* _extensionViewController;
	UIBarButtonItem* _doneButton;

}

@property (nonatomic,retain) UIViewController * extensionViewController;                                            //@synthesize extensionViewController=_extensionViewController - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * doneButton;                                                          //@synthesize doneButton=_doneButton - In the implementation block
@property (assign,nonatomic,__weak) id<ILClassificationExtensionShellViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL enableFinishOption;                                                               //@synthesize enableFinishOption=_enableFinishOption - In the implementation block
-(id<ILClassificationExtensionShellViewControllerDelegate>)delegate;
-(void)setDelegate:(id<ILClassificationExtensionShellViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(void)setDoneButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)doneButton;
-(UIViewController *)extensionViewController;
-(void)setExtensionViewController:(UIViewController *)arg1 ;
-(void)userDidCancel;
-(void)displayExtensionViewController:(id)arg1 forExtension:(id)arg2 ;
-(void)setEnableFinishOption:(BOOL)arg1 ;
-(void)userDidFinish;
-(BOOL)enableFinishOption;
@end

