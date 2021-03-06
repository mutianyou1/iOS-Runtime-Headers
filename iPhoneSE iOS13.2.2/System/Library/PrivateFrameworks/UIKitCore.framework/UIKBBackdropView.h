/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:58 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIVisualEffectView.h>

@class UIImage;

@interface UIKBBackdropView : UIVisualEffectView {

	UIImage* _imageForCorners;

}

@property (nonatomic,retain) UIImage * imageForCorners;              //@synthesize imageForCorners=_imageForCorners - In the implementation block
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)_setRenderConfig:(id)arg1 ;
-(void)transitionToStyle:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(BOOL)_applyCornerMaskToSelf;
-(int)textEffectsVisibilityLevel;
-(UIImage *)imageForCorners;
-(void)setImageForCorners:(UIImage *)arg1 ;
-(id)_generateCornerContentsImage:(unsigned long long)arg1 ;
-(void)updateFrame:(CGRect)arg1 withCorners:(unsigned long long)arg2 ;
@end

