/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:36 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUILibraryStackViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <libobjc.A.dylib/VUILibraryShelfCollectionViewControllerDelegate.h>
#import <libobjc.A.dylib/VUIMediaItemEntityTypesFetchControllerDelegate.h>
#import <libobjc.A.dylib/VUIMediaEntitiesFetchControllerDelegate.h>
#import <libobjc.A.dylib/VUIMediaLibraryFetchControllerQueueDelegate.h>
#import <libobjc.A.dylib/VUILibraryPopoverDataSource.h>
#import <libobjc.A.dylib/VUILibraryPopoverDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/VUIDownloadDataSourceDelegate.h>

@class VUIDownloadViewController, UIBarButtonItem, NSArray, VUILibraryMenuItemViewCell, VUILibraryPopoverViewController, VUILibraryListPopoverViewCell, VUIMediaLibrary, VUILibraryBannerCollectionViewCell, VUILibraryMediaEntityShelvesViewModel, NSDictionary, _VUILibrarySeeAllController, VUIMediaEntitiesFetchController, VUIDownloadDataSource, NSString;

@interface VUILibraryViewController : VUILibraryStackViewController <UICollectionViewDataSource, VUILibraryShelfCollectionViewControllerDelegate, VUIMediaItemEntityTypesFetchControllerDelegate, VUIMediaEntitiesFetchControllerDelegate, VUIMediaLibraryFetchControllerQueueDelegate, VUILibraryPopoverDataSource, VUILibraryPopoverDelegate, UIGestureRecognizerDelegate, VUIDownloadDataSourceDelegate> {

	VUIDownloadViewController* _presentedDownloadViewController;
	BOOL _ppt_isLoaded;
	BOOL _appliedNavigationItem;
	BOOL _hasMenuItemFetchCompleted;
	BOOL _areLocalMediaItemsAvailable;
	BOOL _hasMediaEntitiesFetchCompleted;
	BOOL _hasDownloadFetchCompleted;
	BOOL _doesDeviceSupportHDR;
	BOOL _isIpad;
	UIBarButtonItem* _libraryBarButton;
	NSArray* _menuMediaItemEntityTypes;
	NSArray* _menuCells;
	VUILibraryMenuItemViewCell* _menuItemSizingCell;
	VUILibraryPopoverViewController* _popoverViewController;
	NSArray* _popoverDropdownCells;
	VUILibraryListPopoverViewCell* _sizingPopoverCell;
	long long _currentlySelectedPopoverCell;
	NSArray* _homeShares;
	VUIMediaLibrary* _currentHomeShareMediaLibrary;
	VUILibraryBannerCollectionViewCell* _bannerViewSizingCell;
	VUILibraryMediaEntityShelvesViewModel* _shelvesViewModel;
	NSDictionary* _shelfTypeByFetchRequestIdentifier;
	_VUILibrarySeeAllController* _currentSeeAllController;
	VUIMediaEntitiesFetchController* _rentalsUpdateFetchController;
	VUIDownloadDataSource* _downloadDataSource;

}

