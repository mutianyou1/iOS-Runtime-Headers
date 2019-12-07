/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SBHomeGestureParticipantDelegate.h>

@class SBHomeGestureParticipant, SBBarSwipeAffordanceView;

@interface SBBarSwipeAffordanceViewController : UIViewController <SBHomeGestureParticipantDelegate> {

	long long _homeGestureParticipantIdentifier;
	SBHomeGestureParticipant* _homeGestureParticipant;
	BOOL _wantsToBeActiveAffordance;
	BOOL _suppressAffordance;

}

@property (nonatomic,retain) SBBarSwipeAffordanceView * view; 
@property (assign,nonatomic) BOOL wantsToBeActiveAffordance;               //@synthesize wantsToBeActiveAffordance=_wantsToBeActiveAffordance - In the implementation block
@property (assign,nonatomic) BOOL suppressAffordance;                      //@synthesize suppressAffordance=_suppressAffordance - In the implementation block
-(void)loadView;
-(BOOL)_canShowWhileLocked;
-(void)_updateActiveState;
-(void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1 ;
-(void)_beginTryingToBecomeActiveAffordance;
-(void)_stopTryingToBecomeActiveAffordance;
-(BOOL)suppressAffordance;
-(id)initWithHomeGestureParticipantIdentifier:(long long)arg1 ;
-(void)setWantsToBeActiveAffordance:(BOOL)arg1 ;
-(void)setSuppressAffordance:(BOOL)arg1 ;
-(BOOL)wantsToBeActiveAffordance;
@end
