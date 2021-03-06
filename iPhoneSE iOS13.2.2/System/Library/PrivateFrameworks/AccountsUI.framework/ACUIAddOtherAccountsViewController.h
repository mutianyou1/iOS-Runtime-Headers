/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:21 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/ACUISetupViewControllerDelegate.h>
#import <libobjc.A.dylib/ACUISignInControllerDelegate.h>

@class NSString;

@interface ACUIAddOtherAccountsViewController : PSListController <ACUISetupViewControllerDelegate, ACUISignInControllerDelegate> {

	NSString* _filteredDataclass;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)specifiers;
-(void)setSpecifier:(id)arg1 ;
-(void)setupViewControllerDidDismiss:(id)arg1 ;
-(id)_specifiersForOtherMailAccounts;
-(id)_specifiersForOtherContactsAccounts;
-(id)_specifiersForOtherCalendarAccounts;
-(id)_viewProvidersManager;
@end

