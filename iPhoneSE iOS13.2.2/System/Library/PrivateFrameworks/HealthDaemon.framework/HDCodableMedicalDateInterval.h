/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:49 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HDCodableMedicalDate;

@interface HDCodableMedicalDateInterval : PBCodable <NSCopying> {

	HDCodableMedicalDate* _endDate;
	HDCodableMedicalDate* _startDate;

}

@property (nonatomic,readonly) BOOL hasStartDate; 
@property (nonatomic,retain) HDCodableMedicalDate * startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) BOOL hasEndDate; 
@property (nonatomic,retain) HDCodableMedicalDate * endDate;                //@synthesize endDate=_endDate - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HDCodableMedicalDate *)startDate;
-(HDCodableMedicalDate *)endDate;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)setStartDate:(HDCodableMedicalDate *)arg1 ;
-(void)setEndDate:(HDCodableMedicalDate *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasStartDate;
-(BOOL)hasEndDate;
@end

