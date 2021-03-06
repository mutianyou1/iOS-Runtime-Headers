/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:21 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class PLPhotoLibraryPathManager, NSDate;

@interface PLAssetsdCrashRecoverySupport : NSObject {

	PLPhotoLibraryPathManager* _pathManager;
	os_unfair_lock_s _recoveryIndicatorCheckLock;
	NSDate* _recoveryJobCreationDate;

}
-(id)initWithPathManager:(id)arg1 ;
-(void)recoverFromCrashIfNeededWithImageWriter:(id)arg1 ;
-(BOOL)isSafeToRecoverAfterCrash;
-(void)_enqeueRecoveryJob:(id)arg1 date:(id)arg2 toImageWriter:(id)arg3 ;
@end

