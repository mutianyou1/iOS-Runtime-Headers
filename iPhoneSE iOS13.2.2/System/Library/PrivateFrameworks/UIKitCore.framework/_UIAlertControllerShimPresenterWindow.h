/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:42 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIApplicationRotationFollowingWindow.h>

@class UIAlertController;

@interface _UIAlertControllerShimPresenterWindow : UIApplicationRotationFollowingWindow {

	UIAlertController* _alertController;

}

@property (nonatomic,retain,readonly) UIAlertController * alertController; 
-(id)init;
-(id)initWithWindowScene:(id)arg1 ;
-(UIAlertController *)alertController;
-(void)presentAlertController:(id)arg1 animated:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)_presentationViewController;
@end
