/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:47 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class _MPAudioAndSubtitlesController, UINavigationController, UIViewController;

@interface MPAudioAndSubtitlesController : UIViewController {

	_MPAudioAndSubtitlesController* _viewController;
	UINavigationController* _navController;
	UIViewController* _viewControllerForOrientation;

}

@property (assign,nonatomic,__weak) UIViewController * viewControllerForOrientation;              //@synthesize viewControllerForOrientation=_viewControllerForOrientation - In the implementation block
-(void)viewDidLoad;
-(unsigned long long)supportedInterfaceOrientations;
-(id)initWithAVItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setViewControllerForOrientation:(UIViewController *)arg1 ;
-(UIViewController *)viewControllerForOrientation;
@end

