/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:32 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapRequest.h>

@class GEOMapTileFinder;

@interface GEOMapBuildingFinder : GEOMapRequest {

	GEOMapTileFinder* _tileFinder;
	SCD_Struct_GE32 _centerCoordinate;
	double _radius;

}
-(void)cancel;
-(id)initWithMap:(id)arg1 centerCoordinate:(SCD_Struct_GE32)arg2 radius:(double)arg3 ;
-(void)findBuildingsWithHandler:(/*^block*/id)arg1 ;
@end

