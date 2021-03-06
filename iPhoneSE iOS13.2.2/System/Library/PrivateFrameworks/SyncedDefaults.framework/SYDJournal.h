/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:38 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SyncedDefaults.framework/SyncedDefaults
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface SYDJournal : NSObject {

	NSMutableDictionary* _store;
	NSMutableDictionary* _journal;
	BOOL _readonly;

}
-(id)init;
-(id)description;
-(id)initWithStore:(id)arg1 ;
-(id)changesSinceChangeCount:(long long)arg1 ;
-(long long)maximumChangeCount;
-(id)initWithMutableStore:(id)arg1 ;
-(void)addChange:(int)arg1 forKey:(id)arg2 changeCount:(long long)arg3 ;
-(int)changeSinceChangeCount:(long long)arg1 forKey:(id)arg2 ;
-(BOOL)removeChangesUntilChangeCount:(long long)arg1 ;
@end

