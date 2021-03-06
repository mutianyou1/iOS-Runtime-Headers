/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:48 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDDatabaseTransactionContext.h>

@interface HDMutableDatabaseTransactionContext : HDDatabaseTransactionContext

@property (assign,nonatomic) BOOL skipJournalMerge; 
@property (assign,nonatomic) BOOL requiresNewDatabaseConnection; 
@property (assign,nonatomic) long long journalType; 
@property (assign,nonatomic) long long cacheScope; 
@property (assign,nonatomic) BOOL requiresWrite; 
@property (assign,nonatomic) BOOL requiresProtectedData; 
@property (assign,nonatomic) BOOL highPriority; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHighPriority:(BOOL)arg1 ;
-(void)setRequiresProtectedData:(BOOL)arg1 ;
-(void)setCacheScope:(long long)arg1 ;
-(void)addAccessibilityAssertion:(id)arg1 ;
-(void)setRequiresWrite:(BOOL)arg1 ;
-(void)setJournalType:(long long)arg1 ;
-(void)setRequiresNewDatabaseConnection:(BOOL)arg1 ;
-(void)setSkipJournalMerge:(BOOL)arg1 ;
@end

