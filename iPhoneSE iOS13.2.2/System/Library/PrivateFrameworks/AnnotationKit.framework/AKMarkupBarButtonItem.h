/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:29 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIBarButtonItem.h>

@class UIButton, AKMarkupButtonContainerView, UIImage;

@interface AKMarkupBarButtonItem : UIBarButtonItem {

	UIButton* _toggleButton;
	AKMarkupButtonContainerView* _toggleView;
	UIImage* _toggleButtonImage;

}

@property (nonatomic,retain) UIButton * toggleButton;                               //@synthesize toggleButton=_toggleButton - In the implementation block
@property (nonatomic,retain) AKMarkupButtonContainerView * toggleView;              //@synthesize toggleView=_toggleView - In the implementation block
@property (nonatomic,retain) UIImage * toggleButtonImage;                           //@synthesize toggleButtonImage=_toggleButtonImage - In the implementation block
+(id)markupBarButtonWithTarget:(id)arg1 action:(SEL)arg2 ;
-(id)init;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setTarget:(id)arg1 ;
-(void)setAction:(SEL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(AKMarkupButtonContainerView *)toggleView;
-(UIButton *)toggleButton;
-(void)setToggleButton:(UIButton *)arg1 ;
-(void)setToggleView:(AKMarkupButtonContainerView *)arg1 ;
-(UIImage *)toggleButtonImage;
-(void)setToggleButtonImage:(UIImage *)arg1 ;
@end
