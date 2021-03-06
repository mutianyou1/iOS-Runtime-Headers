/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:16 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AdCore/AdCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ADAdVector, NSString;

@interface ADOdmlResponse : PBCodable <NSCopying> {

	double _obfuscatedpTTR;
	ADAdVector* _adVector;
	NSString* _obfuscationID;
	SCD_Struct_AD3 _has;

}

@property (nonatomic,readonly) BOOL hasAdVector; 
@property (nonatomic,retain) ADAdVector * adVector;                 //@synthesize adVector=_adVector - In the implementation block
@property (assign,nonatomic) BOOL hasObfuscatedpTTR; 
@property (assign,nonatomic) double obfuscatedpTTR;                 //@synthesize obfuscatedpTTR=_obfuscatedpTTR - In the implementation block
@property (nonatomic,readonly) BOOL hasObfuscationID; 
@property (nonatomic,retain) NSString * obfuscationID;              //@synthesize obfuscationID=_obfuscationID - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setAdVector:(ADAdVector *)arg1 ;
-(void)setObfuscationID:(NSString *)arg1 ;
-(BOOL)hasAdVector;
-(void)setObfuscatedpTTR:(double)arg1 ;
-(void)setHasObfuscatedpTTR:(BOOL)arg1 ;
-(BOOL)hasObfuscatedpTTR;
-(BOOL)hasObfuscationID;
-(ADAdVector *)adVector;
-(double)obfuscatedpTTR;
-(NSString *)obfuscationID;
@end

