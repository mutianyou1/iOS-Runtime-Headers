/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class EKDayTimeView;

@interface EKDayTimeContentView : UIView {

	EKDayTimeView* _owner;
	NSRange _hourRange;

}

@property (assign,nonatomic) EKDayTimeView * owner;              //@synthesize owner=_owner - In the implementation block
@property (assign,nonatomic) NSRange hourRange;                  //@synthesize hourRange=_hourRange - In the implementation block
-(void)setOwner:(EKDayTimeView *)arg1 ;
-(EKDayTimeView *)owner;
-(void)drawRect:(CGRect)arg1 ;
-(void)setHourRange:(NSRange)arg1 ;
-(NSRange)hourRange;
@end

