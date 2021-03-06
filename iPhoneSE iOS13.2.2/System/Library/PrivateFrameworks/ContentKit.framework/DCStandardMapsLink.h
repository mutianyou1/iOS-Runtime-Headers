/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:19 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/DCMapsLink.h>

@class NSURL, NSDictionary;

@interface DCStandardMapsLink : DCMapsLink {

	NSURL* _URL;
	NSDictionary* _queryDictionary;

}

@property (nonatomic,retain) NSURL * URL;                               //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSDictionary * queryDictionary;              //@synthesize queryDictionary=_queryDictionary - In the implementation block
+(BOOL)isMapsURL:(id)arg1 ;
+(id)mapsLinkWithURL:(id)arg1 ;
+(BOOL)isStandardAppleMapsURL:(id)arg1 ;
+(BOOL)isStandardGoogleMapsURL:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(id)destinationAddress;
-(unsigned long long)mapType;
-(id)searchLocation;
-(id)searchQuery;
-(long long)zoomLevel;
-(BOOL)showsTraffic;
-(id)startAddress;
-(NSDictionary *)queryDictionary;
-(void)setQueryDictionary:(NSDictionary *)arg1 ;
-(unsigned long long)directionsMode;
-(id)searchNearQuery;
-(id)centerLocation;
-(BOOL)showsTransit;
-(BOOL)showsStreetView;
-(BOOL)showsBicycling;
-(id)streetViewLocation;
@end

