/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:40 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WatchReplies.framework/WatchReplies
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WRReplyStoreInfo, NSString, NSArray, NPSDomainAccessor, NPSManager;

@interface WRCannedRepliesStore : NSObject {

	unsigned long long _category;
	WRReplyStoreInfo* _info;
	NSString* _cachedLanguage;
	NSArray* _cachedLocalizedReplies;
	NSArray* _cannedReplies;
	BOOL _didLocalizeDefaultReplies;
	BOOL _didMigrationCheck;
	NPSDomainAccessor* _domainAccessor;
	NPSManager* _npsManager;

}
+(id)supportedLanguages;
+(BOOL)supportsEnhancedEditing;
-(id)init;
-(void)dealloc;
-(id)initWithCategory:(unsigned long long)arg1 ;
-(id)cannedReplies;
-(id)domainAccessor;
-(id)npsManager;
-(BOOL)includeSmartReplies;
-(void)setIncludeSmartReplies:(BOOL)arg1 ;
-(void)setCannedReplies:(id)arg1 ;
-(void)invalidateCachesIfNeededForLanguage:(id)arg1 ;
-(void)loadCannedRepliesIfNeeded;
-(BOOL)usesFormalReplies;
-(id)localizedDefaultReply:(id)arg1 ;
-(id)localizedFormalDefaultReply:(id)arg1 ;
-(void)localizeDefaultRepliesIfNeeded;
-(void)saveReplies:(id)arg1 ;
-(BOOL)supportsSmartReplies;
-(id)migrateRepliesIfNeeded:(id)arg1 ;
-(id)repliesForLanguage:(id)arg1 ;
-(void)handleStoreChange;
@end

