/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:42 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class RTVisit;

@interface RTVisitMonitorState : NSObject {

	RTVisit* _lastVisitIncident;
	RTVisit* _lastLowConfidenceVisitIncident;

}

@property (nonatomic,retain) RTVisit * lastVisitIncident;                           //@synthesize lastVisitIncident=_lastVisitIncident - In the implementation block
@property (nonatomic,retain) RTVisit * lastLowConfidenceVisitIncident;              //@synthesize lastLowConfidenceVisitIncident=_lastLowConfidenceVisitIncident - In the implementation block
-(id)init;
-(void)dump;
-(id)initWithLastVisit:(id)arg1 lastLowConfidenceVisit:(id)arg2 ;
-(RTVisit *)lastVisitIncident;
-(RTVisit *)lastLowConfidenceVisitIncident;
-(void)setLastVisitIncident:(RTVisit *)arg1 ;
-(void)setLastLowConfidenceVisitIncident:(RTVisit *)arg1 ;
@end
