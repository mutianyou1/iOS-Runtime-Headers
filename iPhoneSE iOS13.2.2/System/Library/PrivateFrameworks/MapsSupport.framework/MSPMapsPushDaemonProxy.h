/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:28 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MSPMapsPushDaemonProxy <MSPRemoteModelAccess>
@required
-(void)checkin;
-(void)registerForTopic;
-(void)simulateProblemResolution;
-(void)fetchProblemStatus;
-(void)shouldUseDevAPNS:(/*^block*/id)arg1;
-(void)setShouldUseDevAPNS:(BOOL)arg1;
-(void)fetchDevicePushToken:(/*^block*/id)arg1;
-(void)fetchDownloadedAnnouncements:(/*^block*/id)arg1;
-(void)fetchAnnouncementsFilePath:(/*^block*/id)arg1;
-(void)fetchAnnouncementsURLPath:(/*^block*/id)arg1;
-(void)updateAnnouncements:(/*^block*/id)arg1;
-(void)updateActiveAnnouncement;
-(void)simulateAnnouncement:(id)arg1 afterDelay:(double)arg2;
-(void)clearCurrentAnnouncement;
-(void)clearShownAnnouncements;
-(void)resetAnnouncements;
-(void)fetchCurrentAnnouncement:(/*^block*/id)arg1;
-(void)fetchShownAnnouncements:(/*^block*/id)arg1;
-(void)clearBulletinWithRecordID:(id)arg1;
-(void)problemStatusResponseWithNotificationID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)removeProblemStatusResponseWithNotificationID:(id)arg1;
-(void)showTrafficConditionsBulletinWithTitle:(id)arg1 message:(id)arg2 actionURL:(id)arg3;
-(void)clearTrafficConditionsBulletin;
-(void)showMapsSuggestionsBulletinWithTitle:(id)arg1 message:(id)arg2 actionURL:(id)arg3;
-(void)clearMapsSuggestionsBulletin;
-(void)showTrafficIncidentAlertWithID:(id)arg1 withReroute:(BOOL)arg2 title:(id)arg3 description:(id)arg4;
-(void)clearTrafficIncidentBulletinWithAlertID:(id)arg1;
-(void)clearTrafficIncidentsBulletin;
-(void)showPredictedRouteTrafficIncidentBulletinForCommuteDetails:(id)arg1;
-(void)showPredictedRouteTrafficIncidentBulletinForCommuteDetails:(id)arg1 afterDelay:(double)arg2;
-(void)clearPredictedRouteTrafficIncidentBulletin;
-(void)showLowFuelAlertBulletinForLowFuelDetails:(id)arg1;
-(void)clearLowFuelAlertBulletin;
-(void)showParkedCarBulletinForEvent:(id)arg1;
-(void)showParkedCarBulletinForEvent:(id)arg1 afterDelay:(double)arg2;
-(void)showParkedCarReplacementBulletinForEvent:(id)arg1 replacingEvent:(id)arg2;
-(void)showParkedCarReplacementBulletinForEvent:(id)arg1 replacingEvent:(id)arg2 afterDelay:(double)arg3;
-(void)clearParkedCarBulletin;
-(oneway void)updateMapsModelBackupAttributesIfNeeded;
-(void)eraseRAPData;
-(void)handleMapsApplicationRemoval:(/*^block*/id)arg1;
-(void)fetchUserRoutingPreferencesWithCompletion:(/*^block*/id)arg1;

@end

