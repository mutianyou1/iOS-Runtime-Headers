/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:40 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPDSearchClientBehavior : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	BOOL _shouldEnableRedoSearch;
	SCD_Struct_GE99 _flags;

}

@property (assign,nonatomic) BOOL hasShouldEnableRedoSearch; 
@property (assign,nonatomic) BOOL shouldEnableRedoSearch; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)shouldEnableRedoSearch;
-(BOOL)hasShouldEnableRedoSearch;
-(void)setShouldEnableRedoSearch:(BOOL)arg1 ;
-(void)setHasShouldEnableRedoSearch:(BOOL)arg1 ;
@end

