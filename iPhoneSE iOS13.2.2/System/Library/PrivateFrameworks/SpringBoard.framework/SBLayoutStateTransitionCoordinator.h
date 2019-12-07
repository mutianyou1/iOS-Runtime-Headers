/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBWorkspaceApplicationSceneTransitionContextDelegate.h>

@protocol SBLayoutStateTransitionSceneEntityFrameProvider;
@class NSPointerArray, SBLayoutStateTransitionContext, SBSceneManager, NSString;

@interface SBLayoutStateTransitionCoordinator : NSObject <SBWorkspaceApplicationSceneTransitionContextDelegate> {

	NSPointerArray* _observerPointerArray;
	SBLayoutStateTransitionContext* _transitionContext;
	SBSceneManager* _sceneManager;
	id<SBLayoutStateTransitionSceneEntityFrameProvider> _sceneEntityFrameProvider;

}

@property (nonatomic,__weak,readonly) SBSceneManager * sceneManager;                                                           //@synthesize sceneManager=_sceneManager - In the implementation block
@property (assign,nonatomic,__weak) id<SBLayoutStateTransitionSceneEntityFrameProvider> sceneEntityFrameProvider;              //@synthesize sceneEntityFrameProvider=_sceneEntityFrameProvider - In the implementation block
@property (getter=isTransitioning,nonatomic,readonly) BOOL transitioning; 
@property (nonatomic,readonly) SBLayoutStateTransitionContext * transitionContext;                                             //@synthesize transitionContext=_transitionContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(SBLayoutStateTransitionContext *)transitionContext;
-(BOOL)isTransitioning;
-(SBSceneManager *)sceneManager;
-(void)willEndTransition;
-(void)beginTransitionForWorkspaceTransaction:(id)arg1 ;
-(void)endTransitionWithError:(id)arg1 ;
-(id)layoutStateForApplicationTransitionContext:(id)arg1 ;
-(id)previousLayoutStateForApplicationTransitionContext:(id)arg1 ;
-(id)initWithSceneManager:(id)arg1 ;
-(void)setSceneEntityFrameProvider:(id<SBLayoutStateTransitionSceneEntityFrameProvider>)arg1 ;
-(id<SBLayoutStateTransitionSceneEntityFrameProvider>)sceneEntityFrameProvider;
@end
