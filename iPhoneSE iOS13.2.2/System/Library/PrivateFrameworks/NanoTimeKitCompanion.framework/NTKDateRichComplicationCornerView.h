/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:10 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKRichComplicationCornerView.h>
#import <libobjc.A.dylib/CLKMonochromeComplicationView.h>

@class NTKCurvedColoringLabel, NTKCurvedRoundedRectShapeLayer, NSDate, NSString;

@interface NTKDateRichComplicationCornerView : NTKRichComplicationCornerView <CLKMonochromeComplicationView> {

	NTKCurvedColoringLabel* _weekdayLabel;
	NTKCurvedColoringLabel* _previousDateLabel;
	NTKCurvedColoringLabel* _dateLabel;
	NTKCurvedColoringLabel* _nextDateLabel;
	NTKCurvedRoundedRectShapeLayer* _previousDatePlatter;
	NTKCurvedRoundedRectShapeLayer* _datePlatter;
	NTKCurvedRoundedRectShapeLayer* _nextDatePlatter;
	NSDate* _overrideDate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<CLKMonochromeFilterProvider> filterProvider; 
-(id)init;
-(void)dealloc;
-(void)layoutSubviews;
-(void)_updateDate;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(void)_handleTemplate:(id)arg1 reason:(long long)arg2 ;
-(void)_enumerateLabelsWithBlock:(/*^block*/id)arg1 ;
-(id)_createAndAddLabelPlatterWithAngularWidth:(double)arg1 color:(id)arg2 ;
-(id)_createAndAddColoringLabelWithFontSize:(double)arg1 dayOffset:(long long)arg2 ;
-(void)_timeChanged:(id)arg1 ;
@end

