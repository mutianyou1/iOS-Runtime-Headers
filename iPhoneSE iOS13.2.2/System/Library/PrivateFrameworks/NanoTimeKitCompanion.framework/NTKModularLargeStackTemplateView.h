/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:09 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKModularTemplateView.h>

@protocol NTKComplicationImageView;
@class NTKColoringLabel, UIView;

@interface NTKModularLargeStackTemplateView : NTKModularTemplateView {

	NTKColoringLabel* _headerLeadingLabel;
	NTKColoringLabel* _headerTrailingLabel;
	BOOL _shouldTruncateHeaderLeadingLabelFirst;
	NTKColoringLabel* _body1Label;
	NTKColoringLabel* _body2Label;
	UIView*<NTKComplicationImageView> _headerGlyph;
	UIView*<NTKComplicationImageView> _body1Glyph;

}
+(BOOL)handlesComplicationTemplate:(id)arg1 ;
-(void)_update;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_layoutContentView;
-(void)_enumerateForegroundColoringViewsWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateSecondaryForegroundColoringViewsWithBlock:(/*^block*/id)arg1 ;
-(id)_newLabelSubviewWithFont:(id)arg1 ;
-(void)_updateLabelsMaxWidths;
-(id)_newLabelSubview;
-(void)_updateForStandardBodyTemplate:(id)arg1 ;
-(void)_updateForTallBodyTemplate:(id)arg1 ;
@end

