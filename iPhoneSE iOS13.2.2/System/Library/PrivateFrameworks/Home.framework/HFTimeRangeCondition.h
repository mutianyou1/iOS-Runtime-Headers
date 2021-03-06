/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:31 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFTimeCondition.h>

@protocol HFPrimitiveTimeCondition;
@class HFTimeCondition;

@interface HFTimeRangeCondition : HFTimeCondition {

	HFTimeCondition*<HFPrimitiveTimeCondition> _startCondition;
	HFTimeCondition*<HFPrimitiveTimeCondition> _endCondition;

}

@property (nonatomic,readonly) HFTimeCondition*<HFPrimitiveTimeCondition> startCondition;              //@synthesize startCondition=_startCondition - In the implementation block
@property (nonatomic,readonly) HFTimeCondition*<HFPrimitiveTimeCondition> endCondition;                //@synthesize endCondition=_endCondition - In the implementation block
+(id)_primitiveTimePredicateClasses;
-(id)description;
-(id)initWithPredicate:(id)arg1 ;
-(HFTimeCondition*<HFPrimitiveTimeCondition>)startCondition;
-(HFTimeCondition*<HFPrimitiveTimeCondition>)endCondition;
-(id)initWithStartCondition:(id)arg1 endCondition:(id)arg2 ;
@end

