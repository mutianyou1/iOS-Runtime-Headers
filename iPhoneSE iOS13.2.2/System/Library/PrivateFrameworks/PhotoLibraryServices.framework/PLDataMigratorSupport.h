/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:24 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class PLPhotoLibraryPathManager;

@interface PLDataMigratorSupport : NSObject {

	os_unfair_lock_s _lock;
	PLPhotoLibraryPathManager* _pathManager;

}

@property (nonatomic,readonly) PLPhotoLibraryPathManager * pathManager;              //@synthesize pathManager=_pathManager - In the implementation block
-(id)initWithPathManager:(id)arg1 ;
-(PLPhotoLibraryPathManager *)pathManager;
-(void)writeModelMigratorPostProcessingToken;
-(void)setCapturedOTARestoreStatus;
-(BOOL)hasCapturedOTARestoreStatus;
-(void)recordDataMigrationInfo:(id)arg1 ;
-(void)_removeModelInterestDatabase;
-(void)_removeInternalMemoriesRelatedSnapshotDirectory;
-(void)_removeAsidePhotosDatabase;
-(void)_removeLegacyMetadataFiles;
@end

