/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:14 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TemplateKit/TLKView.h>

@class TLKMultilineText, TLKLabel, TLKProminenceView;

@interface TLKSectionHeaderView : TLKView {

	TLKMultilineText* _headerText;
	TLKLabel* _headerTextLabel;
	TLKProminenceView* _backgroundView;

}

@property (nonatomic,retain) TLKLabel * headerTextLabel;                      //@synthesize headerTextLabel=_headerTextLabel - In the implementation block
@property (nonatomic,retain) TLKProminenceView * backgroundView;              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) TLKMultilineText * headerText;                   //@synthesize headerText=_headerText - In the implementation block
-(TLKProminenceView *)backgroundView;
-(void)setBackgroundView:(TLKProminenceView *)arg1 ;
-(TLKMultilineText *)headerText;
-(void)setHeaderText:(TLKMultilineText *)arg1 ;
-(id)headerLabelText;
-(id)setupContentView;
-(void)observedPropertiesChanged;
-(BOOL)usesDefaultInsets;
-(void)setHeaderTextLabel:(TLKLabel *)arg1 ;
-(TLKLabel *)headerTextLabel;
@end

