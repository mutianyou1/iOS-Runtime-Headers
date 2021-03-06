/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:39 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthMenstrualCyclesDaemon.framework/HealthMenstrualCyclesDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthMenstrualCyclesDaemon/HealthMenstrualCyclesDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HDMCNotification : NSObject <NSCopying> {

	long long _dayIndex;
	NSString* _category;

}

@property (nonatomic,readonly) long long dayIndex;                    //@synthesize dayIndex=_dayIndex - In the implementation block
@property (nonatomic,copy,readonly) NSString * category;              //@synthesize category=_category - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)category;
-(long long)dayIndex;
-(id)initWithDayIndex:(long long)arg1 category:(id)arg2 ;
@end

