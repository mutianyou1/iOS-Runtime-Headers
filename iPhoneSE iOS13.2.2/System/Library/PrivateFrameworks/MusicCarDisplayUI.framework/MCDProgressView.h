/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:46 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicCarDisplayUI/MusicCarDisplayUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, MCDProgressBarView, CADisplayLink;

@interface MCDProgressView : UIView {

	UILabel* _timeLabel;
	UILabel* _timeRemainingLabel;
	UILabel* _liveLabel;
	MCDProgressBarView* _progressBarView;
	CADisplayLink* _displayLink;
	double _lastTargetTimestamp;
	SCD_Struct_MC1 _durationSnapshot;

}

@property (assign,nonatomic) SCD_Struct_MC1 durationSnapshot;              //@synthesize durationSnapshot=_durationSnapshot - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(void)_displayLinkTick:(id)arg1 ;
-(void)setupConstraints;
-(SCD_Struct_MC1)durationSnapshot;
-(void)setDurationSnapshot:(SCD_Struct_MC1)arg1 ;
-(void)_updateLabelsForElapsedTime:(double)arg1 duration:(double)arg2 ;
-(void)_updateProgressForElapsedTime:(double)arg1 duration:(double)arg2 ;
-(void)runUntilNextDisplayLinkEvent;
-(void)pauseDisplayLinkIfNeeded;
@end

