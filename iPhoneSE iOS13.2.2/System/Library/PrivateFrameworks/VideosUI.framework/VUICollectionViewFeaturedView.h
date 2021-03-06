/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:37 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class _TVImageView, UIView;

@interface VUICollectionViewFeaturedView : UIView {

	_TVImageView* _imageView;
	UIView* _overlayView;

}

@property (nonatomic,retain) _TVImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIView * overlayView;                  //@synthesize overlayView=_overlayView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(_TVImageView *)imageView;
-(void)setOverlayView:(UIView *)arg1 ;
-(void)setImageView:(_TVImageView *)arg1 ;
-(UIView *)overlayView;
@end

