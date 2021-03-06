/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:49 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperationInfo.h>

@class NSSet, NSDictionary;

@interface CKRecordFetchAggregatorOperationInfo : CKDatabaseOperationInfo {

	BOOL _fetchAssetContents;
	BOOL _preserveOrdering;
	BOOL _forceDecryptionAttempt;
	NSSet* _desiredKeys;
	NSDictionary* _assetTransferOptionsByRecordTypeAndKey;

}

@property (assign,nonatomic) BOOL fetchAssetContents;                                            //@synthesize fetchAssetContents=_fetchAssetContents - In the implementation block
@property (assign,nonatomic) BOOL preserveOrdering;                                              //@synthesize preserveOrdering=_preserveOrdering - In the implementation block
@property (nonatomic,retain) NSSet * desiredKeys;                                                //@synthesize desiredKeys=_desiredKeys - In the implementation block
@property (nonatomic,retain) NSDictionary * assetTransferOptionsByRecordTypeAndKey;              //@synthesize assetTransferOptionsByRecordTypeAndKey=_assetTransferOptionsByRecordTypeAndKey - In the implementation block
@property (assign,nonatomic) BOOL forceDecryptionAttempt;                                        //@synthesize forceDecryptionAttempt=_forceDecryptionAttempt - In the implementation block
-(id)init;
-(void)setDesiredKeys:(NSSet *)arg1 ;
-(NSDictionary *)assetTransferOptionsByRecordTypeAndKey;
-(void)setAssetTransferOptionsByRecordTypeAndKey:(NSDictionary *)arg1 ;
-(NSSet *)desiredKeys;
-(void)setFetchAssetContents:(BOOL)arg1 ;
-(void)setPreserveOrdering:(BOOL)arg1 ;
-(BOOL)fetchAssetContents;
-(BOOL)preserveOrdering;
-(BOOL)forceDecryptionAttempt;
-(void)setForceDecryptionAttempt:(BOOL)arg1 ;
@end

