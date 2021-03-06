/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:39 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPDSupportsOfflineMaps : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	int _offlinePlacecardSuggestion;
	BOOL _supportsOfflineMaps;
	SCD_Struct_GE33 _flags;

}

@property (assign,nonatomic) BOOL hasSupportsOfflineMaps; 
@property (assign,nonatomic) BOOL supportsOfflineMaps; 
@property (assign,nonatomic) BOOL hasOfflinePlacecardSuggestion; 
@property (assign,nonatomic) int offlinePlacecardSuggestion; 
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
-(BOOL)supportsOfflineMaps;
-(void)setSupportsOfflineMaps:(BOOL)arg1 ;
-(void)setHasSupportsOfflineMaps:(BOOL)arg1 ;
-(BOOL)hasSupportsOfflineMaps;
-(int)offlinePlacecardSuggestion;
-(void)setOfflinePlacecardSuggestion:(int)arg1 ;
-(void)setHasOfflinePlacecardSuggestion:(BOOL)arg1 ;
-(BOOL)hasOfflinePlacecardSuggestion;
-(id)offlinePlacecardSuggestionAsString:(int)arg1 ;
-(int)StringAsOfflinePlacecardSuggestion:(id)arg1 ;
@end

