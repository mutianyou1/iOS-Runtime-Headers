/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:43 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEOMapItemAttribution.h>

@class NSArray;

@interface GEOMapItemReviewsAttribution : GEOMapItemAttribution

@property (nonatomic,readonly) NSArray * addReviewURLs; 
-(id)initWithSearchAttributionInfo:(id)arg1 attributionURLs:(id)arg2 poiID:(id)arg3 ;
-(id)initWithSearchAttributionInfo:(id)arg1 attributionURLs:(id)arg2 yelpID:(id)arg3 ;
-(NSArray *)addReviewURLs;
-(id)urlsForReview:(id)arg1 ;
-(id)urlsForSelectedItemWithItems:(id)arg1 ;
@end

