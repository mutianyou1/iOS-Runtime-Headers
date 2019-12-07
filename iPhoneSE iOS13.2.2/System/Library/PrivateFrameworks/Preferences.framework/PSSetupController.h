/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:17 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSRootController.h>

@protocol PSController;
@class NSDictionary, UIViewController, PSRootController;

@interface PSSetupController : PSRootController {

	NSDictionary* _rootInfo;
	UIViewController*<PSController> _parentController;
	PSRootController* _parentRootController;

}
-(id)init;
-(void)handleURL:(id)arg1 ;
-(void)dismissAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)dismissAnimated:(BOOL)arg1 ;
-(void)dismiss;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)controller;
-(void)dismissWithCompletion:(/*^block*/id)arg1 ;
-(void)setParentController:(id)arg1 ;
-(id)parentController;
-(void)showController:(id)arg1 animate:(BOOL)arg2 ;
-(void)setupController;
-(BOOL)usePopupStyle;
-(BOOL)popupStyleIsModal;
-(void)statusBarWillChangeHeight:(id)arg1 ;
-(void)pushControllerOnParentWithSpecifier:(id)arg1 ;
-(void)popControllerOnParent;
@end
