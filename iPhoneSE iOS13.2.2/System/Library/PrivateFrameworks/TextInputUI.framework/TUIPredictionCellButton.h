/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:57 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputUI/TextInputUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class TUIPredictionViewCell;

@interface TUIPredictionCellButton : UIButton {

	TUIPredictionViewCell* _cellView;

}

@property (nonatomic,readonly) TUIPredictionViewCell * cellView;              //@synthesize cellView=_cellView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(TUIPredictionViewCell *)cellView;
@end

