/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:58 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ATXLocationManagerRoutine.h>

@class RTRoutineManager;

@interface ATXLocationManagerRoutineCR : NSObject <ATXLocationManagerRoutine> {

	RTRoutineManager* _routineManager;

}
+(id)closestLOI:(id)arg1 toLocation:(id)arg2 ;
-(id)init;
-(void)fetchClosestLOIWithinDistance:(double)arg1 ofLocation:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)fetchLOILocationOfType:(long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)fetchLOIVisitedDuring:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)fetchNextPredictedLOIFromLocation:(id)arg1 startDate:(id)arg2 timeInterval:(double)arg3 requireHighConfidence:(BOOL)arg4 reply:(/*^block*/id)arg5 ;
-(void)fetchPredictedExitDatesFromLocation:(id)arg1 onDate:(id)arg2 requireHighConfidence:(BOOL)arg3 reply:(/*^block*/id)arg4 ;
@end

