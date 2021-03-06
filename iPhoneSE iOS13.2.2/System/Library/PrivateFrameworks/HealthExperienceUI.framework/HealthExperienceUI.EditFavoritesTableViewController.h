/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:22 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthExperienceUI/HealthExperienceUI.CompoundDataSourceViewController.h>
#import <libobjc.A.dylib/WDFavoriteDisplayTypesControllerObserver.h>

@interface HealthExperienceUI.EditFavoritesTableViewController : HealthExperienceUI.CompoundDataSourceViewController <WDFavoriteDisplayTypesControllerObserver> {

	 editFavoritesDataSource;
	 favoritesController;
	 $__lazy_storage_$_segmentedControl;

}
-(void)favoriteDisplayTypesControllerDidUpdate:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewDidLoad;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)doneButtonTapped;
-(void)segmentedControlChanged;
@end

