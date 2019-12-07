/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:25 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Health/Plugins/ActivitySharingPlugin.bundle/ActivitySharingPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDJournalEntry.h>

@class ASCodableDatabaseCompetition;

@interface ASDatabaseCompetitionJournalEntry : HDJournalEntry {

	ASCodableDatabaseCompetition* _databaseCompetition;

}

@property (nonatomic,readonly) ASCodableDatabaseCompetition * databaseCompetition;              //@synthesize databaseCompetition=_databaseCompetition - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg1 withProfile:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDatabaseCompetition:(id)arg1 ;
-(ASCodableDatabaseCompetition *)databaseCompetition;
@end
