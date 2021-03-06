/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:31 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol SBModalAlertPresentationCoordinatorDelegate, BSInvalidatable;
@class UIApplicationSceneDeactivationManager, NSMutableSet, SBModalAlertPresenter, UIApplicationSceneDeactivationAssertion, NSString;

@interface SBModalAlertPresentationCoordinator : NSObject <BSDescriptionProviding> {

	id<SBModalAlertPresentationCoordinatorDelegate> _delegate;
	UIApplicationSceneDeactivationManager* _sceneDeactivationManager;
	NSMutableSet* _activeModalAlertPresenters;
	SBModalAlertPresenter* _springBoardModalAlertPresenter;
	UIApplicationSceneDeactivationAssertion* _systemModalAlertsActiveSceneDeactivationAssertion;
	NSMutableSet* _hideApplicationModalAlertAssertions;
	id<BSInvalidatable> _hideApplicationModalAlertsAssertionWhileSBModalAlertsActive;

}

@property (setter=_setSpringBoardPresenter:,getter=_getSpringBoardPresenter,nonatomic,retain) SBModalAlertPresenter * springBoardPresenter;              //@synthesize springBoardModalAlertPresenter=_springBoardModalAlertPresenter - In the implementation block
@property (assign,nonatomic,__weak) id<SBModalAlertPresentationCoordinatorDelegate> delegate;                                                            //@synthesize delegate=_delegate - In the implementation block
@property (getter=isShowingModalAlert,nonatomic,readonly) BOOL showingModalAlert; 
@property (getter=isShowingSystemModalAlert,nonatomic,readonly) BOOL showingSystemModalAlert; 
@property (getter=canShowApplicationModalAlerts,nonatomic,readonly) BOOL canShowApplicationModalAlerts; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id<SBModalAlertPresentationCoordinatorDelegate>)delegate;
-(void)setDelegate:(id<SBModalAlertPresentationCoordinatorDelegate>)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)initWithSceneDeactivationManager:(id)arg1 ;
-(void)_setSpringBoardPresenter:(id)arg1 ;
-(BOOL)isShowingModalAlert;
-(BOOL)isShowingSystemModalAlert;
-(void)_adjustApplicationSceneSettingsForModalAlertsAndFence:(BOOL)arg1 ;
-(void)_noteSpringBoardModalAlertStateChanged:(BOOL)arg1 ;
-(id)hideApplicationModalAlertsForReason:(id)arg1 ;
-(id)_fencingTransitionContext:(BOOL)arg1 ;
-(BOOL)canShowApplicationModalAlerts;
-(void)_addModalAlertPresenterIfNecessary:(id)arg1 ;
-(void)_removeModalAlertPresenter:(id)arg1 ;
-(id)_getSpringBoardPresenter;
@end

