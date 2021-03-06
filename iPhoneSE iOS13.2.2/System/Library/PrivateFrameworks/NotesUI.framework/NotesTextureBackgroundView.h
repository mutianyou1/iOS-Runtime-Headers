/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:32 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesUI/NotesUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NotesTextureView;

@interface NotesTextureBackgroundView : UIView {

	double _textureHeight;
	double _scrollOffset;
	BOOL _scrollsTexture;
	NotesTextureView* _textureView;

}

@property (nonatomic,readonly) NotesTextureView * textureView;              //@synthesize textureView=_textureView - In the implementation block
@property (assign) BOOL scrollsTexture;                                     //@synthesize scrollsTexture=_scrollsTexture - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_setOverrideUserInterfaceStyle:(long long)arg1 ;
-(void)layoutSubviews;
-(void)setContentOffset:(CGPoint)arg1 ;
-(id)initWithFrame:(CGRect)arg1 scrollingTextures:(BOOL)arg2 hasAlpha:(BOOL)arg3 ;
-(NotesTextureView *)textureView;
-(void)commonInitWithScrollingTextures:(BOOL)arg1 hasAlpha:(BOOL)arg2 ;
-(double)heightByCoveringHeight:(double)arg1 withImage:(id)arg2 ;
-(BOOL)scrollsTexture;
-(void)setScrollsTexture:(BOOL)arg1 ;
@end

