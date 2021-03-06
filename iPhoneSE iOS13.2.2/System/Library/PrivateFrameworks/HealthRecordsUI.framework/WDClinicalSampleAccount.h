/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:22 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, WDClinicalSampleAccountProvider, NSArray;

@interface WDClinicalSampleAccount : NSObject {

	NSDictionary* _properties;
	WDClinicalSampleAccountProvider* _provider;
	NSArray* _batches;

}

@property (nonatomic,copy) NSDictionary * properties;                                 //@synthesize properties=_properties - In the implementation block
@property (nonatomic,retain) WDClinicalSampleAccountProvider * provider;              //@synthesize provider=_provider - In the implementation block
@property (nonatomic,copy) NSArray * batches;                                         //@synthesize batches=_batches - In the implementation block
-(void)setProvider:(WDClinicalSampleAccountProvider *)arg1 ;
-(NSDictionary *)properties;
-(void)setProperties:(NSDictionary *)arg1 ;
-(NSArray *)batches;
-(void)setBatches:(NSArray *)arg1 ;
-(WDClinicalSampleAccountProvider *)provider;
@end

