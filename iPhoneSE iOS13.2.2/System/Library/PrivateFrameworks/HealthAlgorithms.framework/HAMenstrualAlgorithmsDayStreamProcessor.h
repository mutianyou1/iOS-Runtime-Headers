/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:21 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthAlgorithms.framework/HealthAlgorithms
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HealthAlgorithms/HealthAlgorithms-Structs.h>
@interface HAMenstrualAlgorithmsDayStreamProcessor : NSObject {

	unique_ptr<Nightingale::ngt_DayStreamProcessor, std::__1::default_delete<Nightingale::ngt_DayStreamProcessor> >* _dayStreamProcessor;
	optional<unsigned int> _julianDayOfLastInput;

}
-(id)init;
-(id)analyze;
-(id)initWithConfig:(id)arg1 ;
-(id)analyzeWithMostRecentMenstrualFlowJulianDayUpdated:(unsigned)arg1 ;
-(void)appendDay:(id)arg1 ;
@end

