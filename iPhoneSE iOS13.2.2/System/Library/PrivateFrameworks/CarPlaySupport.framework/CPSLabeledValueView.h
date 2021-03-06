/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:02 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class UILabel;

@interface CPSLabeledValueView : UIView {

	UILabel* _valueText;
	UILabel* _label;

}

@property (nonatomic,readonly) UILabel * valueText;              //@synthesize valueText=_valueText - In the implementation block
@property (nonatomic,readonly) UILabel * label;                  //@synthesize label=_label - In the implementation block
-(id)init;
-(UILabel *)label;
-(void)setTextColor:(id)arg1 ;
-(UILabel *)valueText;
@end

