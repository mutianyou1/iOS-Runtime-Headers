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

@class PBUnknownFields, NSMutableArray;

@interface GEOLanguage : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _languages;
	unsigned _identifier;

}

@property (assign,nonatomic) unsigned identifier; 
@property (nonatomic,retain) NSMutableArray * languages; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)languageType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)identifier;
-(void)setIdentifier:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)languages;
-(void)setLanguages:(NSMutableArray *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)addLanguage:(id)arg1 ;
-(unsigned long long)languagesCount;
-(void)clearLanguages;
-(id)languageAtIndex:(unsigned long long)arg1 ;
@end

