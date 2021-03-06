/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:24 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary, NSMutableSet, PLPhotoLibrary, NSCountedSet, NSSet;

@interface PLDupeManager : NSObject {

	NSMutableArray* _normalAssetsObjectIDsToAnalyze;
	NSMutableDictionary* _cloudAssetsToAnalyze;
	NSMutableArray* _assetsWithUpdatedVisibility;
	BOOL _doneWithCloudAssets;
	BOOL _isRebuilding;
	NSMutableSet* _normalInserts;
	NSMutableSet* _cloudInserts;
	PLPhotoLibrary* _photoLibrary;
	NSCountedSet* _pauseReasons;
	NSSet* _softPauseReasons;
	double _rebuildStartTime;

}

@property (nonatomic,readonly) PLPhotoLibrary * photoLibrary;              //@synthesize photoLibrary=_photoLibrary - In the implementation block
+(BOOL)_resetDupesAnalysisInManagedObjectContext:(id)arg1 pathManager:(id)arg2 ;
+(id)hashForAsset:(id)arg1 ;
+(BOOL)_computeHashForAsset:(id)arg1 ;
+(void)_setPlaceHolderHashOnAsset:(id)arg1 ;
+(BOOL)resetDupesAnalysisForOfflineStore:(id)arg1 pathManager:(id)arg2 ;
+(id)_hashForFileAtPath:(id)arg1 utiType:(id)arg2 ;
+(id)placeholderHash;
-(void)dealloc;
-(PLPhotoLibrary *)photoLibrary;
-(id)initWithPhotoLibrary:(id)arg1 ;
-(void)resetDupesAnalysis;
-(short)_computeCloudAssetHashesForManagedObjectContext:(id)arg1 ;
-(void)_noteAssetVisibilityDidChange:(id)arg1 ;
-(void)_updateVisibilityState:(short)arg1 forAsset:(id)arg2 ;
-(BOOL)_prepareCloudAssetsToAnalyzeForManagedObjectContext:(id)arg1 ;
-(id)_duplicateCloudAssetForHash:(id)arg1 orPublicGlobalUUID:(id)arg2 ;
-(void)_removeCloudAssetFromAnalysis:(id)arg1 ;
-(void)_analyzeDupeForNormalAsset:(id)arg1 ;
-(short)_analyzeNormalAssetsForManagedObjectContext:(id)arg1 ;
-(short)_computeAssetHashesForManagedObjectContext:(id)arg1 ;
-(short)_adjustCloudAssetVisibilityStateForManagedObjectContext:(id)arg1 ;
-(void)_performAnalysisTransaction:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_continueAnalysisForRebuild;
-(void)_continueAnalysisForRebuildOrPause;
-(void)_analyzeDupesForRebuild;
-(short)_analyzeDupesForNormalInsertsForManagedObjectContext:(id)arg1 ;
-(BOOL)_analyzeDupeForCloudAssetsAndHashes:(id)arg1 andPublicGlobalUUIDs:(id)arg2 forManagedObjectContext:(id)arg3 ;
-(short)_analyzeDupesForCloudInsertsForManagedObjectContext:(id)arg1 ;
-(void)_continueAnalysis;
-(void)_analyzeDupes;
-(void)analyzeDupesWithNormalInserts:(id)arg1 cloudInserts:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)launchDupeAnalysisIfNeeded;
-(void)persistPublicGlobalUUIDsForAssets:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_resetSoftPauseReasons;
-(void)pauseAnalysisWithReason:(id)arg1 ;
-(void)resumeAnalysisWithReason:(id)arg1 ;
@end

