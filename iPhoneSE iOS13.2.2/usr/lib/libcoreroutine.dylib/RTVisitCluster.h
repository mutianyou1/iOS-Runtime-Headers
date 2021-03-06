/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:42 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class RTVisitLocationPoints, RTVisit;

@interface RTVisitCluster : NSObject {

	RTVisitLocationPoints* _points;
	RTVisit* _visit;

}

@property (nonatomic,readonly) RTVisitLocationPoints * points;              //@synthesize points=_points - In the implementation block
@property (nonatomic,readonly) RTVisit * visit;                             //@synthesize visit=_visit - In the implementation block
-(id)init;
-(id)description;
-(RTVisitLocationPoints *)points;
-(RTVisit *)visit;
-(id)initWithPoints:(id)arg1 visit:(id)arg2 ;
-(id)initWithPoints:(id)arg1 ;
-(BOOL)isExitDateBeforeDate:(id)arg1 ;
-(BOOL)isDateInside:(id)arg1 ;
-(BOOL)isPartialAndExitDateIsEqualToDate:(id)arg1 ;
-(BOOL)isCompleteAndExitDateIsEqualToDate:(id)arg1 ;
@end

