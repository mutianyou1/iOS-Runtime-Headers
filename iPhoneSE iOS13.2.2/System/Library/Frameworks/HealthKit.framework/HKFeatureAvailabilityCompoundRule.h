/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:45 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HKFeatureAvailabilityBaseRule.h>
#import <libobjc.A.dylib/HKFeatureAvailabilityRule.h>

@class NSString, NSMutableArray;

@interface HKFeatureAvailabilityCompoundRule : HKFeatureAvailabilityBaseRule <HKFeatureAvailabilityRule> {

	NSString* _grouping;
	NSMutableArray* _rules;

}

@property (nonatomic,retain) NSString * grouping;                   //@synthesize grouping=_grouping - In the implementation block
@property (nonatomic,retain) NSMutableArray * rules;                //@synthesize rules=_rules - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)ruleIdentifier;
-(NSMutableArray *)rules;
-(void)setRules:(NSMutableArray *)arg1 ;
-(void)setGrouping:(NSString *)arg1 ;
-(NSString *)grouping;
-(BOOL)evaluate;
-(void)processUserInfo:(id)arg1 ;
@end

