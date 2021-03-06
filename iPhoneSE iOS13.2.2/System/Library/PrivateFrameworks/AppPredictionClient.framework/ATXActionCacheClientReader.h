/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:31 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSIndexSet;

@interface ATXActionCacheClientReader : NSObject {

	NSData* _scoredActionsChunk;
	NSIndexSet* _lockscreenPredictionIndices;

}

@property (nonatomic,readonly) NSIndexSet * lockscreenPredictionIndices;              //@synthesize lockscreenPredictionIndices=_lockscreenPredictionIndices - In the implementation block
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithChunks:(id)arg1 ;
-(unsigned long long)chunkCount;
-(id)actionsWithConsumerSubType:(unsigned char)arg1 limit:(long long)arg2 ;
-(id)_predicateForInstalledAndNonEngagedPredictions:(id)arg1 ;
-(id)actionsWithLimit:(long long)arg1 shouldFilterRestrictedAppsAndRecentEngagements:(BOOL)arg2 ;
-(id)_getLockScreenPredictionIndices:(id)arg1 ;
-(NSIndexSet *)lockscreenPredictionIndices;
@end

