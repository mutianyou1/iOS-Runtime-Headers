/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:54 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UISceneLayerHostView.h>
#import <UIKit/UIExternalScenePairingObserverDelegate.h>

@protocol UIScenePresenter;
@class FBScene, NSString, UIExternalScenePairingObserver, UIScenePresentationManager;

@interface _UIExternalSceneLayerHostView : _UISceneLayerHostView <UIExternalScenePairingObserverDelegate> {

	FBScene* _parentScene;
	FBScene* _targetScene;
	NSString* _targetSceneID;
	UIExternalScenePairingObserver* _pairingObserver;
	UIScenePresentationManager* _presentationManager;
	id<UIScenePresenter> _presenter;

}

@property (nonatomic,readonly) FBScene * targetScene;               //@synthesize targetScene=_targetScene - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)_updateHostingState;
-(void)setCurrentPresentationContext:(id)arg1 ;
-(void)_updateTargetScene;
-(void)externalScenePairingObserver:(id)arg1 pairingsDidChange:(id)arg2 ;
-(id)initWithSceneLayer:(id)arg1 parentScene:(id)arg2 ;
-(FBScene *)targetScene;
@end

