/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:15 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SSWishlist, NSArray;

@interface SKUIWishlist : NSObject {

	SSWishlist* _database;

}

@property (nonatomic,readonly) long long accountIdentifier; 
@property (nonatomic,copy,readonly) NSArray * items; 
+(id)activeWishlist;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(long long)accountIdentifier;
-(NSArray *)items;
-(void)addItem:(id)arg1 ;
-(id)initWithAccountIdentifier:(long long)arg1 ;
-(BOOL)containsItemWithIdentifier:(long long)arg1 ;
-(void)postChangeNotification;
-(void)removeItemsWithItemIdentifiers:(id)arg1 ;
@end

