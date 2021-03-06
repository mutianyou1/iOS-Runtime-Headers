/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:13 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TemplateKit/TLKView.h>

@class TLKMultilineText, UIActivityIndicatorView, TLKLabel;

@interface TLKActivityIndicatorView : TLKView {

	TLKMultilineText* _subtitle;
	UIActivityIndicatorView* _activityIndicator;
	TLKLabel* _subtitleLabel;

}

@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,retain) TLKLabel * subtitleLabel;                                 //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) TLKMultilineText * subtitle;                              //@synthesize subtitle=_subtitle - In the implementation block
-(TLKMultilineText *)subtitle;
-(void)setSubtitle:(TLKMultilineText *)arg1 ;
-(void)didMoveToWindow;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)setSubtitleLabel:(TLKLabel *)arg1 ;
-(TLKLabel *)subtitleLabel;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(id)setupContentView;
-(void)observedPropertiesChanged;
-(id)subtitleLabelText;
-(void)tlk_updateForAppearance:(id)arg1 ;
-(BOOL)usesDefaultInsets;
@end

