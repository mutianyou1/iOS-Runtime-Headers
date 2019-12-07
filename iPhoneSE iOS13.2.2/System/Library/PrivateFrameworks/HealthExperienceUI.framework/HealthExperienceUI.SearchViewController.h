/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:21 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthExperienceUI/HealthExperienceUI.CompoundDataSourceCollectionViewController.h>
#import <UIKit/UISearchResultsUpdating.h>

@interface HealthExperienceUI.SearchViewController : HealthExperienceUI.CompoundDataSourceCollectionViewController <UISearchResultsUpdating> {

	 $__lazy_storage_$_mainStore;
	 layoutManager;
	 $__lazy_storage_$_dataSources;
	 $__lazy_storage_$_spotlightSearch;
	 $__lazy_storage_$_searchHandler;
	 $__lazy_storage_$_searchResultsCompletionHandler;
	 $__lazy_storage_$_searchController;
	 searchState;

}
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(void)restoreUserActivityState:(id)arg1 ;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)initWithCollectionViewLayout:(id)arg1 ;
-(void)viewDidLoad;
@end
