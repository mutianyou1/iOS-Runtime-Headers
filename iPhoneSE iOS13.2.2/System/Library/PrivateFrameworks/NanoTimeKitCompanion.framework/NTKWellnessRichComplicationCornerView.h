/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:06 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKRichComplicationCornerTextCustomView.h>

@class NTKRingsAndDotsView, NSMutableArray;

@interface NTKWellnessRichComplicationCornerView : NTKRichComplicationCornerTextCustomView {

	NTKRingsAndDotsView* _ringsView;
	NSMutableArray* _ringsFillFractions;

}
-(id)_outerView;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(void)_handleTemplate:(id)arg1 reason:(long long)arg2 ;
-(void)_showEmptyViewsWithString:(id)arg1 shortText:(id)arg2 ;
-(void)_updateRingWithTemplate:(id)arg1 ;
-(void)_updateLabelWithTemplate:(id)arg1 ;
@end

