/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:22 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SASBulletinCacheNode;

@interface SASBulletinCache : NSObject {

	unsigned long long _count;
	SASBulletinCacheNode* _oldestNode;
	SASBulletinCacheNode* _newestNode;

}
-(id)init;
-(id)allBulletins;
-(id)cachedBulletinForID:(id)arg1 ;
-(void)insertBulletin:(id)arg1 fromFeed:(unsigned long long)arg2 ;
-(BOOL)removeBulletinForID:(id)arg1 ;
-(BOOL)_isFeedRelevant:(unsigned long long)arg1 ;
-(id)_findNodeForBulletinID:(id)arg1 ;
-(void)_deleteNode:(id)arg1 ;
-(void)_purgeOldestNodes;
@end

