/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:18 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CLSPublicEventCache;

@interface CLSPublicEventManager : NSObject {

	CLSPublicEventCache* _cache;
	double _queryRadius;

}

@property (nonatomic,readonly) CLSPublicEventCache * cache;              //@synthesize cache=_cache - In the implementation block
@property (assign,nonatomic) double queryRadius;                         //@synthesize queryRadius=_queryRadius - In the implementation block
+(id)urlForEventsForCacheInvalidation;
-(id)init;
-(CLSPublicEventCache *)cache;
-(double)queryRadius;
-(id)publicEventsByTimeLocationTupleIdentifierForTimeLocationTuples:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(void)saveEventsForCacheInvalidation:(id)arg1 ;
-(id)loadInvalidationTokensAndInvalidateCachesIfNeeded;
-(void)setQueryRadius:(double)arg1 ;
@end

