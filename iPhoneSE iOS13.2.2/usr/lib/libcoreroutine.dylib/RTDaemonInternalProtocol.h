/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:42 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RTDaemonInternalProtocol <NSObject>
@required
-(void)forceRelabeling:(/*^block*/id)arg1;
-(void)fetchDataVaultPath:(/*^block*/id)arg1;
-(void)fetchPathToBackupWithReply:(/*^block*/id)arg1;
-(void)fetchAllLocationsOfInterestWithReply:(/*^block*/id)arg1;
-(void)forceSequentialClusterIdentification:(/*^block*/id)arg1;
-(void)injectLocationOfInterest:(id)arg1 reply:(/*^block*/id)arg2;
-(void)injectVisit:(id)arg1 locationOfInterest:(id)arg2 reply:(/*^block*/id)arg3;
-(void)clearAllLocationsOfInterestWithReply:(/*^block*/id)arg1;
-(void)fetchLocationsOfInterestWithVisitsWithinDistance:(id)arg1 location:(id)arg2 reply:(/*^block*/id)arg3;
-(void)fetchStoredLocationsCountFromDate:(id)arg1 toDate:(id)arg2 uncertainty:(double)arg3 limit:(unsigned long long)arg4 reply:(/*^block*/id)arg5;
-(void)fetchVisitsWithReply:(/*^block*/id)arg1;
-(void)simulateScenarioTrigger:(id)arg1 reply:(/*^block*/id)arg2;
-(void)forceUpdateAssetMetadataWithReply:(/*^block*/id)arg1;
-(void)updateAssetServerURL:(id)arg1 assetType:(id)arg2 reply:(/*^block*/id)arg3;
-(void)forceEventModelRefreshWithReply:(/*^block*/id)arg1;
-(void)injectLocations:(id)arg1 reply:(/*^block*/id)arg2;
-(void)injectSignalForSignalGeneratorOptions:(id)arg1 reply:(/*^block*/id)arg2;
-(void)updateTransitionWithIdentifier:(id)arg1 modeOfTransportation:(long long)arg2 reply:(/*^block*/id)arg3;
-(void)reconstructTransitionsWithReply:(/*^block*/id)arg1;
-(void)simulateVisit:(id)arg1 reply:(/*^block*/id)arg2;
-(void)fetchVisitsBetweenStartDate:(id)arg1 endDate:(id)arg2 reply:(/*^block*/id)arg3;
-(void)performImportMirroringRequest:(/*^block*/id)arg1;
-(void)performExportMirroringRequest:(/*^block*/id)arg1;
-(void)performZoneResetMirroringRequest:(/*^block*/id)arg1;
-(void)mirroringDelegateSetupState:(/*^block*/id)arg1;
-(void)tearDownPersistenceStack:(/*^block*/id)arg1;
-(void)submitHintAtLocation:(id)arg1 reply:(/*^block*/id)arg2;
-(void)fetchFusionCandidatesForVisitIdentifier:(id)arg1 reply:(/*^block*/id)arg2;
-(void)fetchInferredMapItemForVisitIdentifier:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryProvider:(id)arg1 options:(id)arg2 reply:(/*^block*/id)arg3;
-(void)fetchFingerprintsWithOptions:(id)arg1 reply:(/*^block*/id)arg2;
-(void)fetchWiFiAccessPointsForFingerprint:(id)arg1 reply:(/*^block*/id)arg2;
-(void)injectFingerprintWithIdentifier:(id)arg1 settledState:(unsigned long long)arg2 start:(id)arg3 reply:(/*^block*/id)arg4;
-(void)injectFingerprintWithSettledState:(BOOL)arg1 start:(id)arg2 reply:(/*^block*/id)arg3;
-(void)injectWiFiAccessPointWithMac:(id)arg1 rssi:(long long)arg2 channel:(long long)arg3 age:(double)arg4 date:(id)arg5 reply:(/*^block*/id)arg6;
-(void)fetchFMCEnabledWithReply:(/*^block*/id)arg1;
-(void)fetchMotionActivitiesFromStartDate:(id)arg1 endDate:(id)arg2 reply:(/*^block*/id)arg3;
-(void)submitMetrics:(id)arg1 metricName:(id)arg2 reply:(/*^block*/id)arg3;
-(void)logDatabasesWithReply:(/*^block*/id)arg1;

@end
