/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:25 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EFLoggable.h>
#import <libobjc.A.dylib/EMSearchableIndexQueryBuilder.h>
#import <libobjc.A.dylib/EFSignpostable.h>
#import <libobjc.A.dylib/EFCancelable.h>
#import <libobjc.A.dylib/NSProgressReporting.h>

@class NSString, NSArray, NSProgress, NSLock, EFPromise, EMSearchableIndexQueryExpression, CSSearchQuery;

@interface EMSearchableIndexQuery : NSObject <EFLoggable, EMSearchableIndexQueryBuilder, EFSignpostable, EFCancelable, NSProgressReporting> {

	NSLock* _lock;
	NSProgress* _progress;
	NSProgress* _internalProgress;
	EFPromise* _resultsPromise;
	BOOL _counting;
	BOOL _live;
	BOOL _queryDidMoveToFinishedState;
	BOOL _liveQueryDidGather;
	NSString* _bundleIdentifier;
	/*^block*/id _resultsBlock;
	/*^block*/id _completionBlock;
	/*^block*/id _failureBlock;
	/*^block*/id _gatheredBlock;
	/*^block*/id _changedItemsBlock;
	/*^block*/id _removedItemsBlock;
	/*^block*/id _countChangedBlock;
	NSArray* _fetchAttributes;
	NSArray* _protectionClasses;
	NSArray* _rankingQueries;
	long long _maxCount;
	NSString* _logIdentifier;
	EMSearchableIndexQueryExpression* _expression;
	NSString* _logPrefixString;
	NSString* _queryStatus;
	long long _count;
	CSSearchQuery* _query;

}

