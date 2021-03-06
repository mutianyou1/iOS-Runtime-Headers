/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:22 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, UIView, UILabel;

@interface WFTextEditingHintView : UIView {

	NSString* _hintText;
	UIView* _backgroundView;
	UILabel* _hintLabel;

}

@property (assign,nonatomic,__weak) UIView * backgroundView;              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (assign,nonatomic,__weak) UILabel * hintLabel;                  //@synthesize hintLabel=_hintLabel - In the implementation block
@property (nonatomic,copy) NSString * hintText;                           //@synthesize hintText=_hintText - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)backgroundView;
-(void)setBackgroundView:(UIView *)arg1 ;
-(void)setHintLabel:(UILabel *)arg1 ;
-(UILabel *)hintLabel;
-(void)setHintText:(NSString *)arg1 ;
-(NSString *)hintText;
@end

