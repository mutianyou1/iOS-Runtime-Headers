/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:52 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>

@interface HDWorkoutBuilderDataSourceEntity : HDHealthEntity
+(long long)protectionClass;
+(id)foreignKeys;
+(id)databaseTable;
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(BOOL)storeDataSourceWithIdentifier:(id)arg1 archivedState:(id)arg2 workoutBuilder:(id)arg3 transaction:(id)arg4 error:(id*)arg5 ;
+(BOOL)removeDataSourceWithIdentifier:(id)arg1 fromWorkoutBuilder:(id)arg2 transaction:(id)arg3 error:(id*)arg4 ;
+(BOOL)enumerateDataSourcesForWorkoutBuilder:(id)arg1 transaction:(id)arg2 error:(id*)arg3 block:(/*^block*/id)arg4 ;
@end

