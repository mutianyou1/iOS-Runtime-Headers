/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:07 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKZeusComplicationView.h>
#import <libobjc.A.dylib/NTKDateComplicationDisplay.h>

@class UIImageView, NSString;

@interface NTKZeusDateComplicationView : NTKZeusComplicationView <NTKDateComplicationDisplay> {

	UIImageView* _imageView;
	int _currentDayNumber;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<NTKComplicationDisplayObserver> displayObserver; 
@property (assign,nonatomic) BOOL canUseCurvedText; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (assign,nonatomic) BOOL shouldUseTemplateColors; 
-(id)init;
-(void)setStyle:(unsigned long long)arg1 ;
-(CGRect)contentFrame;
-(void)layoutSubviews;
-(void)_updateImage;
-(void)applyPalette:(id)arg1 ;
-(void)applyTransitionFraction:(double)arg1 fromPalette:(id)arg2 toPalette:(id)arg3 ;
-(void)setDateComplicationText:(id)arg1 withDayRange:(NSRange)arg2 forDateStyle:(unsigned long long)arg3 ;
-(unsigned long long)desiredDateComplicationDateStyle;
@end

