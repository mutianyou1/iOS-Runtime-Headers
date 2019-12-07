/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:13 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIButton;

@interface OBSplashButton : NSObject {

	UIButton* _button;
	long long _style;
	/*^block*/id _action;

}

@property (retain) UIButton * button;              //@synthesize button=_button - In the implementation block
@property (assign) long long style;                //@synthesize style=_style - In the implementation block
@property (copy) id action;                        //@synthesize action=_action - In the implementation block
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(id)action;
-(UIButton *)button;
-(void)setAction:(id)arg1 ;
-(void)setButton:(UIButton *)arg1 ;
@end
