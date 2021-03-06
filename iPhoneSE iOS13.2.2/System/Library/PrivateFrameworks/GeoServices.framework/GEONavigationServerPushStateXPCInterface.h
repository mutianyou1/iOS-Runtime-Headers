/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:46 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEONavigationServerPushStateXPCInterface <NSObject>
@required
-(void)setNavigationSessionState:(unsigned long long)arg1 transportType:(int)arg2;
-(void)setRouteSummaryWithNavigationRouteSummaryData:(id)arg1;
-(void)setRouteSummaryWithTransitSummaryData:(id)arg1;
-(void)setRouteSummaryWithGuidanceStateData:(id)arg1;
-(void)setRouteSummaryWithActiveRouteDetailsData:(id)arg1;
-(void)setRouteSummaryWithStepIndexData:(id)arg1;
-(void)setRouteSummaryWithStepNameInfoData:(id)arg1;
-(void)setRouteSummaryWithRideSelectionsData:(id)arg1;
-(void)setRouteSummaryWithPositionFromSignData:(id)arg1;
-(void)setRouteSummaryWithPositionFromManeuverData:(id)arg1;
-(void)setRouteSummaryWithPositionFromDestinationData:(id)arg1;
-(void)setRouteSummaryWithTrafficIncidentAlertDetailsData:(id)arg1;
-(void)setNavigationVoiceVolumeWithData:(id)arg1;
-(void)setCurrentRoadName:(id)arg1;

@end

