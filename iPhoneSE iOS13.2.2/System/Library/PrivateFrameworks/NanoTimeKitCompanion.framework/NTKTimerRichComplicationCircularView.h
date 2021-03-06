/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:12 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKRichComplicationCircularBaseView.h>

@class NTKRichComplicationDialView, UIImageView, NTKColoringLabel, NSDate;

@interface NTKTimerRichComplicationCircularView : NTKRichComplicationCircularBaseView {

	NTKRichComplicationDialView* _backgroundDial;
	NTKRichComplicationDialView* _foregroundDial;
	UIImageView* _timerImageView;
	NTKColoringLabel* _timerLabel;
	NSDate* _timerDate;
	double _timerDuration;
	NSNumber* _updateToken;
	SCD_Struct_NT35 _layoutConstants;

}
-(id)init;
-(void)dealloc;
-(void)_resume;
-(void)layoutSubviews;
-(void)_pause;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(void)_handleTemplate:(id)arg1 reason:(long long)arg2 ;
-(void)_applyPausedUpdate;
-(void)_updateDialProgress;
@end

