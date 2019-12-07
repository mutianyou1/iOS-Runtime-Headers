/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:28 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOTileRequester.h>
#import <libobjc.A.dylib/GEOSimpleTileRequesterSubclass.h>
#import <libobjc.A.dylib/GEOSimpleTileRequesterOperationDelegate.h>

@protocol OS_os_activity, OS_voucher;
@class GEOTileRequestBalancer, NSMutableArray, NSObject, GEODataSession, GEOTileKeyMap, geo_isolater, NSString;

@interface GEOSimpleTileRequester : GEOTileRequester <GEOSimpleTileRequesterSubclass, GEOSimpleTileRequesterOperationDelegate> {

	GEOTileRequestBalancer* _balancer;
	NSMutableArray* _running;
	NSMutableArray* _errors;
	NSObject*<OS_os_activity> _activity;
	NSObject*<OS_voucher> _voucher;
	GEODataSession* _dataSession;
	unsigned _qos;
	GEOOnce_s _didStart;
	GEOOnce_s _didCallDelegate;
	BOOL _cancelled;
	BOOL _subclassImplementsTileEdition;
	BOOL _hasRemainingTileKeys;
	GEOTileKeyMap* _signpostIDs;
	GEOTileKeyMap* _tileLoaderCreateTimes;
	unsigned _highestRunningOperationPriority;
	geo_isolater* _highestRunningOperationPriorityIsolation;
	BOOL _includeReasonHeader;
	BOOL _allowTLSSessionTicketUse;
	BOOL _allowTCPFastOpen;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSObject*<OS_os_activity> activity;                    //@synthesize activity=_activity - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue; 
@property (nonatomic,readonly) GEOTileRequestBalancer * balancer;                     //@synthesize balancer=_balancer - In the implementation block
@property (getter=isRunning,nonatomic,readonly) BOOL running; 
@property (nonatomic,readonly) unsigned highestRunningOperationPriority; 
-(void)dealloc;
-(void)cancel;
-(void)start;
-(NSObject*<OS_os_activity>)activity;
-(BOOL)isRunning;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)_cleanup;
-(void)_cancel;
-(id)initWithTileRequest:(id)arg1 delegateQueue:(id)arg2 delegate:(id)arg3 dataSession:(id)arg4 ;
-(id)initWithTileRequest:(id)arg1 delegateQueue:(id)arg2 delegate:(id)arg3 ;
-(unsigned)tileEditionForKey:(const GEOTileKey*)arg1 ;
-(void)_updateRunningCountAndCheckIfDone;
-(void)_updateHighestRunningPriority;
-(GEOTileRequestBalancer *)balancer;
-(void)_checkIfDone;
-(void)_notifyDelegateDone:(/*^block*/id)arg1 ;
-(void)createRequest:(id*)arg1 localizationRequest:(id*)arg2 forKey:(const GEOTileKey*)arg3 ;
-(id)editionHeader;
-(BOOL)downloadsDataToDisk;
-(BOOL)_useProxyAuthForTileKey:(const GEOTileKey*)arg1 ;
-(SCD_Struct_GE2)kindForTileKey:(const GEOTileKey*)arg1 ;
-(id)urlForTileKey:(const GEOTileKey*)arg1 ;
-(id)newRequestWithKind:(SCD_Struct_GE2)arg1 URL:(id)arg2 useProxyAuth:(BOOL)arg3 entityTag:(id)arg4 cachedData:(id)arg5 timeout:(double)arg6 requestCounterTicket:(id)arg7 ;
-(id)localizationURLForTileKey:(const GEOTileKey*)arg1 ;
-(BOOL)allowsCookies;
-(void)_cancelAllRunningOperations;
-(void)_generateEndSignpostEventIfNecessary:(GEOTileKey)arg1 ;
-(void)_cancelKey:(GEOTileKey)arg1 ;
-(id)removeOperationsForKey:(const GEOTileKey*)arg1 ;
-(void)_reprioritizeKey:(GEOTileKey)arg1 newPriority:(unsigned)arg2 ;
-(id)operationsForKey:(const GEOTileKey*)arg1 ;
-(unsigned)highestRunningOperationPriority;
-(void)_didStartOperationsForAllTileKeys;
-(id)_createOperationsForTileKey:(const GEOTileKey*)arg1 priority:(unsigned)arg2 ;
-(void)finishedLoadingTileForKey:(GEOTileKey)arg1 baseOperation:(id)arg2 ;
-(void)failedLoadingTileForKey:(GEOTileKey)arg1 baseOperation:(id)arg2 error:(id)arg3 ;
-(void)cancelKey:(const GEOTileKey*)arg1 ;
-(void)reprioritizeKey:(const GEOTileKey*)arg1 newPriority:(unsigned)arg2 ;
-(void)_addRunningOperation:(id)arg1 ;
-(BOOL)_removeRunningOperation:(id)arg1 ;
-(BOOL)_isRunningOperation:(id)arg1 ;
-(BOOL)needsLocalizationForKey:(const GEOTileKey*)arg1 ;
-(void)createAndStartOperationsForTileKeys:(id)arg1 ;
-(unsigned long long)estimatedNumberOfOperationsForTileKey:(GEOTileKey)arg1 ;
-(void)didStartOperationsForAllTileKeys;
-(BOOL)shouldParticipateInBalancerScheduling;
-(id)newXPCDataRequestForTileKey:(const GEOTileKey*)arg1 ;
-(BOOL)tileDataIsCacheableForTileKey:(const GEOTileKey*)arg1 ;
-(id)mergeBaseTileEtag:(id)arg1 withLocalizationTileEtag:(id)arg2 ;
-(id)mergeBaseTile:(id)arg1 withLocalizationTile:(id)arg2 ;
-(int)checksumMethodForIncomingTileDataWithKey:(GEOTileKey*)arg1 ;
-(BOOL)shouldAllowEmptyDataForTileKey:(const GEOTileKey*)arg1 ;
-(void)_operationFinished:(id)arg1 ;
-(void)_operationFailed:(id)arg1 error:(id)arg2 ;
-(void)operationFinished:(id)arg1 ;
-(void)operationFailed:(id)arg1 error:(id)arg2 ;
-(id)verifyDataIntegrity:(id)arg1 checksumMethod:(int)arg2 ;
@end
