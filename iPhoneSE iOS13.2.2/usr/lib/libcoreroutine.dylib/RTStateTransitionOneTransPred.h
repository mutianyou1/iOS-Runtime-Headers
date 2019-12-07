/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:43 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class RTStateTransitionOnePredEl, NSUUID;

@interface RTStateTransitionOneTransPred : NSObject {

	RTStateTransitionOnePredEl* _weekly;
	RTStateTransitionOnePredEl* _daily;
	NSUUID* _stateUUID;

}

@property (nonatomic,retain) RTStateTransitionOnePredEl * weekly;              //@synthesize weekly=_weekly - In the implementation block
@property (nonatomic,retain) RTStateTransitionOnePredEl * daily;               //@synthesize daily=_daily - In the implementation block
@property (nonatomic,retain) NSUUID * stateUUID;                               //@synthesize stateUUID=_stateUUID - In the implementation block
-(id)init;
-(void)setWeekly:(RTStateTransitionOnePredEl *)arg1 ;
-(void)setDaily:(RTStateTransitionOnePredEl *)arg1 ;
-(RTStateTransitionOnePredEl *)weekly;
-(RTStateTransitionOnePredEl *)daily;
-(NSUUID *)stateUUID;
-(void)setStateUUID:(NSUUID *)arg1 ;
@end
