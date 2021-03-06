/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:19 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/ControlCenter/Bundles/TimerModule.bundle/TimerModule
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@protocol MTCCTimerBackgroundViewControllerDelegate;
@class MTCCTimer, MTCCRoundButton, UIView, UILabel, CADisplayLink, NSDateComponentsFormatter;

@interface MTCCTimerBackgroundViewController : UIViewController {

	id<MTCCTimerBackgroundViewControllerDelegate> _delegate;
	MTCCTimer* _timer;
	MTCCRoundButton* _button;
	UIView* _headerView;
	UILabel* _titleLabel;
	UILabel* _timeLabel;
	CADisplayLink* _displayLink;
	NSDateComponentsFormatter* _dateComponentsFormatter;

}

@property (nonatomic,retain) MTCCRoundButton * button;                                                   //@synthesize button=_button - In the implementation block
@property (nonatomic,retain) UIView * headerView;                                                        //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * timeLabel;                                                        //@synthesize timeLabel=_timeLabel - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;                                                //@synthesize displayLink=_displayLink - In the implementation block
@property (nonatomic,retain) NSDateComponentsFormatter * dateComponentsFormatter;                        //@synthesize dateComponentsFormatter=_dateComponentsFormatter - In the implementation block
@property (assign,nonatomic,__weak) id<MTCCTimerBackgroundViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) MTCCTimer * timer;                                                            //@synthesize timer=_timer - In the implementation block
-(id)init;
-(void)dealloc;
-(id<MTCCTimerBackgroundViewControllerDelegate>)delegate;
-(void)setDelegate:(id<MTCCTimerBackgroundViewControllerDelegate>)arg1 ;
-(MTCCTimer *)timer;
-(void)setTimer:(MTCCTimer *)arg1 ;
-(MTCCRoundButton *)button;
-(UILabel *)titleLabel;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(CADisplayLink *)displayLink;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(void)setButton:(MTCCRoundButton *)arg1 ;
-(void)buttonTapped:(id)arg1 ;
-(void)setTimeLabel:(UILabel *)arg1 ;
-(UILabel *)timeLabel;
-(void)_updateLabels;
-(void)displayLinkTick:(id)arg1 ;
-(void)handleContentSizeChange:(id)arg1 ;
-(void)_reloadForCurrentState;
-(NSDateComponentsFormatter *)dateComponentsFormatter;
-(void)setDateComponentsFormatter:(NSDateComponentsFormatter *)arg1 ;
@end

