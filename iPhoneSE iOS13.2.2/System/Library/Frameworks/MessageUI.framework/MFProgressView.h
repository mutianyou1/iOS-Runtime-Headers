/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol MFProgressViewDelegate;
@class CADisplayLink, UIColor, NSTimer;

@interface MFProgressView : UIView {

	double _stroke;
	double _diameter;
	CADisplayLink* _displayLink;
	double _displayedProgress;
	double _targetProgress;
	UIColor* _tintColor;
	NSTimer* _simulateActivityTimer;
	id<MFProgressViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MFProgressViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                                     //@synthesize tintColor=_tintColor - In the implementation block
+(id)progressViewWithDefaultStyleStrokeAndRect;
-(void)dealloc;
-(id<MFProgressViewDelegate>)delegate;
-(void)setDelegate:(id<MFProgressViewDelegate>)arg1 ;
-(void)setProgress:(double)arg1 ;
-(CGSize)intrinsicContentSize;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)_onDisplayLink:(id)arg1 ;
-(id)initWithProgressViewStyle:(int)arg1 stroke:(double)arg2 frame:(CGRect)arg3 ;
-(void)_invalidateDisplayLink;
-(void)_invalidateSimulationTimer;
-(void)simulateActivity;
-(void)_adjustProgress;
-(void)_drawProgressInRect:(CGRect)arg1 ;
-(BOOL)_isValidCenter:(CGPoint)arg1 radius:(double)arg2 rect:(CGRect)arg3 ;
-(void)_drawCircleWithCenter:(CGPoint)arg1 radius:(double)arg2 ;
-(void)_drawWedgeWithCenter:(CGPoint)arg1 radius:(double)arg2 ;
-(void)progressDidFinish;
-(void)_stopSimulationIfCompleted;
@end
