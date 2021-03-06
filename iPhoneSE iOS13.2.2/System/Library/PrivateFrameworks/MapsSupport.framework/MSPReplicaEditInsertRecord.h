/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:28 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/MSPReplicaEdit.h>

@protocol MSPReplicaRecord;
@interface MSPReplicaEditInsertRecord : MSPReplicaEdit {

	id<MSPReplicaRecord> _recordWithInformationToInsert;

}

@property (nonatomic,readonly) id<MSPReplicaRecord> recordWithInformationToInsert;              //@synthesize recordWithInformationToInsert=_recordWithInformationToInsert - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)_initWithIdentifierOfAffectedRecord:(id)arg1 ;
-(id<MSPReplicaRecord>)recordWithInformationToInsert;
-(id)_initWithRecordToInsert:(id)arg1 identifier:(id)arg2 ;
@end

