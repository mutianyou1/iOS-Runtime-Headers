/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:57 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BFFFinishSetupFlowControlling
@optional
-(BOOL)controllerNeedsToRun;
-(id)prerequisiteFlowIdentifier;
-(id)preconditionViewControllerWithCompletion:(/*^block*/id)arg1;
-(void)performExtendedInitializationWithCompletion:(/*^block*/id)arg1;
-(BOOL)canCompleteExtendedInitializationQuickly;

@required
-(id)viewControllerWithCompletion:(/*^block*/id)arg1;

@end

