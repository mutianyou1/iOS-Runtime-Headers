/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:35 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString, NSNumber;

@interface HKMCLoggedDataMetric : NSObject {

	NSDictionary* _eventPayload;
	NSString* _method;
	NSNumber* _dayIndexLoggingOffset;

}

@property (nonatomic,copy) NSDictionary * eventPayload;                     //@synthesize eventPayload=_eventPayload - In the implementation block
@property (nonatomic,readonly) NSString * method;                           //@synthesize method=_method - In the implementation block
@property (nonatomic,retain) NSNumber * dayIndexLoggingOffset;              //@synthesize dayIndexLoggingOffset=_dayIndexLoggingOffset - In the implementation block
+(id)eventName;
-(id)description;
-(NSString *)method;
-(id)initWithMethod:(id)arg1 ;
-(NSDictionary *)eventPayload;
-(void)setEventPayload:(NSDictionary *)arg1 ;
-(NSNumber *)dayIndexLoggingOffset;
-(void)setDayIndexLoggingOffset:(NSNumber *)arg1 ;
@end

