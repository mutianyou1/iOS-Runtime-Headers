/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:50 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDSyncSession.h>

@class NSSet, HDCloudSyncSequenceRecord;

@interface HDCloudSyncSession : HDSyncSession {

	NSSet* _excludedSyncStores;
	HDCloudSyncSequenceRecord* _sequenceRecord;

}

@property (nonatomic,retain) HDCloudSyncSequenceRecord * sequenceRecord;              //@synthesize sequenceRecord=_sequenceRecord - In the implementation block
-(HDCloudSyncSequenceRecord *)sequenceRecord;
-(long long)maxEncodedBytesPerMessageForSyncEntityClass:(Class)arg1 ;
-(id)newChangeWithSyncEntityClass:(Class)arg1 ;
-(id)excludedSyncStores;
-(void)setExcludedSyncStores:(id)arg1 ;
-(void)setSequenceRecord:(HDCloudSyncSequenceRecord *)arg1 ;
@end

