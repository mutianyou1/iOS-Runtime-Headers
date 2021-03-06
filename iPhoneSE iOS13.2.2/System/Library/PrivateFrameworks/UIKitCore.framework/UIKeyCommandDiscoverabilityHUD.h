/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:02 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSTimer, _UIKeyCommandDiscoverabilityHUDWindow;

@interface UIKeyCommandDiscoverabilityHUD : NSObject {

	NSTimer* _HUDPopTimer;
	_UIKeyCommandDiscoverabilityHUDWindow* _window;
	BOOL _commandKeyIsDown;

}
+(id)sharedKeyCommandDiscoverabilityHUD;
+(void)clearHUDPopTimer;
+(void)dismissHUD;
-(void)dealloc;
-(void)_clearHUDPopTimer;
-(void)_dismissHUD;
-(void)_scheduleHUDPresentation;
-(void)_applicationWillResignActive;
-(void)_didTakeScreenshot;
-(void)_HUDPopTimerFired:(id)arg1 ;
-(id)_performableKeyCommandsWithResponder:(id)arg1 ;
-(void)_presentHUDWithKeyCommands:(id)arg1 ;
-(void)handlePhysicalKeyboardEvent:(id)arg1 ;
@end

