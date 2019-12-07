/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:19 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSLock, NSArray;

@interface SUScriptAccountManager : NSObject {

	NSMutableArray* _accounts;
	NSLock* _lock;

}

@property (retain,readonly) NSArray * accounts; 
+(void)endAccountManagerSessionForObject:(id)arg1 ;
+(id)beginAccountManagerSessionForObject:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSArray *)accounts;
-(id)accountForDSID:(id)arg1 ;
-(void)_accountsChangedNotification:(id)arg1 ;
-(void)_dispatchEvent:(id)arg1 forName:(id)arg2 ;
-(void)_ntsReloadAccounts;
@end
