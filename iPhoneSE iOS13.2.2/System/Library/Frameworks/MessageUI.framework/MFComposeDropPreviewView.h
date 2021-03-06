/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:33 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UIBezierPath, UIImage, UIImageView;

@interface MFComposeDropPreviewView : UIView {

	UIView* _previewView;
	UIBezierPath* _previewClippingPath;
	UIImage* _finalImage;
	UIImageView* _imageView;

}

@property (nonatomic,retain) UIImageView * imageView;                         //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIView * previewView;                            //@synthesize previewView=_previewView - In the implementation block
@property (nonatomic,retain) UIBezierPath * previewClippingPath;              //@synthesize previewClippingPath=_previewClippingPath - In the implementation block
@property (nonatomic,retain) UIImage * finalImage;                            //@synthesize finalImage=_finalImage - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
-(UIView *)previewView;
-(void)setPreviewView:(UIView *)arg1 ;
-(void)setFinalImage:(UIImage *)arg1 ;
-(void)setPreviewClippingPath:(UIBezierPath *)arg1 ;
-(UIBezierPath *)previewClippingPath;
-(UIImage *)finalImage;
@end

