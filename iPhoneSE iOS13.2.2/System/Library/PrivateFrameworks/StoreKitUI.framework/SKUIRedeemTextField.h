/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:16 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UITextField.h>

@class UIView;

@interface SKUIRedeemTextField : UITextField {

	UIView* _bottomBorderView;
	UIView* _topBorderView;
	UIView* _backdropView;
	BOOL _backdropBackground;
	BOOL _suppressBorder;

}

@property (assign,nonatomic) BOOL backdropBackground;              //@synthesize backdropBackground=_backdropBackground - In the implementation block
@property (assign,nonatomic) BOOL suppressBorder;                  //@synthesize suppressBorder=_suppressBorder - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGRect)textRectForBounds:(CGRect)arg1 ;
-(CGRect)editingRectForBounds:(CGRect)arg1 ;
-(CGRect)placeholderRectForBounds:(CGRect)arg1 ;
-(void)setBackdropBackground:(BOOL)arg1 ;
-(void)setSuppressBorder:(BOOL)arg1 ;
-(BOOL)backdropBackground;
-(BOOL)suppressBorder;
@end

