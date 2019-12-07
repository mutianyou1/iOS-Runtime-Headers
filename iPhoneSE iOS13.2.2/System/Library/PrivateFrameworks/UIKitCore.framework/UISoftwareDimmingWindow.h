/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:55 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIWindow.h>

@interface UISoftwareDimmingWindow : UIWindow {

	float _overlayLevel;

}

@property (assign,nonatomic) float overlayLevel;              //@synthesize overlayLevel=_overlayLevel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)_ignoresHitTest;
-(void)updateOverlayColor;
-(void)setOverlayLevel:(float)arg1 ;
-(float)overlayLevel;
@end
