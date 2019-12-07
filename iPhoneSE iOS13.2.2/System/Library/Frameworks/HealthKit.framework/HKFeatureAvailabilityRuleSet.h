/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:47 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface HKFeatureAvailabilityRuleSet : NSObject {

	NSMutableDictionary* _conditions;

}

@property (nonatomic,retain) NSMutableDictionary * conditions;              //@synthesize conditions=_conditions - In the implementation block
-(NSMutableDictionary *)conditions;
-(void)setConditions:(NSMutableDictionary *)arg1 ;
-(id)initWithRawValue:(id)arg1 dataSource:(id)arg2 ;
-(id)evaluateAll;
-(void)_parseRulesFromRawValue:(id)arg1 dataSource:(id)arg2 ;
@end
