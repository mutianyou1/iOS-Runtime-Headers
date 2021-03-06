/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:26 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDPlugin.h>
#import <libobjc.A.dylib/HDDatabaseSchemaProvider.h>
#import <libobjc.A.dylib/HDSyncEntityProvider.h>

@class NSString;

@interface HDHealthRecordsPlugin : NSObject <HDPlugin, HDDatabaseSchemaProvider, HDSyncEntityProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * pluginIdentifier; 
@property (nonatomic,copy,readonly) NSString * schemaName; 
@property (nonatomic,copy,readonly) NSString * syncSchemaIdentifier; 
-(NSString *)pluginIdentifier;
-(id)extensionForHealthDaemon:(id)arg1 ;
-(id)extensionForProfile:(id)arg1 ;
-(id)orderedSyncEntities;
-(long long)currentSchemaVersionForProtectionClass:(long long)arg1 ;
-(id)databaseEntitiesForProtectionClass:(long long)arg1 ;
-(NSString *)schemaName;
-(void)registerMigrationStepsForProtectionClass:(long long)arg1 migrator:(id)arg2 ;
-(NSString *)syncSchemaIdentifier;
-(id)_databaseSchemaForProtectionClass:(long long)arg1 ;
@end

