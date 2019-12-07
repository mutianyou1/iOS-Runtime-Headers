/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:50 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UINavigationInteractiveTransitionBase.h>

@class _UIParallaxTransitionPanGestureRecognizer, UIScreenEdgePanGestureRecognizer;

@interface _UINavigationInteractiveTransition : _UINavigationInteractiveTransitionBase {

	_UIParallaxTransitionPanGestureRecognizer* _edgePanRecognizer;

}

@property (nonatomic,readonly) UIScreenEdgePanGestureRecognizer * screenEdgePanGestureRecognizer; 
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)_gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(void)startInteractiveTransition;
-(id)initWithViewController:(id)arg1 animator:(id)arg2 ;
-(void)_setShouldReverseLayoutDirection:(BOOL)arg1 ;
-(UIScreenEdgePanGestureRecognizer *)screenEdgePanGestureRecognizer;
-(void)setNotInteractiveTransition;
-(id)gestureRecognizerView;
-(void)_configureNavigationGesture;
@end
