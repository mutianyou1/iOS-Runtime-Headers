/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:39 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
@class CAMediaTimingFunction;

@interface _SBSteppedAnimationTimingFunction : NSObject {

	CAMediaTimingFunction* _timingFunction;
	SBNormalizedTransitionInterval _constrainedRange;

}

@property (nonatomic,readonly) CAMediaTimingFunction * timingFunction;                       //@synthesize timingFunction=_timingFunction - In the implementation block
@property (nonatomic,readonly) SBNormalizedTransitionInterval constrainedRange;              //@synthesize constrainedRange=_constrainedRange - In the implementation block
+(id)timingFunctionWithTimingFunction:(id)arg1 constrainedToIntervalBetween:(double)arg2 and:(double)arg3 ;
-(CAMediaTimingFunction *)timingFunction;
-(double)valueAtPercentage:(double)arg1 ;
-(id)initWithTimingFunction:(id)arg1 constrainedToIntervalBetween:(double)arg2 and:(double)arg3 ;
-(SBNormalizedTransitionInterval)constrainedRange;
@end
