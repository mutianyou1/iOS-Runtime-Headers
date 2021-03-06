/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:28 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOLogMsgEventGenericAppError : PBCodable <NSCopying> {

	long long _appErrorCode;
	NSString* _appErrorDomain;
	struct {
		unsigned has_appErrorCode : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasAppErrorDomain; 
@property (nonatomic,retain) NSString * appErrorDomain; 
@property (assign,nonatomic) BOOL hasAppErrorCode; 
@property (assign,nonatomic) long long appErrorCode; 
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
-(NSString *)appErrorDomain;
-(void)setAppErrorDomain:(NSString *)arg1 ;
-(BOOL)hasAppErrorDomain;
-(long long)appErrorCode;
-(void)setAppErrorCode:(long long)arg1 ;
-(void)setHasAppErrorCode:(BOOL)arg1 ;
-(BOOL)hasAppErrorCode;
@end

