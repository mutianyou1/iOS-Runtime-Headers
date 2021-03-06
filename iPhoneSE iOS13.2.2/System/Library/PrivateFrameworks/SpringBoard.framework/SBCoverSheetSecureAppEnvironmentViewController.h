/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:36 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SBHomeGestureParticipantDelegate.h>
#import <libobjc.A.dylib/SBSecureAppObserver.h>
#import <libobjc.A.dylib/CSApplicationHosting.h>
#import <libobjc.A.dylib/SBCoverSheetSlidingViewControllerContentViewController.h>

@protocol BSInvalidatable, SBCoverSheetSecureAppEnvironmentViewControllerDelegate;
@class SBDashBoardHostedAppViewController, SBHomeGestureParticipant, NSString;

@interface SBCoverSheetSecureAppEnvironmentViewController : UIViewController <SBHomeGestureParticipantDelegate, SBSecureAppObserver, CSApplicationHosting, SBCoverSheetSlidingViewControllerContentViewController> {

	id<BSInvalidatable> _biometricMatchingAssertion;
	unsigned long long _currentOrientationMask;
	SBDashBoardHostedAppViewController* _secureAppViewController;
	id<SBCoverSheetSecureAppEnvironmentViewControllerDelegate> _delegate;
	SBHomeGestureParticipant* _homeGestureParticipant;

}

@property (nonatomic,readonly) SBDashBoardHostedAppViewController * secureAppViewController;                          //@synthesize secureAppViewController=_secureAppViewController - In the implementation block
@property (assign,nonatomic,__weak) id<SBCoverSheetSecureAppEnvironmentViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SBHomeGestureParticipant * homeGestureParticipant;                                       //@synthesize homeGestureParticipant=_homeGestureParticipant - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL contentOccludesBackground; 
-(id<SBCoverSheetSecureAppEnvironmentViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SBCoverSheetSecureAppEnvironmentViewControllerDelegate>)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1 ;
-(BOOL)isHostingAnApp;
-(id)hostedAppSceneHandle;
-(BOOL)canHostAnApp;
-(id)hostedAppSceneHandles;
-(void)hostedAppWillRotateToInterfaceOrientation:(long long)arg1 ;
-(BOOL)handlesRotationIndependentOfCoverSheet;
-(BOOL)contentOccludesBackground;
-(SBDashBoardHostedAppViewController *)secureAppViewController;
-(SBHomeGestureParticipant *)homeGestureParticipant;
-(void)setHomeGestureParticipant:(SBHomeGestureParticipant *)arg1 ;
-(id)initWithSecureAppViewController:(id)arg1 ;
-(void)requestHomeGestureOwnership;
-(void)relinquishHomeGesture;
-(void)secureAppOfTypeDidBegin:(unsigned long long)arg1 ;
-(void)secureAppOfTypeDidTakeNewAssertion:(unsigned long long)arg1 ;
-(void)_updateSupportedOrientationsMaskForSecureAppAction;
-(void)updateHomeGrabberHiddenAssertion:(BOOL)arg1 ;
-(id)_currentSecureAppAction;
-(void)relinquishHiddenAssertionForHomeGrabber:(id)arg1 animated:(BOOL)arg2 ;
-(void)takeHiddenAssertionForHomeGrabber:(id)arg1 animated:(BOOL)arg2 ;
@end

