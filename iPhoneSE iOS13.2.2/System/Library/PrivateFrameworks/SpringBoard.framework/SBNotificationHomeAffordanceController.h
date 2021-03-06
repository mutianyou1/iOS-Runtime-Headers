/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:41 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBHomeGestureParticipantDelegate.h>

@class NSMapTable, SBHomeGesturePanGestureRecognizer, SBScreenEdgePanGestureRecognizer, BSAnimationSettings;

@interface SBNotificationHomeAffordanceController : NSObject <SBHomeGestureParticipantDelegate> {

	NSMapTable* _clientsToParticipants;
	SBHomeGesturePanGestureRecognizer* _screenEdgePanGesture;

}

@property (nonatomic,readonly) SBScreenEdgePanGestureRecognizer * screenEdgePanGesture; 
@property (nonatomic,readonly) BSAnimationSettings * hideHomeAffordanceAnimationSettings; 
@property (nonatomic,readonly) BSAnimationSettings * unhideHomeAffordanceAnimationSettings; 
@property (nonatomic,readonly) id<UIViewSpringAnimationBehaviorDescribing> settleHomeAffordanceAnimationBehaviorDescription; 
+(id)sharedInstance;
-(void)registerClient:(id)arg1 withIdentifier:(long long)arg2 ;
-(void)unregisterClient:(id)arg1 withIdentifier:(long long)arg2 ;
-(void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1 ;
-(BSAnimationSettings *)hideHomeAffordanceAnimationSettings;
-(BSAnimationSettings *)unhideHomeAffordanceAnimationSettings;
-(id<UIViewSpringAnimationBehaviorDescribing>)settleHomeAffordanceAnimationBehaviorDescription;
-(SBScreenEdgePanGestureRecognizer *)screenEdgePanGesture;
@end

