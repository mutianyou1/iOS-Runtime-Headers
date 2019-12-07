/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:23 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/PLClientAuthorization.h>

@protocol OS_dispatch_queue;
@class NSString, NSSet, NSDate, BKSApplicationStateMonitor, NSObject;

@interface PLAssetsdConnectionAuthorization : NSObject <PLClientAuthorization> {

	SCD_Struct_PL32 _auditToken;
	NSSet* _photoKitEntitlements;
	int _kTCCPhotosAuthorized;
	int _kTCCPhotosAddAuthorized;
	BOOL _libraryUpgradeAuthorized;
	BOOL _directDatabaseWriteAuthorized;
	NSDate* _connectionStartDate;
	BKSApplicationStateMonitor* _applicationStateMonitor;
	NSObject*<OS_dispatch_queue> _duetUpdateQueue;
	BOOL _photoKitEntitled;
	int _clientProcessIdentifier;
	NSString* _trustedCallerBundleID;
	NSString* _trustedCallerDisplayName;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * trustedCallerBundleID;                 //@synthesize trustedCallerBundleID=_trustedCallerBundleID - In the implementation block
@property (nonatomic,readonly) NSString * trustedCallerDisplayName;              //@synthesize trustedCallerDisplayName=_trustedCallerDisplayName - In the implementation block
@property (nonatomic,readonly) int clientProcessIdentifier;                      //@synthesize clientProcessIdentifier=_clientProcessIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL photoKitEntitled;                            //@synthesize photoKitEntitled=_photoKitEntitled - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PL32 clientAuditToken; 
@property (nonatomic,readonly) BOOL directDatabaseWriteAuthorized; 
-(NSString *)description;
-(int)clientProcessIdentifier;
-(id)initWithConnection:(id)arg1 ;
-(void)handleInvalidation;
-(BOOL)isClientAuthorizedForTCCServicePhotos;
-(BOOL)isClientAuthorizedForTCCServicePhotosAdd;
-(BOOL)isPhotosClient;
-(BOOL)photoKitEntitledFor:(id)arg1 ;
-(NSString *)trustedCallerBundleID;
-(NSString *)trustedCallerDisplayName;
-(BOOL)photoKitEntitled;
-(SCD_Struct_PL32)clientAuditToken;
-(BOOL)directDatabaseWriteAuthorized;
-(BOOL)isClientAuthorizedForLibraryUpgrade;
-(void)setupFromConnection:(id)arg1 ;
-(void)_trackDKEventIfNecessary;
-(BOOL)_shouldTrackDKEventForBundle:(id)arg1 ;
-(void)_handleDuetReportIsForground:(BOOL)arg1 ;
@end
