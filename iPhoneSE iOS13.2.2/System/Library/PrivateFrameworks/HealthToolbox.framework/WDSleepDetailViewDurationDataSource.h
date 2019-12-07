/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:24 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WDChartDetailViewDataSource.h>

@class HKSleepAnalysis, HKSleepDay, HKSleepPeriod, NSString;

@interface WDSleepDetailViewDurationDataSource : NSObject <WDChartDetailViewDataSource> {

	HKSleepAnalysis* _sleepAnalysis;
	HKSleepDay* _sleepDay;
	HKSleepPeriod* _sleepPeriod;

}

@property (nonatomic,readonly) HKSleepAnalysis * sleepAnalysis;              //@synthesize sleepAnalysis=_sleepAnalysis - In the implementation block
@property (nonatomic,readonly) HKSleepDay * sleepDay;                        //@synthesize sleepDay=_sleepDay - In the implementation block
@property (nonatomic,readonly) HKSleepPeriod * sleepPeriod;                  //@synthesize sleepPeriod=_sleepPeriod - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)numberOfRows;
-(HKSleepDay *)sleepDay;
-(id)initWithSleepAnalysis:(id)arg1 ;
-(id)mainSection;
-(long long)numberOfColumnsForRow:(long long)arg1 ;
-(id)detailSectionForRow:(long long)arg1 column:(long long)arg2 ;
-(HKSleepAnalysis *)sleepAnalysis;
-(HKSleepPeriod *)sleepPeriod;
@end
