/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:20 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AWDUsageDeltaTracker : NSObject {

	int netType;
	int rootCause;
	unsigned long long startValue;
	unsigned long long lastValue;
	unsigned long long flowCount;

}
-(void)dealloc;
-(id)initForNetworkType:(int)arg1 rootCause:(int)arg2 startValue:(unsigned long long)arg3 ;
-(void)recordUsageValue:(unsigned long long)arg1 ;
-(void)recordFlowCount:(unsigned long long)arg1 ;
@end
