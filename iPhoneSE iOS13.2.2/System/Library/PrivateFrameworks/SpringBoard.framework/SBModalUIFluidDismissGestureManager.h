/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:37 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBModalUIFluidDismissPanGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/BSTransactionObserver.h>
#import <libobjc.A.dylib/PTSettingsKeyObserver.h>

@class SBTransientOverlayPresentationManager, SBAssistantController, SBHomeGestureSettings, SBModalUIFluidDismissPanGestureRecognizer, SBModalUIFluidDismissGestureWorkspaceTransaction, NSString;

@interface SBModalUIFluidDismissGestureManager : NSObject <SBModalUIFluidDismissPanGestureRecognizerDelegate, BSTransactionObserver, PTSettingsKeyObserver> {

	SBTransientOverlayPresentationManager* _transientOverlayPresentationManager;
	SBAssistantController* _assistantController;
	SBHomeGestureSettings* _homeGestureSettings;
	SBModalUIFluidDismissPanGestureRecognizer* _bottomEdgeRecognizer;
	SBModalUIFluidDismissGestureWorkspaceTransaction* _currentTransaction;

}

@property (nonatomic,readonly) SBTransientOverlayPresentationManager * transientOverlayPresentationManager;              //@synthesize transientOverlayPresentationManager=_transientOverlayPresentationManager - In the implementation block
@property (nonatomic,readonly) SBAssistantController * assistantController;                                              //@synthesize assistantController=_assistantController - In the implementation block
@property (nonatomic,retain) SBHomeGestureSettings * homeGestureSettings;                                                //@synthesize homeGestureSettings=_homeGestureSettings - In the implementation block
@property (nonatomic,retain) SBModalUIFluidDismissPanGestureRecognizer * bottomEdgeRecognizer;                           //@synthesize bottomEdgeRecognizer=_bottomEdgeRecognizer - In the implementation block
@property (nonatomic,retain) SBModalUIFluidDismissGestureWorkspaceTransaction * currentTransaction;                      //@synthesize currentTransaction=_currentTransaction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)transactionDidComplete:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(SBModalUIFluidDismissGestureWorkspaceTransaction *)currentTransaction;
-(void)setCurrentTransaction:(SBModalUIFluidDismissGestureWorkspaceTransaction *)arg1 ;
-(void)_addOrRemoveGestureForCurrentSettings;
-(void)_handleBottomEdgeGestureBegan:(id)arg1 ;
-(void)_handleBottomEdgeGestureChanged:(id)arg1 ;
-(void)_handleBottomEdgeGestureEnded:(id)arg1 ;
-(id)viewForSystemGestureRecognizer:(id)arg1 ;
-(SBTransientOverlayPresentationManager *)transientOverlayPresentationManager;
-(id)initWithTransientOverlayPresentationManager:(id)arg1 assistantController:(id)arg2 ;
-(void)_handleBottomEdgeGesture:(id)arg1 ;
-(SBModalUIFluidDismissPanGestureRecognizer *)bottomEdgeRecognizer;
-(void)setBottomEdgeRecognizer:(SBModalUIFluidDismissPanGestureRecognizer *)arg1 ;
-(SBHomeGestureSettings *)homeGestureSettings;
-(SBAssistantController *)assistantController;
-(void)setHomeGestureSettings:(SBHomeGestureSettings *)arg1 ;
-(long long)touchInterfaceOrientationForRecognizer:(id)arg1 ;
-(long long)_dismissalTypeForCurrentContext;
@end

