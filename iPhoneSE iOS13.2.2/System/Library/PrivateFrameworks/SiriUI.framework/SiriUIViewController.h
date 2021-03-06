/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:21 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class AceObject;


@protocol SiriUIViewController <NSObject>
@property (nonatomic,retain) AceObject * aceObject; 
@property (assign,getter=isUtteranceUserInteractionEnabled,nonatomic) BOOL utteranceUserInteractionEnabled; 
@optional
-(double)baselineOffsetFromBottom;
-(id)navigationTitle;
-(double)desiredHeight;
-(double)desiredHeightForWidth:(double)arg1;
-(void)endEditingAndCorrect:(BOOL)arg1;
-(void)endEditingAndCorrectByTouchPoint:(CGPoint)arg1;
-(void)handleAceCommand:(id)arg1;
-(void)siriWillBeginScrolling;
-(void)siriDidScrollVisible:(BOOL)arg1;
-(double)desiredTopPaddingBelowController:(id)arg1;
-(double)desiredPinnedTopPadding;
-(void)siriDidStartSpeakingWithIdentifier:(id)arg1;
-(void)siriDidStopSpeakingWithIdentifier:(id)arg1 speechQueueIsEmpty:(BOOL)arg2;
-(BOOL)shouldHidePriorViews;
-(void)siriDidReceiveViewsWithDialogPhase:(id)arg1;

@required
-(AceObject *)aceObject;
-(void)setAceObject:(id)arg1;
-(void)siriWillActivateFromSource:(long long)arg1;
-(void)siriDidDeactivate;
-(void)wasAddedToTranscript;
-(BOOL)isUtteranceUserInteractionEnabled;
-(void)setUtteranceUserInteractionEnabled:(BOOL)arg1;

@end

