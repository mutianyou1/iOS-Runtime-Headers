/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:37 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEORouteDetails;

@interface GEOLogMsgStateRoute : PBCodable <NSCopying> {

	GEORouteDetails* _routeDetails;

}

@property (nonatomic,readonly) BOOL hasRouteDetails; 
@property (nonatomic,retain) GEORouteDetails * routeDetails; 
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
-(GEORouteDetails *)routeDetails;
-(void)setRouteDetails:(GEORouteDetails *)arg1 ;
-(BOOL)hasRouteDetails;
@end

