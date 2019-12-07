/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:32 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSArray;

@interface GEOSpatialLookupParameters : NSObject {

	SCD_Struct_GE32 _coordinate;
	double _radius;
	NSArray* _categories;

}

@property (nonatomic,readonly) SCD_Struct_GE32 coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,readonly) double radius;                           //@synthesize radius=_radius - In the implementation block
@property (nonatomic,readonly) NSArray * categories;                    //@synthesize categories=_categories - In the implementation block
-(SCD_Struct_GE32)coordinate;
-(double)radius;
-(NSArray *)categories;
-(id)initWithCoordinate:(SCD_Struct_GE32)arg1 radius:(double)arg2 categories:(id)arg3 ;
@end
