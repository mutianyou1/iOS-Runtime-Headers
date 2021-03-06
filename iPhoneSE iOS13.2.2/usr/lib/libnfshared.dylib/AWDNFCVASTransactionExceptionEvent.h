/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:26 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libnfshared.dylib/libnfshared.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface AWDNFCVASTransactionExceptionEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _commandType;
	unsigned _swStatus;
	NSData* _uuidReference;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasCommandType; 
@property (assign,nonatomic) unsigned commandType;                      //@synthesize commandType=_commandType - In the implementation block
@property (assign,nonatomic) BOOL hasSwStatus; 
@property (assign,nonatomic) unsigned swStatus;                         //@synthesize swStatus=_swStatus - In the implementation block
@property (nonatomic,readonly) BOOL hasUuidReference; 
@property (nonatomic,retain) NSData * uuidReference;                    //@synthesize uuidReference=_uuidReference - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned)commandType;
-(void)setCommandType:(unsigned)arg1 ;
-(void)setHasCommandType:(BOOL)arg1 ;
-(BOOL)hasCommandType;
-(void)setUuidReference:(NSData *)arg1 ;
-(BOOL)hasUuidReference;
-(NSData *)uuidReference;
-(void)setSwStatus:(unsigned)arg1 ;
-(void)setHasSwStatus:(BOOL)arg1 ;
-(BOOL)hasSwStatus;
-(unsigned)swStatus;
@end

