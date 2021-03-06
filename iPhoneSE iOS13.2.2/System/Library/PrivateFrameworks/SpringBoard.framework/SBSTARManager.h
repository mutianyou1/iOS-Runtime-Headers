/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBSceneObserver.h>
#import <libobjc.A.dylib/FBApplicationUpdateScenesTransactionObserver.h>
#import <libobjc.A.dylib/SRSSessionControllerDelegate.h>

@protocol BSInvalidatable;
@class SBMainWorkspace, SBIdleTimerGlobalCoordinator, SBSystemGestureManager, SBLockScreenManager, SBMainDisplayRootWindowScenePresentationBinder, SBHIDInterface, UIRootWindowScenePresentationBinder, SBSTARScreenFadeController, SBHIDUILockAssertion, FBApplicationUpdateScenesTransaction, FBScene, NSMutableArray, SRSSessionController, NSString;

@interface SBSTARManager : NSObject <FBSceneObserver, FBApplicationUpdateScenesTransactionObserver, SRSSessionControllerDelegate> {

	BOOL _shouldEnableSTARMode;
	SBMainWorkspace* _mainWorkspace;
	SBIdleTimerGlobalCoordinator* _idleTimerCoordinator;
	SBSystemGestureManager* _systemGestureManager;
	SBLockScreenManager* _lockScreenManager;
	SBMainDisplayRootWindowScenePresentationBinder* _springboardRootWindowBinder;
	SBHIDInterface* _HIDInterface;
	UIRootWindowScenePresentationBinder* _starRootWindowBinder;
	SBSTARScreenFadeController* _screenFadeController;
	id<BSInvalidatable> _disableIdleTimerAssertion;
	id<BSInvalidatable> _disableSystemGesturesAssertion;
	SBHIDUILockAssertion* _disableMultitouchAssertion;
	id<BSInvalidatable> _disconnectLayerTreeAssertion;
	id<BSInvalidatable> _suppressBacklightFeaturesAssertion;
	FBApplicationUpdateScenesTransaction* _transaction;
	FBScene* _externalShellScene;
	unsigned long long _transitionState;
	NSMutableArray* _disableAssertions;
	SRSSessionController* _starSessionController;
	NSMutableArray* _observers;

}

