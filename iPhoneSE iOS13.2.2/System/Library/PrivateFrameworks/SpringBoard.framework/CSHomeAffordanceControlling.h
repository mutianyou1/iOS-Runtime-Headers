/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:35 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIPanGestureRecognizer, BSAnimationSettings;


@protocol CSHomeAffordanceControlling <NSObject>
@property (nonatomic,readonly) UIPanGestureRecognizer * screenEdgePanGesture; 
@property (nonatomic,readonly) BSAnimationSettings * hideHomeAffordanceAnimationSettings; 
@property (nonatomic,readonly) BSAnimationSettings * unhideHomeAffordanceAnimationSettings; 
@property (nonatomic,readonly) id<UIViewSpringAnimationBehaviorDescribing> settleHomeAffordanceAnimationBehaviorDescription; 
@required
-(void)registerHomeGestureParticipant:(id)arg1 withIdentifier:(long long)arg2;
-(void)unregisterHomeGestureParticipant:(id)arg1 withIdentifier:(long long)arg2;
-(id)keyboardAssertionForGestureWindow:(id)arg1;
-(BSAnimationSettings *)hideHomeAffordanceAnimationSettings;
-(BSAnimationSettings *)unhideHomeAffordanceAnimationSettings;
-(id<UIViewSpringAnimationBehaviorDescribing>)settleHomeAffordanceAnimationBehaviorDescription;
-(UIPanGestureRecognizer *)screenEdgePanGesture;

@end

