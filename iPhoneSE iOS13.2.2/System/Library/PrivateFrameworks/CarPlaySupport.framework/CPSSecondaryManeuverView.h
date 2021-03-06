/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:03 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarPlaySupport/CarPlaySupport-Structs.h>
#import <CarPlaySupport/CPSManeuverView.h>

@class UIImageView, CPManeuver, CPSAbridgableLabel;

@interface CPSSecondaryManeuverView : CPSManeuverView {

	UIImageView* _symbolView;
	CPManeuver* _maneuver;
	CPSAbridgableLabel* _instructionLabel;

}

@property (nonatomic,retain) UIImageView * symbolView;                           //@synthesize symbolView=_symbolView - In the implementation block
@property (nonatomic,retain) CPManeuver * maneuver;                              //@synthesize maneuver=_maneuver - In the implementation block
@property (nonatomic,retain) CPSAbridgableLabel * instructionLabel;              //@synthesize instructionLabel=_instructionLabel - In the implementation block
-(CGSize)intrinsicContentSize;
-(CPManeuver *)maneuver;
-(void)setManeuver:(CPManeuver *)arg1 ;
-(CPSAbridgableLabel *)instructionLabel;
-(void)setInstructionLabel:(CPSAbridgableLabel *)arg1 ;
-(void)backgroundColorDidChange;
-(id)initWithManeuver:(id)arg1 style:(long long)arg2 ;
-(UIImageView *)symbolView;
-(void)setSymbolView:(UIImageView *)arg1 ;
@end

