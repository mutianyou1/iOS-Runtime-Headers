/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:40 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WebApp.framework/WebApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class UIImage, UIImageView, UIView;

@interface LoadingViewController : UIViewController {

	BOOL _imageIsFullScreen;
	UIImage* _image;
	UIImageView* _imageView;
	long long _orientation;
	UIView* _statusBarView;
	long long _preferredStatusBarStyle;

}
-(void)loadView;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(long long)preferredStatusBarStyle;
-(id)initWithWebClip:(id)arg1 orientation:(long long)arg2 ;
@end

