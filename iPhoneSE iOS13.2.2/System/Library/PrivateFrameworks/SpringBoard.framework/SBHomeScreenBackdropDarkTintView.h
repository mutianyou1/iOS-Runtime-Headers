/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:38 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBHomeScreenBackdropViewBase.h>

@class UIView;

@interface SBHomeScreenBackdropDarkTintView : SBHomeScreenBackdropViewBase {

	UIView* _darkTintView;

}
-(BOOL)isOpaque;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBlurProgress:(double)arg1 behaviorMode:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)beginRequiringBackdropViewForReason:(id)arg1 ;
-(void)beginRequiringLiveBackdropViewForReason:(id)arg1 ;
-(void)endRequiringBackdropViewForReason:(id)arg1 ;
-(void)endRequiringLiveBackdropViewForReason:(id)arg1 ;
-(void)_updateDarkTintViewHidden;
@end

