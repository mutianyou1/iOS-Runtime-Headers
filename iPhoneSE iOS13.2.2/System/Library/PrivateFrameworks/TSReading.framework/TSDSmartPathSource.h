/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:09 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSDSmartPathSource
@property (readonly) unsigned long long numberOfControlKnobs; 
@optional
-(CGPoint*)fixedPointForControlKnobChange;

@required
-(void)setControlKnobPosition:(unsigned long long)arg1 toPoint:(CGPoint)arg2;
-(CGPoint*)getControlKnobPosition:(unsigned long long)arg1;
-(id)getFeedbackStringForKnob:(unsigned long long)arg1;
-(CGPathRef)newFeedbackPathForKnob:(unsigned long long)arg1;
-(unsigned long long)numberOfControlKnobs;

@end
