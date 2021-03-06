/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:40 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>
#import <libobjc.A.dylib/TBTile.h>

@class NSDate, NSString, NSSet;

@interface TBTileMO : NSManagedObject <TBTile>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long key; 
@property (nonatomic,copy,readonly) NSDate * created; 
@property (nonatomic,retain) NSString * etag; 
@property (nonatomic,copy) NSDate * created; 
@property (nonatomic,copy) NSString * etag; 
@property (assign,nonatomic) long long key; 
@property (nonatomic,retain) NSSet * networks; 
+(id)fetchRequest;
+(id)entityName;
+(id)generateNewTileObjectFromMOC:(id)arg1 ;
+(void)removeTilesUsingPredicate:(id)arg1 moc:(id)arg2 ;
+(void)removeAllTilesInMOC:(id)arg1 ;
@end

