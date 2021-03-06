/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:48 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSMutableSet, NSSet;

@interface HDDatabaseTransactionContext : NSObject <NSCopying, NSMutableCopying> {

	long long _journalType;
	long long _cacheScope;
	unsigned long long _options;
	NSMutableSet* _accessibilityAssertions;

}

@property (nonatomic,readonly) BOOL skipJournalMerge; 
@property (nonatomic,readonly) BOOL requiresNewDatabaseConnection; 
@property (nonatomic,copy,readonly) NSSet * accessibilityAssertions; 
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (nonatomic,readonly) long long journalType;                             //@synthesize journalType=_journalType - In the implementation block
@property (nonatomic,readonly) long long cacheScope;                              //@synthesize cacheScope=_cacheScope - In the implementation block
@property (nonatomic,readonly) BOOL requiresWrite; 
@property (nonatomic,readonly) BOOL requiresProtectedData; 
@property (nonatomic,readonly) BOOL highPriority; 
+(id)contextForReadingProtectedData;
+(id)contextForWritingProtectedData;
+(id)contextForWriting;
+(id)_cachedContextForOptions:(unsigned long long)arg1 ;
+(id)contextForReading;
+(id)highPriorityContext;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(id)_initWithOptions:(unsigned long long)arg1 ;
-(BOOL)highPriority;
-(BOOL)requiresProtectedData;
-(id)copyForReadingProtectedData;
-(id)copyForWritingProtectedData;
-(long long)cacheScope;
-(BOOL)skipJournalMerge;
-(BOOL)requiresWrite;
-(id)mergedContextWithContext:(id)arg1 error:(id*)arg2 ;
-(BOOL)containsContext:(id)arg1 error:(id*)arg2 ;
-(long long)journalType;
-(BOOL)requiresNewDatabaseConnection;
-(NSSet *)accessibilityAssertions;
-(id)_initWithOptions:(unsigned long long)arg1 journalType:(long long)arg2 cacheScope:(long long)arg3 assertions:(id)arg4 ;
-(id)copyForWriting;
-(void)_applyOptions:(unsigned long long)arg1 enable:(BOOL)arg2 ;
@end

