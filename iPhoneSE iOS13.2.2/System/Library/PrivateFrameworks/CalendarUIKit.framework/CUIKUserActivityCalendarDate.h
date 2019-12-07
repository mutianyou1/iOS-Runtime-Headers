/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:11 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarUIKit/CUIKUserActivity.h>

@class NSDate;

@interface CUIKUserActivityCalendarDate : CUIKUserActivity {

	NSDate* _date;
	unsigned long long _view;

}

@property (nonatomic,readonly) NSDate * date;                        //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) unsigned long long view;              //@synthesize view=_view - In the implementation block
@property (nonatomic,readonly) BOOL isTomorrow; 
-(NSDate *)date;
-(id)dictionary;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)view;
-(void)updateActivity:(id)arg1 ;
-(BOOL)isTomorrow;
-(id)initWithDate:(id)arg1 view:(unsigned long long)arg2 calendar:(id)arg3 ;
-(id)initWithDate:(id)arg1 view:(unsigned long long)arg2 ;
@end
