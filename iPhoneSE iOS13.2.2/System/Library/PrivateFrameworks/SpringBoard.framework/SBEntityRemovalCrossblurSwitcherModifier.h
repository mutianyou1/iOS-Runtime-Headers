/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class NSUUID, SBAppLayout, SBSwitcherModifier, SBEntityRemovalToHomeSwitcherModifier;

@interface SBEntityRemovalCrossblurSwitcherModifier : SBTransitionSwitcherModifier {

	BOOL _animateOpacity;
	NSUUID* _transitionID;
	SBAppLayout* _appLayout;
	SBSwitcherModifier* _multitaskingModifier;
	SBEntityRemovalToHomeSwitcherModifier* _toHomeRemovalModifier;

}
-(CGRect)frameForIndex:(unsigned long long)arg1 ;
-(id)transitionWillBegin;
-(id)transitionWillUpdate;
-(id)opacitySettings;
-(id)layoutSettings;
-(BOOL)isIndexVisible:(unsigned long long)arg1 ;
-(double)scaleForIndex:(unsigned long long)arg1 ;
-(double)opacityForIndex:(unsigned long long)arg1 ;
-(void)didMoveToParentModifier:(id)arg1 ;
-(id)handleTimerEvent:(id)arg1 ;
-(id)transitionDidEnd;
-(id)initWithTransitionID:(id)arg1 appLayout:(id)arg2 multitaskingModifier:(id)arg3 ;
@end
