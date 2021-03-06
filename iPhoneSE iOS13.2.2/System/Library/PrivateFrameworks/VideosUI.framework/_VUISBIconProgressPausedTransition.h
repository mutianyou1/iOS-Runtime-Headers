/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:36 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/_VUISBIconProgressTransition.h>

@class CAMediaTimingFunction;

@interface _VUISBIconProgressPausedTransition : _VUISBIconProgressTransition {

	double _totalElapsedTime;
	double _duration;
	CAMediaTimingFunction* _timingFunction;
	BOOL _toPaused;
	double _fraction;

}
+(id)newTransitionToPaused:(BOOL)arg1 ;
-(void)dealloc;
-(void)_updateView:(id)arg1 ;
-(BOOL)isCompleteWithView:(id)arg1 ;
-(void)completeTransitionAndUpdateView:(id)arg1 ;
-(void)updateToPaused:(BOOL)arg1 ;
-(void)updateView:(id)arg1 withElapsedTime:(double)arg2 ;
-(id)_initToPaused:(BOOL)arg1 ;
-(void)_updateTimingFunction;
-(void)_updateElapsedTimeFromFraction;
@end

