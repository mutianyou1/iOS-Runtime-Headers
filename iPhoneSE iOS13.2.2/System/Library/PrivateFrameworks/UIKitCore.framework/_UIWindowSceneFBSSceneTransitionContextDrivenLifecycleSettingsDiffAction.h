/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:46 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UISceneSettingsDiffAction.h>

@class UIApplicationSceneSettingsDiffInspector, NSString;

@interface _UIWindowSceneFBSSceneTransitionContextDrivenLifecycleSettingsDiffAction : NSObject <_UISceneSettingsDiffAction> {

	UIApplicationSceneSettingsDiffInspector* _sceneSettingsApplicationLifecycleEventDiffInspector;

}

@property (nonatomic,retain) UIApplicationSceneSettingsDiffInspector * sceneSettingsApplicationLifecycleEventDiffInspector;              //@synthesize sceneSettingsApplicationLifecycleEventDiffInspector=_sceneSettingsApplicationLifecycleEventDiffInspector - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_performActionsForUIScene:(id)arg1 withUpdatedFBSScene:(id)arg2 settingsDiff:(id)arg3 fromSettings:(id)arg4 transitionContext:(id)arg5 lifecycleActionType:(unsigned)arg6 ;
-(UIApplicationSceneSettingsDiffInspector *)sceneSettingsApplicationLifecycleEventDiffInspector;
-(void)_animateUserInterfaceStyleChangeInScene:(id)arg1 transitionContext:(id)arg2 applyChangesBlock:(/*^block*/id)arg3 ;
-(void)setSceneSettingsApplicationLifecycleEventDiffInspector:(UIApplicationSceneSettingsDiffInspector *)arg1 ;
@end

