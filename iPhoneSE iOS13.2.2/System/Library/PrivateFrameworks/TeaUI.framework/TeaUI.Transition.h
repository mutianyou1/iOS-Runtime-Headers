/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:16 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewControllerTransitioningDelegate.h>

@interface TeaUI.Transition : NSObject <UIViewControllerTransitioningDelegate> {

	 interactiveTransition;
	 presentationTransitionFactory;
	 dismissalTransitionFactory;
	 presentationControllerFactory;

}
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)interactionControllerForDismissal:(id)arg1 ;
-(id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 ;
-(id)init;
@end

