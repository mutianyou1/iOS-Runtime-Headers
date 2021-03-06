/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:23 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PLPhotoEditPersistenceManager : NSObject
+(BOOL)validateAdjustmentData:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3 error:(id*)arg4 ;
-(id)loadCompositionFrom:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3 error:(id*)arg4 ;
-(id)loadPhotoEditData:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3 importProperties:(id)arg4 error:(id*)arg5 ;
-(void)loadMasterDimensionsFromPhotoEditData:(id)arg1 outMasterWidth:(long long*)arg2 outMasterHeight:(long long*)arg3 ;
-(id)debugDescriptionForAdjustmentData:(id)arg1 ;
-(id)debugDescriptionForPhotoEditData:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3 ;
-(id)dataFromCompositionController:(id)arg1 outFormatIdentifier:(id*)arg2 outFormatVersion:(id*)arg3 exportProperties:(id)arg4 ;
@end

