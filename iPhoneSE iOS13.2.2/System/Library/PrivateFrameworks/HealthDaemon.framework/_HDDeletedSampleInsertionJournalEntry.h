/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:51 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDJournalEntry.h>

@class NSArray, HDDataOriginProvenance;

@interface _HDDeletedSampleInsertionJournalEntry : HDJournalEntry {

	NSArray* _samples;
	HDDataOriginProvenance* _provenance;

}

@property (nonatomic,copy,readonly) NSArray * samples;                                //@synthesize samples=_samples - In the implementation block
@property (nonatomic,copy,readonly) HDDataOriginProvenance * provenance;              //@synthesize provenance=_provenance - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg1 withProfile:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)samples;
-(HDDataOriginProvenance *)provenance;
-(id)initWithCodableDeletedSamples:(id)arg1 provenance:(id)arg2 ;
@end

