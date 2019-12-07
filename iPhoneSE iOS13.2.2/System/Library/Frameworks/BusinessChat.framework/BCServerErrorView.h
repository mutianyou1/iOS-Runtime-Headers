/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:35 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class UIView, UILabel;

@interface BCServerErrorView : UIView {

	UIView* _contentView;
	UILabel* _messageLabel;

}

@property (nonatomic,retain) UIView * contentView;                //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UILabel * messageLabel;              //@synthesize messageLabel=_messageLabel - In the implementation block
-(id)init;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(void)setupConstraints;
-(void)setupSubviews;
-(UILabel *)messageLabel;
-(void)setMessageLabel:(UILabel *)arg1 ;
@end
