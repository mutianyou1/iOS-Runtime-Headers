/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:57 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <AppPredictionClient/ATXActionCacheClientReader.h>

@class NSString;

@interface ATXActionCacheReader : ATXActionCacheClientReader {

	unordered_map<ATXAction *, int, ATXActionHash, ATXActionEqual, std::__1::allocator<std::__1::pair<ATXAction *const, int> > >* _actionToIndexMap;
	vector<ATXPredictionItem, std::__1::allocator<ATXPredictionItem> >* _predictionItems;
	vector<ATXPredictionItem, std::__1::allocator<ATXPredictionItem> >* _extraPredictionItems;
	NSString* _abGroup;
	long long _assetVersion;

}

@property (nonatomic,readonly) NSString * abGroup;                  //@synthesize abGroup=_abGroup - In the implementation block
@property (nonatomic,readonly) long long assetVersion;              //@synthesize assetVersion=_assetVersion - In the implementation block
+(void)_getExtraPredictionsFromChunk:(id)arg1 map:(vector<ATXPredictionItem, std::__1::allocator<ATXPredictionItem> >*)arg2 abGroup:(id*)arg3 assetVersion:(long long*)arg4 ;
+(void)_getIndexToPredictionItemMapWithChunk:(id)arg1 withPredictionCount:(long long)arg2 map:(vector<ATXPredictionItem, std::__1::allocator<ATXPredictionItem> >*)arg3 abGroup:(id*)arg4 assetVersion:(long long*)arg5 ;
+(unordered_map<NSString *, ATXPredictionItem, ATXNSStringHash, ATXNSStringEqual, std::__1::allocator<std::__1::pair<NSString *const, ATXPredictionItem> > >*)getActionKeyToPredictionItemMapFromChunk:(id)arg1 ;
+(void)_getActionKeyToPredictionItemMapFromChunk:(id)arg1 map:(unordered_map<NSString *, ATXPredictionItem, ATXNSStringHash, ATXNSStringEqual, std::__1::allocator<std::__1::pair<NSString *const, ATXPredictionItem> > >*)arg2 abGroup:(id*)arg3 assetVersion:(long long*)arg4 ;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(long long)assetVersion;
-(id)initWithChunks:(id)arg1 ;
-(NSString *)abGroup;
-(ATXPredictionItem)predictionItemForAction:(id)arg1 ;
-(void)enumerateExtraPredictionItemsWithBlock:(/*^block*/id)arg1 ;
-(unordered_map<ATXAction *, int, ATXActionHash, ATXActionEqual, std::__1::allocator<std::__1::pair<ATXAction *const, int> > >*)_getActionToIndexMap;
@end

