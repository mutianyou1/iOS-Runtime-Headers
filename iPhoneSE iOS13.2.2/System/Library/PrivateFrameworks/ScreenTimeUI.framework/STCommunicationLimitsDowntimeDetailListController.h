/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:36 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/CNUIFamilyMemberContactsPresentation.h>

@class PSSpecifier, STCommunicationLimits, CNUIFamilyMemberWhitelistedContactsController, NSString;

@interface STCommunicationLimitsDowntimeDetailListController : PSListController <CNUIFamilyMemberContactsPresentation> {

	PSSpecifier* _allowedCommunicationGroupSpecifier;
	PSSpecifier* _allowEveryoneSpecifier;
	PSSpecifier* _allowContactsOnlySpecifier;
	PSSpecifier* _allowContactsWithIntroductionsSpecifier;
	PSSpecifier* _allowSpecificContactsSpecifier;
	PSSpecifier* _allowedContactsGroupSpecifier;
	PSSpecifier* _addContactsSpecifier;
	STCommunicationLimits* _communicationLimits;
	CNUIFamilyMemberWhitelistedContactsController* _whitelistedContactsController;

}

@property (retain) PSSpecifier * allowedCommunicationGroupSpecifier;                                           //@synthesize allowedCommunicationGroupSpecifier=_allowedCommunicationGroupSpecifier - In the implementation block
@property (retain) PSSpecifier * allowEveryoneSpecifier;                                                       //@synthesize allowEveryoneSpecifier=_allowEveryoneSpecifier - In the implementation block
@property (retain) PSSpecifier * allowContactsOnlySpecifier;                                                   //@synthesize allowContactsOnlySpecifier=_allowContactsOnlySpecifier - In the implementation block
@property (retain) PSSpecifier * allowContactsWithIntroductionsSpecifier;                                      //@synthesize allowContactsWithIntroductionsSpecifier=_allowContactsWithIntroductionsSpecifier - In the implementation block
@property (retain) PSSpecifier * allowSpecificContactsSpecifier;                                               //@synthesize allowSpecificContactsSpecifier=_allowSpecificContactsSpecifier - In the implementation block
@property (retain) PSSpecifier * allowedContactsGroupSpecifier;                                                //@synthesize allowedContactsGroupSpecifier=_allowedContactsGroupSpecifier - In the implementation block
@property (retain) PSSpecifier * addContactsSpecifier;                                                         //@synthesize addContactsSpecifier=_addContactsSpecifier - In the implementation block
@property (retain) STCommunicationLimits * communicationLimits;                                                //@synthesize communicationLimits=_communicationLimits - In the implementation block
@property (retain) CNUIFamilyMemberWhitelistedContactsController * whitelistedContactsController;              //@synthesize whitelistedContactsController=_whitelistedContactsController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)willResignActive;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(void)presentViewController:(id)arg1 ;
-(id)specifiers;
-(void)familyMemberContactsDidChange;
-(void)dismissPresentedViewController:(id)arg1 ;
-(STCommunicationLimits *)communicationLimits;
-(void)setCommunicationLimits:(STCommunicationLimits *)arg1 ;
-(void)_didFinishEditingCommunicationLimit;
-(PSSpecifier *)allowedCommunicationGroupSpecifier;
-(long long)_downtimeCommunicationLimitForSpecifier:(id)arg1 ;
-(void)setAllowedCommunicationGroupSpecifier:(PSSpecifier *)arg1 ;
-(void)setAllowEveryoneSpecifier:(PSSpecifier *)arg1 ;
-(void)setAllowContactsOnlySpecifier:(PSSpecifier *)arg1 ;
-(void)setAllowContactsWithIntroductionsSpecifier:(PSSpecifier *)arg1 ;
-(void)setAllowSpecificContactsSpecifier:(PSSpecifier *)arg1 ;
-(id)_allowedContactsSpecifiers;
-(void)setAllowedContactsGroupSpecifier:(PSSpecifier *)arg1 ;
-(CNUIFamilyMemberWhitelistedContactsController *)whitelistedContactsController;
-(void)setWhitelistedContactsController:(CNUIFamilyMemberWhitelistedContactsController *)arg1 ;
-(void)setAddContactsSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)allowEveryoneSpecifier;
-(PSSpecifier *)allowContactsOnlySpecifier;
-(PSSpecifier *)allowContactsWithIntroductionsSpecifier;
-(PSSpecifier *)addContactsSpecifier;
-(PSSpecifier *)allowedContactsGroupSpecifier;
-(PSSpecifier *)allowSpecificContactsSpecifier;
@end

