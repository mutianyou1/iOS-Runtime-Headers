/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:52 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIFeedbackGenerator.h>

@protocol _UIFeedbackContinuousPlayable;
@class NSString, _UIFeedback, _UIStatesFeedbackGeneratorConfiguration;

@interface _UIStatesFeedbackGenerator : UIFeedbackGenerator {

	BOOL _approachActivated;
	NSString* _currentState;
	_UIFeedback*<_UIFeedbackContinuousPlayable> _playingContinuousFeedback;

}

@property (assign,setter=_setApproachActivated:,getter=_approachActivated,nonatomic) BOOL approachActivated;                           //@synthesize approachActivated=_approachActivated - In the implementation block
@property (getter=_statesConfiguration,nonatomic,readonly) _UIStatesFeedbackGeneratorConfiguration * statesConfiguration; 
@property (nonatomic,retain) NSString * currentState;                                                                                  //@synthesize currentState=_currentState - In the implementation block
@property (nonatomic,retain) _UIFeedback*<_UIFeedbackContinuousPlayable> playingContinuousFeedback;                                    //@synthesize playingContinuousFeedback=_playingContinuousFeedback - In the implementation block
+(Class)_configurationClass;
-(NSString *)currentState;
-(id)initWithStyle:(long long)arg1 ;
-(id)initWithConfiguration:(id)arg1 coordinateSpace:(id)arg2 ;
-(id)_stats_key;
-(id)initWithStyle:(long long)arg1 coordinateSpace:(id)arg2 ;
-(void)_stopPlayingContinuousFeedback;
-(_UIFeedback*<_UIFeedbackContinuousPlayable>)playingContinuousFeedback;
-(void)setPlayingContinuousFeedback:(_UIFeedback*<_UIFeedbackContinuousPlayable>)arg1 ;
-(id)_statesConfiguration;
-(void)setCurrentState:(NSString *)arg1 ;
-(id)_configurationFromState:(id)arg1 toState:(id)arg2 ;
-(void)transitionToState:(id)arg1 updated:(double)arg2 ;
-(void)transitionToState:(id)arg1 ended:(BOOL)arg2 ;
-(BOOL)_approachActivated;
-(void)_setApproachActivated:(BOOL)arg1 ;
@end
