/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:05 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Stocks/StocksAnalytics.framework/StocksAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCalendar;

@interface SAAdDemographicDataService : NSObject {

	NSCalendar* _calendar;

}

@property (nonatomic,readonly) NSCalendar * calendar;              //@synthesize calendar=_calendar - In the implementation block
-(id)init;
-(NSCalendar *)calendar;
-(void)convertDemoString:(id)arg1 result:(/*^block*/id)arg2 ;
-(void)fetchDemographicData:(/*^block*/id)arg1 ;
@end
