/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:21 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewDataSourcePrefetching.h>
#import <UIKit/UICollectionViewDataSourcePrefetching.h>

@interface HealthExperienceUI.InteractiveFeedItemGeneratorManager : NSObject <UITableViewDataSourcePrefetching, UICollectionViewDataSourcePrefetching> {

	 availablePlugins;
	 storageContext;
	 healthStore;
	 favoritesProvider;
	 dataSource;
	??? dateRange;
	 eventHandler;
	 $__lazy_storage_$_identifier;
	 runningPrefetchOperations;

}
-(void)tableView:(id)arg1 prefetchRowsAtIndexPaths:(id)arg2 ;
-(void)tableView:(id)arg1 cancelPrefetchingForRowsAtIndexPaths:(id)arg2 ;
-(void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2 ;
-(void)collectionView:(id)arg1 cancelPrefetchingForItemsAtIndexPaths:(id)arg2 ;
-(id)init;
@end