@property (nonatomic,retain) SBMainWorkspace * mainWorkspace;                                                           //@synthesize mainWorkspace=_mainWorkspace - In the implementation block
@property (nonatomic,retain) SBIdleTimerGlobalCoordinator * idleTimerCoordinator;                                       //@synthesize idleTimerCoordinator=_idleTimerCoordinator - In the implementation block
@property (nonatomic,retain) SBSystemGestureManager * systemGestureManager;                                             //@synthesize systemGestureManager=_systemGestureManager - In the implementation block
@property (nonatomic,retain) SBLockScreenManager * lockScreenManager;                                                   //@synthesize lockScreenManager=_lockScreenManager - In the implementation block
@property (nonatomic,retain) SBMainDisplayRootWindowScenePresentationBinder * springboardRootWindowBinder;              //@synthesize springboardRootWindowBinder=_springboardRootWindowBinder - In the implementation block
@property (nonatomic,retain) SBHIDInterface * HIDInterface;                                                             //@synthesize HIDInterface=_HIDInterface - In the implementation block
@property (nonatomic,retain) UIRootWindowScenePresentationBinder * starRootWindowBinder;                                //@synthesize starRootWindowBinder=_starRootWindowBinder - In the implementation block
@property (nonatomic,retain) SBSTARScreenFadeController * screenFadeController;                                         //@synthesize screenFadeController=_screenFadeController - In the implementation block
@property (nonatomic,retain) id<BSInvalidatable> disableIdleTimerAssertion;                                             //@synthesize disableIdleTimerAssertion=_disableIdleTimerAssertion - In the implementation block
@property (nonatomic,retain) id<BSInvalidatable> disableSystemGesturesAssertion;                                        //@synthesize disableSystemGesturesAssertion=_disableSystemGesturesAssertion - In the implementation block
@property (nonatomic,retain) SBHIDUILockAssertion * disableMultitouchAssertion;                                         //@synthesize disableMultitouchAssertion=_disableMultitouchAssertion - In the implementation block
@property (nonatomic,retain) id<BSInvalidatable> disconnectLayerTreeAssertion;                                          //@synthesize disconnectLayerTreeAssertion=_disconnectLayerTreeAssertion - In the implementation block
@property (nonatomic,retain) id<BSInvalidatable> suppressBacklightFeaturesAssertion;                                    //@synthesize suppressBacklightFeaturesAssertion=_suppressBacklightFeaturesAssertion - In the implementation block
@property (nonatomic,retain) FBApplicationUpdateScenesTransaction * transaction;                                        //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,retain) FBScene * externalShellScene;                                                              //@synthesize externalShellScene=_externalShellScene - In the implementation block
@property (assign,nonatomic) unsigned long long transitionState;                                                        //@synthesize transitionState=_transitionState - In the implementation block
@property (nonatomic,retain) NSMutableArray * disableAssertions;                                                        //@synthesize disableAssertions=_disableAssertions - In the implementation block
@property (nonatomic,retain) SRSSessionController * starSessionController;                                              //@synthesize starSessionController=_starSessionController - In the implementation block
@property (assign,nonatomic) BOOL shouldEnableSTARMode;                                                                 //@synthesize shouldEnableSTARMode=_shouldEnableSTARMode - In the implementation block
@property (nonatomic,retain) NSMutableArray * observers;                                                                //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) BOOL isInSTARMode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(BOOL)isExternalSystemShellRootSceneIdentifier:(id)arg1 ;
+(BOOL)isSTARSupported;
-(id)init;
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(FBApplicationUpdateScenesTransaction *)transaction;
-(void)setTransaction:(FBApplicationUpdateScenesTransaction *)arg1 ;
-(void)setObservers:(NSMutableArray *)arg1 ;
-(NSMutableArray *)observers;
-(void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4 ;
-(void)sceneDidInvalidate:(id)arg1 ;
-(void)transaction:(id)arg1 didCreateScene:(id)arg2 ;
-(void)transaction:(id)arg1 willCommitSceneUpdate:(id)arg2 ;
-(void)transaction:(id)arg1 didCommitSceneUpdate:(id)arg2 ;
-(void)setDisableSystemGesturesAssertion:(id<BSInvalidatable>)arg1 ;
-(id<BSInvalidatable>)disableSystemGesturesAssertion;
-(unsigned long long)transitionState;
-(void)setTransitionState:(unsigned long long)arg1 ;
-(void)setStarSessionController:(SRSSessionController *)arg1 ;
-(void)sessionControllerActivated:(id)arg1 ;
-(void)sessionControllerInvalidated:(id)arg1 ;
-(void)sessionControllerWillEnterSTARMode:(id)arg1 ;
-(void)sessionControllerDidExitSTARMode:(id)arg1 ;
-(BOOL)isInSTARMode;
-(SRSSessionController *)starSessionController;
-(SBMainWorkspace *)mainWorkspace;
-(void)setIdleTimerCoordinator:(SBIdleTimerGlobalCoordinator *)arg1 ;
-(SBIdleTimerGlobalCoordinator *)idleTimerCoordinator;
-(void)forceSTARModeExitForReason:(id)arg1 ;
-(void)setHIDInterface:(SBHIDInterface *)arg1 ;
-(SBLockScreenManager *)lockScreenManager;
-(void)setLockScreenManager:(SBLockScreenManager *)arg1 ;
-(void)_populateAppLibraryWithSTARBoard;
-(void)_frontmostAppDidChange:(id)arg1 ;
-(void)reevaluateSTARMode;
-(id)_processIdentityForStarBoard;
-(void)_enterSTARMode;
-(void)_exitSTARMode;
-(void)_enterCADisplayModeForSTAR;
-(void)_executeSTARTransitionWithEventName:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_exitCADisplayModeForSTAR;
-(id)_displayModeForSTAR;
-(void)setShouldEnableSTARMode:(BOOL)arg1 ;
-(void)_updateSTARSceneWithCompletion:(/*^block*/id)arg1 ;
-(id)acquireSTARModeDisableAssertionForReason:(id)arg1 ;
-(void)setMainWorkspace:(SBMainWorkspace *)arg1 ;
-(SBSystemGestureManager *)systemGestureManager;
-(void)setSystemGestureManager:(SBSystemGestureManager *)arg1 ;
-(SBMainDisplayRootWindowScenePresentationBinder *)springboardRootWindowBinder;
-(void)setSpringboardRootWindowBinder:(SBMainDisplayRootWindowScenePresentationBinder *)arg1 ;
-(SBHIDInterface *)HIDInterface;
-(UIRootWindowScenePresentationBinder *)starRootWindowBinder;
-(void)setStarRootWindowBinder:(UIRootWindowScenePresentationBinder *)arg1 ;
-(SBSTARScreenFadeController *)screenFadeController;
-(void)setScreenFadeController:(SBSTARScreenFadeController *)arg1 ;
-(id<BSInvalidatable>)disableIdleTimerAssertion;
-(void)setDisableIdleTimerAssertion:(id<BSInvalidatable>)arg1 ;
-(SBHIDUILockAssertion *)disableMultitouchAssertion;
-(void)setDisableMultitouchAssertion:(SBHIDUILockAssertion *)arg1 ;
-(id<BSInvalidatable>)disconnectLayerTreeAssertion;
-(void)setDisconnectLayerTreeAssertion:(id<BSInvalidatable>)arg1 ;
-(id<BSInvalidatable>)suppressBacklightFeaturesAssertion;
-(void)setSuppressBacklightFeaturesAssertion:(id<BSInvalidatable>)arg1 ;
-(FBScene *)externalShellScene;
-(void)setExternalShellScene:(FBScene *)arg1 ;
-(NSMutableArray *)disableAssertions;
-(void)setDisableAssertions:(NSMutableArray *)arg1 ;
-(BOOL)shouldEnableSTARMode;
@end

