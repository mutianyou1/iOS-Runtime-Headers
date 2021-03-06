/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:43 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AXHapticFeedbackManager : NSObject
+(id)sharedManager;
-(void)_playFeedback:(id)arg1 ;
-(void)_playDiscreteFeedbackForType:(long long)arg1 ;
-(void)_playFeedbackImpactBehaviorWithIntensity:(double)arg1 ;
-(void)_playPatternFeedback:(long long)arg1 numberOfRepetitions:(long long)arg2 atInterval:(double)arg3 ;
-(void)_playCancelPatternFeedback;
-(void)playHapticFeedbackForType:(long long)arg1 ;
@end

