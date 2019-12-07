/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:36 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsUI/NewsUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/NUCrossFadeViewAnimatable.h>

@class NUTextAndGlyph, UILabel, UIImageView, NSString;

@interface NUTextAndGlyphView : UIView <NUCrossFadeViewAnimatable> {

	NUTextAndGlyph* _textAndGlyph;
	UILabel* _label;
	UIImageView* _imageView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UILabel * label;                          //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;                  //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) NUTextAndGlyph * textAndGlyph;              //@synthesize textAndGlyph=_textAndGlyph - In the implementation block
-(UILabel *)label;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIImageView *)imageView;
-(void)nu_crossFadeViewClearVisibleState;
-(void)nu_crossFadeViewSetValue:(id)arg1 ;
-(void)setTextAndGlyph:(NUTextAndGlyph *)arg1 ;
-(NUTextAndGlyph *)textAndGlyph;
@end