@property (assign,nonatomic) BOOL appliedNavigationItem;                                                  //@synthesize appliedNavigationItem=_appliedNavigationItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * libraryBarButton;                                          //@synthesize libraryBarButton=_libraryBarButton - In the implementation block
@property (assign,nonatomic) BOOL hasMenuItemFetchCompleted;                                              //@synthesize hasMenuItemFetchCompleted=_hasMenuItemFetchCompleted - In the implementation block
@property (assign,nonatomic) BOOL areLocalMediaItemsAvailable;                                            //@synthesize areLocalMediaItemsAvailable=_areLocalMediaItemsAvailable - In the implementation block
@property (nonatomic,retain) NSArray * menuMediaItemEntityTypes;                                          //@synthesize menuMediaItemEntityTypes=_menuMediaItemEntityTypes - In the implementation block
@property (nonatomic,retain) NSArray * menuCells;                                                         //@synthesize menuCells=_menuCells - In the implementation block
@property (nonatomic,retain) VUILibraryMenuItemViewCell * menuItemSizingCell;                             //@synthesize menuItemSizingCell=_menuItemSizingCell - In the implementation block
@property (nonatomic,retain) VUILibraryPopoverViewController * popoverViewController;                     //@synthesize popoverViewController=_popoverViewController - In the implementation block
@property (nonatomic,retain) NSArray * popoverDropdownCells;                                              //@synthesize popoverDropdownCells=_popoverDropdownCells - In the implementation block
@property (nonatomic,retain) VUILibraryListPopoverViewCell * sizingPopoverCell;                           //@synthesize sizingPopoverCell=_sizingPopoverCell - In the implementation block
@property (assign,nonatomic) long long currentlySelectedPopoverCell;                                      //@synthesize currentlySelectedPopoverCell=_currentlySelectedPopoverCell - In the implementation block
@property (nonatomic,retain) NSArray * homeShares;                                                        //@synthesize homeShares=_homeShares - In the implementation block
@property (nonatomic,retain) VUIMediaLibrary * currentHomeShareMediaLibrary;                              //@synthesize currentHomeShareMediaLibrary=_currentHomeShareMediaLibrary - In the implementation block
@property (nonatomic,retain) VUILibraryBannerCollectionViewCell * bannerViewSizingCell;                   //@synthesize bannerViewSizingCell=_bannerViewSizingCell - In the implementation block
@property (nonatomic,retain) VUILibraryMediaEntityShelvesViewModel * shelvesViewModel;                    //@synthesize shelvesViewModel=_shelvesViewModel - In the implementation block
@property (assign,nonatomic) BOOL hasMediaEntitiesFetchCompleted;                                         //@synthesize hasMediaEntitiesFetchCompleted=_hasMediaEntitiesFetchCompleted - In the implementation block
@property (nonatomic,retain) NSDictionary * shelfTypeByFetchRequestIdentifier;                            //@synthesize shelfTypeByFetchRequestIdentifier=_shelfTypeByFetchRequestIdentifier - In the implementation block
@property (nonatomic,retain) _VUILibrarySeeAllController * currentSeeAllController;                       //@synthesize currentSeeAllController=_currentSeeAllController - In the implementation block
@property (nonatomic,retain) VUIMediaEntitiesFetchController * rentalsUpdateFetchController;              //@synthesize rentalsUpdateFetchController=_rentalsUpdateFetchController - In the implementation block
@property (nonatomic,retain) VUIDownloadDataSource * downloadDataSource;                                  //@synthesize downloadDataSource=_downloadDataSource - In the implementation block
@property (assign,nonatomic) BOOL hasDownloadFetchCompleted;                                              //@synthesize hasDownloadFetchCompleted=_hasDownloadFetchCompleted - In the implementation block
@property (assign,nonatomic) BOOL doesDeviceSupportHDR;                                                   //@synthesize doesDeviceSupportHDR=_doesDeviceSupportHDR - In the implementation block
@property (assign,nonatomic) BOOL isIpad;                                                                 //@synthesize isIpad=_isIpad - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_localizedTitleForShelfType:(long long)arg1 ;
+(/*^block*/id)shelfTypesSortComparator;
-(void)dealloc;
-(void)start;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)_networkReachabilityDidChange:(id)arg1 ;
-(void)downloadManager:(id)arg1 downloadsDidChange:(id)arg2 ;
-(BOOL)isIpad;
-(void)_accountsChanged:(id)arg1 ;
-(void)_updateNavigationTitle;
-(void)_reparentNavigationItem:(id)arg1 ;
-(BOOL)appliedNavigationItem;
-(void)setAppliedNavigationItem:(BOOL)arg1 ;
-(void)configureWithCollectionView:(id)arg1 ;
-(id)initWithMediaLibrary:(id)arg1 ;
-(void)controller:(id)arg1 fetchRequests:(id)arg2 didCompleteWithResult:(id)arg3 ;
-(void)controller:(id)arg1 fetchRequests:(id)arg2 didFailWithError:(id)arg3 ;
-(id)_deviceMediaLibrary;
-(void)setHasMediaEntitiesFetchCompleted:(BOOL)arg1 ;
-(void)setHomeShares:(NSArray *)arg1 ;
-(void)_addMediaLibraryNotificationObservers;
-(void)setDownloadDataSource:(VUIDownloadDataSource *)arg1 ;
-(VUIDownloadDataSource *)downloadDataSource;
-(void)_removeMediaLibraryNotificationObservers;
-(BOOL)hasMediaEntitiesFetchCompleted;
-(void)_addNotificationObserversWithDeviceLibrary:(id)arg1 ;
-(void)_homeShareMediaLibrariesDidChange:(id)arg1 ;
-(void)_removeNotificationObserversWithDeviceLibrary:(id)arg1 ;
-(NSArray *)homeShares;
-(void)downloadManager:(id)arg1 downloadedFetchDidFinishWithEntities:(id)arg2 ;
-(VUIMediaEntitiesFetchController *)rentalsUpdateFetchController;
-(void)setRentalsUpdateFetchController:(VUIMediaEntitiesFetchController *)arg1 ;
-(BOOL)vui_ppt_isLoading;
-(long long)popoverView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(long long)numberOfSectionsInPopoverView:(id)arg1 ;
-(id)popoverView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(CGSize)popoverView:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(void)popoverView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)controller:(id)arg1 fetchDidCompleteWithResult:(id)arg2 ;
-(void)controller:(id)arg1 fetchDidFailWithError:(id)arg2 ;
-(void)fetchDidCompleteForMediaLibraryFetchControllerQueue:(id)arg1 ;
-(BOOL)areLocalMediaItemsAvailable;
-(void)shelfCollectionViewController:(id)arg1 collectionView:(id)arg2 didSelectMediaEntity:(id)arg3 atIndexPath:(id)arg4 ;
-(void)seeAllButtonPressed:(id)arg1 ;
-(VUILibraryMenuItemViewCell *)menuItemSizingCell;
-(void)setMenuItemSizingCell:(VUILibraryMenuItemViewCell *)arg1 ;
-(void)setAreLocalMediaItemsAvailable:(BOOL)arg1 ;
-(void)_deviceMediaLibraryUpdateStateDidChange:(id)arg1 ;
-(BOOL)_isDeviceMediaLibraryInitialUpdateInProgress;
-(void)_stopMonitoringDeviceMediaLibraryInitialUpdate;
-(void)_startMonitoringDeviceMediaLibraryInitialUpdate;
-(void)_removeRentalsUpdateNotificationObserver;
-(void)_addRentalsUpdateNotificationObserver;
-(void)_updateRentals;
-(VUIMediaLibrary *)currentHomeShareMediaLibrary;
-(void)setCurrentHomeShareMediaLibrary:(VUIMediaLibrary *)arg1 ;
-(void)setLibraryBarButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)libraryBarButton;
-(_VUILibrarySeeAllController *)currentSeeAllController;
-(void)setCurrentSeeAllController:(_VUILibrarySeeAllController *)arg1 ;
-(void)_showHomeVideosIfNoRecentlyAddedContent;
-(void)_updateViewIfFetchComplete;
-(VUILibraryMediaEntityShelvesViewModel *)shelvesViewModel;
-(void)_startFetchControllers;
-(id)_localizedTitleForCellType:(long long)arg1 ;
-(void)_selectLibraryCellType:(long long)arg1 fromPopover:(BOOL)arg2 ;
-(id)_menuItemsAndPopoverMenuItems:(id*)arg1 ;
-(void)_reloadPopoverViewController;
-(void)_showContentOrNoContentView;
-(void)_configureShelfViewController:(id)arg1 withShelfType:(long long)arg2 ;
-(id)_popoverTitleForIndexPath:(id)arg1 ;
-(void)setHasDownloadFetchCompleted:(BOOL)arg1 ;
-(id)_fetchRequestsWithMediaLibrary:(id)arg1 shelfTypeMap:(id*)arg2 ;
-(void)setShelfTypeByFetchRequestIdentifier:(NSDictionary *)arg1 ;
-(BOOL)_haveAllInitialFetchesCompleted;
-(void)_constructLibraryDataSourceAndUpdateActiveView;
-(BOOL)_shouldShowContentView;
-(BOOL)_shouldAutomaticallySelectHomeVideos;
-(id)_leftNavigationButtonWithTitle:(id)arg1 ;
-(void)_libraryPopoverPressed;
-(id)_viewControllerWithCellType:(long long)arg1 forPopover:(BOOL)arg2 ;
-(void)_updatePopoverStateWithCellType:(long long)arg1 ;
-(void)_updatePopoverSelectedItem;
-(VUILibraryPopoverViewController *)popoverViewController;
-(void)setHasMenuItemFetchCompleted:(BOOL)arg1 ;
-(BOOL)hasMenuItemFetchCompleted;
-(NSArray *)menuMediaItemEntityTypes;
-(void)setMenuMediaItemEntityTypes:(NSArray *)arg1 ;
-(NSArray *)menuCells;
-(void)setMenuCells:(NSArray *)arg1 ;
-(void)setPopoverViewController:(VUILibraryPopoverViewController *)arg1 ;
-(NSArray *)popoverDropdownCells;
-(void)setPopoverDropdownCells:(NSArray *)arg1 ;
-(VUILibraryListPopoverViewCell *)sizingPopoverCell;
-(void)setSizingPopoverCell:(VUILibraryListPopoverViewCell *)arg1 ;
-(long long)currentlySelectedPopoverCell;
-(void)setCurrentlySelectedPopoverCell:(long long)arg1 ;
-(VUILibraryBannerCollectionViewCell *)bannerViewSizingCell;
-(void)setBannerViewSizingCell:(VUILibraryBannerCollectionViewCell *)arg1 ;
-(void)setShelvesViewModel:(VUILibraryMediaEntityShelvesViewModel *)arg1 ;
-(NSDictionary *)shelfTypeByFetchRequestIdentifier;
-(BOOL)hasDownloadFetchCompleted;
-(BOOL)doesDeviceSupportHDR;
-(void)setDoesDeviceSupportHDR:(BOOL)arg1 ;
-(void)setIsIpad:(BOOL)arg1 ;
@end

