/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:53 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /usr/lib/libPPMDataModel.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libPPMDataModel.dylib/libPPMDataModel.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface OTAResistanceData : PBCodable <NSCopying> {

	SCD_Struct_OT1* _resistance25Cs;
	SCD_Struct_OT1* _temperatureCoeffs;

}

@property (nonatomic,readonly) unsigned long long resistance25CsCount; 
@property (nonatomic,readonly) float* resistance25Cs; 
@property (nonatomic,readonly) unsigned long long temperatureCoeffsCount; 
@property (nonatomic,readonly) float* temperatureCoeffs; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned long long)resistance25CsCount;
-(void)clearResistance25Cs;
-(float)resistance25CAtIndex:(unsigned long long)arg1 ;
-(void)addResistance25C:(float)arg1 ;
-(unsigned long long)temperatureCoeffsCount;
-(void)clearTemperatureCoeffs;
-(float)temperatureCoeffAtIndex:(unsigned long long)arg1 ;
-(void)addTemperatureCoeff:(float)arg1 ;
-(float*)resistance25Cs;
-(void)setResistance25Cs:(float*)arg1 count:(unsigned long long)arg2 ;
-(float*)temperatureCoeffs;
-(void)setTemperatureCoeffs:(float*)arg1 count:(unsigned long long)arg2 ;
@end
