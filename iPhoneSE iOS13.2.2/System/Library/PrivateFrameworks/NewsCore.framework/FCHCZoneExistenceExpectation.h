/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:46 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCHCExpectation.h>

@class CKDatabase, CKRecordZoneID, NSString;

@interface FCHCZoneExistenceExpectation : NSObject <FCHCExpectation> {

	BOOL _shouldExist;
	CKDatabase* _database;
	CKRecordZoneID* _zoneID;

}

@property (nonatomic,retain) CKDatabase * database;                 //@synthesize database=_database - In the implementation block
@property (nonatomic,copy) CKRecordZoneID * zoneID;                 //@synthesize zoneID=_zoneID - In the implementation block
@property (assign,nonatomic) BOOL shouldExist;                      //@synthesize shouldExist=_shouldExist - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDatabase:(CKDatabase *)arg1 ;
-(CKDatabase *)database;
-(CKRecordZoneID *)zoneID;
-(void)setZoneID:(CKRecordZoneID *)arg1 ;
-(void)validate;
-(void)setShouldExist:(BOOL)arg1 ;
-(BOOL)shouldExist;
@end