@property (nonatomic,copy) NSString * logPrefixString;                                     //@synthesize logPrefixString=_logPrefixString - In the implementation block
@property (nonatomic,copy) NSString * queryStatus;                                         //@synthesize queryStatus=_queryStatus - In the implementation block
@property (assign,nonatomic) BOOL queryDidMoveToFinishedState;                             //@synthesize queryDidMoveToFinishedState=_queryDidMoveToFinishedState - In the implementation block
@property (assign,nonatomic) BOOL liveQueryDidGather;                                      //@synthesize liveQueryDidGather=_liveQueryDidGather - In the implementation block
@property (assign,nonatomic) long long count;                                              //@synthesize count=_count - In the implementation block
@property (nonatomic,retain) CSSearchQuery * query;                                        //@synthesize query=_query - In the implementation block
@property (nonatomic,readonly) EMSearchableIndexQueryExpression * expression;              //@synthesize expression=_expression - In the implementation block
@property (nonatomic,readonly) BOOL isFinished; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * bundleIdentifier;                                    //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) id resultsBlock;                                                //@synthesize resultsBlock=_resultsBlock - In the implementation block
@property (nonatomic,copy) id completionBlock;                                             //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,copy) id failureBlock;                                                //@synthesize failureBlock=_failureBlock - In the implementation block
@property (nonatomic,copy) id gatheredBlock;                                               //@synthesize gatheredBlock=_gatheredBlock - In the implementation block
@property (nonatomic,copy) id changedItemsBlock;                                           //@synthesize changedItemsBlock=_changedItemsBlock - In the implementation block
@property (nonatomic,copy) id removedItemsBlock;                                           //@synthesize removedItemsBlock=_removedItemsBlock - In the implementation block
@property (nonatomic,copy) id countChangedBlock;                                           //@synthesize countChangedBlock=_countChangedBlock - In the implementation block
@property (nonatomic,copy) NSArray * fetchAttributes;                                      //@synthesize fetchAttributes=_fetchAttributes - In the implementation block
@property (nonatomic,copy) NSArray * protectionClasses;                                    //@synthesize protectionClasses=_protectionClasses - In the implementation block
@property (nonatomic,copy) NSArray * rankingQueries;                                       //@synthesize rankingQueries=_rankingQueries - In the implementation block
@property (assign,nonatomic) long long maxCount;                                           //@synthesize maxCount=_maxCount - In the implementation block
@property (assign,nonatomic) BOOL live;                                                    //@synthesize live=_live - In the implementation block
@property (assign,nonatomic) BOOL counting;                                                //@synthesize counting=_counting - In the implementation block
@property (nonatomic,copy) NSString * logIdentifier;                                       //@synthesize logIdentifier=_logIdentifier - In the implementation block
@property (readonly) unsigned long long signpostID; 
@property (readonly) NSProgress * progress; 
+(id)log;
+(id)queryStringByJoiningQueries:(id)arg1 withOperand:(long long)arg2 ;
+(id)searchWordsForPhrase:(id)arg1 languages:(id)arg2 ;
+(id)signpostLog;
+(double)intervalForSpotlightFailureSimulation;
+(id)queryWithExpression:(id)arg1 builder:(/*^block*/id)arg2 ;
+(id)_operandStringForOperand:(long long)arg1 ;
+(id)_queryStringForPhrase:(id)arg1 attributes:(id)arg2 modifiers:(unsigned long long)arg3 phraseMatchFormatString:(id)arg4 comparisonOperator:(long long)arg5 ;
+(id)_modifierStringFromModifiers:(unsigned long long)arg1 ;
+(id)_queryStringForPhrase:(id)arg1 attributes:(id)arg2 modifiers:(unsigned long long)arg3 phraseMatchFormatString:(id)arg4 ;
+(id)queryStringForPhrase:(id)arg1 attributes:(id)arg2 modifiers:(unsigned long long)arg3 languages:(id)arg4 ;
+(id)queryStringForPhrase:(id)arg1 attributes:(id)arg2 modifiers:(unsigned long long)arg3 languages:(id)arg4 phraseMatchFormatString:(id)arg5 comparisonOperator:(long long)arg6 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(long long)count;
-(CSSearchQuery *)query;
-(void)cancel;
-(void)setCount:(long long)arg1 ;
-(NSString *)bundleIdentifier;
-(void)start;
-(BOOL)isFinished;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(NSProgress *)progress;
-(void)setQuery:(CSSearchQuery *)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(unsigned long long)signpostID;
-(void)_completed;
-(void)_cancel;
-(EMSearchableIndexQueryExpression *)expression;
-(void)setMaxCount:(long long)arg1 ;
-(long long)maxCount;
-(NSString *)logIdentifier;
-(void)setProtectionClasses:(NSArray *)arg1 ;
-(void)setFetchAttributes:(NSArray *)arg1 ;
-(id)failureBlock;
-(void)setFailureBlock:(id)arg1 ;
-(NSArray *)fetchAttributes;
-(NSArray *)protectionClasses;
-(NSArray *)rankingQueries;
-(void)setRankingQueries:(NSArray *)arg1 ;
-(BOOL)live;
-(BOOL)counting;
-(void)setLive:(BOOL)arg1 ;
-(void)setCounting:(BOOL)arg1 ;
-(id)initWithExpression:(id)arg1 builder:(/*^block*/id)arg2 ;
-(void)_searchQueryDidFailWithError:(id)arg1 ;
-(id)resultsBlock;
-(void)setResultsBlock:(id)arg1 ;
-(void)_removeResultsBlock;
-(void)_removeAllLiveUpdatesBlocks;
-(NSString *)logPrefixString;
-(void)_searchQueryDidFindItems:(id)arg1 ;
-(BOOL)liveQueryDidGather;
-(void)_searchQueryDidComplete;
-(void)_searchQueryGatherDidEnd;
-(void)_searchQueryDidChangeItems:(id)arg1 ;
-(void)_searchQueryDidRemoveIdentifiers:(id)arg1 ;
-(id)gatheredBlock;
-(id)removedItemsBlock;
-(id)changedItemsBlock;
-(void)_searchQueryDidChangeCount:(long long)arg1 ;
-(id)countChangedBlock;
-(NSString *)queryStatus;
-(BOOL)_isFinishedQueryStatus:(id)arg1 ;
-(BOOL)queryDidMoveToFinishedState;
-(void)setQueryDidMoveToFinishedState:(BOOL)arg1 ;
-(void)_logSignpostForSearchQueryDidFinishWithStatus:(id)arg1 ;
-(void)setQueryStatus:(NSString *)arg1 ;
-(void)_logSignpostForSearchQueryDidReceiveFirstResultsWithItemCount:(unsigned long long)arg1 ;
-(void)setLiveQueryDidGather:(BOOL)arg1 ;
-(BOOL)_isCancellationError:(id)arg1 ;
-(void)_failedWithError:(id)arg1 ;
-(void)_logSignpostForSearchQueryStart;
-(void)setGatheredBlock:(id)arg1 ;
-(void)setChangedItemsBlock:(id)arg1 ;
-(void)setCountChangedBlock:(id)arg1 ;
-(void)setRemovedItemsBlock:(id)arg1 ;
-(void)_foundItems:(id)arg1 ;
-(void)_performClientWork:(/*^block*/id)arg1 ;
-(void)_gathered;
-(void)_changedItems:(id)arg1 ;
-(void)_removedItems:(id)arg1 ;
-(void)_changeCount:(long long)arg1 ;
-(void)setLogIdentifier:(NSString *)arg1 ;
-(void)setLogPrefixString:(NSString *)arg1 ;
@end

