/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:53 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FCCKDatabaseMigrator <NSObject>
@required
-(BOOL)databaseMigrationShouldMigrateEntireZone:(id)arg1 database:(id)arg2;
-(id)databaseMigrationRecordNamesToMigrateInZone:(id)arg1 database:(id)arg2;
-(BOOL)databaseMigrationShouldDropRecord:(id)arg1 database:(id)arg2;
-(id)databaseMigrationMigrateRecord:(id)arg1 database:(id)arg2 error:(id*)arg3;
-(id)databaseMigrationZoneNamesForDatabase:(id)arg1;
-(void)databaseMigrationDidFinishForDatabase:(id)arg1 result:(long long)arg2;

@end

