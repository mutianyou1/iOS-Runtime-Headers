/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:50 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDQueryServer.h>
#import <libobjc.A.dylib/HDDataObserver.h>
#import <libobjc.A.dylib/HDDatabaseProtectedDataObserver.h>

@class NSMutableDictionary, NSMutableSet, NSString;

@interface HDDateRangeQueryServer : HDQueryServer <HDDataObserver, HDDatabaseProtectedDataObserver> {

	BOOL _resultsDirty;
	NSMutableDictionary* _timePeriodsBySampleType;
	NSMutableSet* _sampleTypesToReFetch;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)queryClass;
-(void)samplesAdded:(id)arg1 anchor:(id)arg2 ;
-(void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2 ;
-(void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2 ;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 ;
-(void)_queue_start;
-(BOOL)_shouldListenForUpdates;
-(void)_deliverErrorToClient:(id)arg1 ;
-(BOOL)_shouldObserveAllSampleTypes;
-(void)_queue_sendUpdatedResultsToClient;
-(void)_queue_samplesAdded:(id)arg1 ;
-(void)_queue_samplesOfTypesWereRemoved:(id)arg1 ;
-(id)_queue_timePeriodForType:(id)arg1 ;
-(void)_queue_updateTimePeriodsForSampleTypes:(id)arg1 ;
-(id)dateRangeClientProxy;
-(void)_queue_protectedDataBecameAvailable;
@end
