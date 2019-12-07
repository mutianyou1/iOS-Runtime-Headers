/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:12 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerCore.framework/DocumentManagerCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DocumentManagerCore/DOCItemCollectionObserver.h>

@class NSArray;

@interface DOCFavoritesManager : DOCItemCollectionObserver

@property (readonly) NSArray * favoritedLocations; 
+(id)sharedManager;
-(void)addFavorite:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeFavorite:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)insertFavorite:(id)arg1 atIndex:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(NSArray *)favoritedLocations;
-(void)favoriteItems:(id)arg1 ranks:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)moveFavorite:(id)arg1 toTargetIndex:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)redistributeRanksCompletion:(/*^block*/id)arg1 ;
-(void)insertFavorites:(id)arg1 atIndex:(long long)arg2 ;
-(void)runInMainThread:(/*^block*/id)arg1 ;
@end
