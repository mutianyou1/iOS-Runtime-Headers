/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:40 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MarkupUI/MarkupUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIVisualEffectView, UIBlurEffect, NSTimer;

@interface MUPDFPageLabelView : UIView {

	UILabel* _label;
	UIVisualEffectView* _blurView;
	UIBlurEffect* _blurEffect;
	NSTimer* _timer;
	unsigned long long currentPageIndex;

}

@property (getter=isTimerInstalled,nonatomic,readonly) BOOL timerInstalled; 
@property (assign,nonatomic) unsigned long long currentPageIndex; 
-(void)dealloc;
-(void)setText:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)sizeToFit;
-(void)clearTimer;
-(double)_fadeOutDuration;
-(void)fadeOut;
-(BOOL)isTimerInstalled;
-(unsigned long long)currentPageIndex;
-(void)setCurrentPageIndex:(unsigned long long)arg1 ;
-(void)showNowInSuperView:(id)arg1 atOrigin:(CGPoint)arg2 withText:(id)arg3 animated:(BOOL)arg4 ;
-(double)_fadeOutDelay;
@end

