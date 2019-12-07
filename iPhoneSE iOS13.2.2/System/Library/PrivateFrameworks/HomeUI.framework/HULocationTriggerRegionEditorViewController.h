/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:31 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UISearchBarDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <libobjc.A.dylib/MKMapViewDelegate.h>
#import <libobjc.A.dylib/MKMapViewDelegatePrivate.h>
#import <libobjc.A.dylib/HFLocationManagerObserver.h>
#import <libobjc.A.dylib/HULocationTriggerEditorMapDragRadiusViewDelegate.h>
#import <libobjc.A.dylib/HUPreloadableViewController.h>

@protocol HULocationTriggerRegionEditorViewControllerDelegate;
@class HULocationTriggerRegion, HMHome, UISearchBar, UIView, UITableView, MKMapView, HULocationTriggerEditorMapDragRadiusView, NSIndexPath, NSArray, NSLayoutConstraint, MKLocalSearch, NSString;

@interface HULocationTriggerRegionEditorViewController : UIViewController <UISearchBarDelegate, UITableViewDelegate, UITableViewDataSource, MKMapViewDelegate, MKMapViewDelegatePrivate, HFLocationManagerObserver, HULocationTriggerEditorMapDragRadiusViewDelegate, HUPreloadableViewController> {

	HULocationTriggerRegion* _region;
	HMHome* _home;
	id<HULocationTriggerRegionEditorViewControllerDelegate> _delegate;
	UISearchBar* _searchBar;
	UIView* _dividerView;
	UITableView* _tableView;
	MKMapView* _mapView;
	HULocationTriggerEditorMapDragRadiusView* _dragView;
	NSIndexPath* _selectedIndexPath;
	NSArray* _constraints;
	NSLayoutConstraint* _mapHeightConstraint;
	NSArray* _recents;
	MKLocalSearch* _localSearch;
	NSArray* _localSearchResults;

}

@property (nonatomic,retain) HULocationTriggerRegion * region;                                                     //@synthesize region=_region - In the implementation block
@property (nonatomic,retain) UISearchBar * searchBar;                                                              //@synthesize searchBar=_searchBar - In the implementation block
@property (nonatomic,retain) UIView * dividerView;                                                                 //@synthesize dividerView=_dividerView - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                                              //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) MKMapView * mapView;                                                                  //@synthesize mapView=_mapView - In the implementation block
@property (nonatomic,retain) HULocationTriggerEditorMapDragRadiusView * dragView;                                  //@synthesize dragView=_dragView - In the implementation block
@property (nonatomic,retain) NSIndexPath * selectedIndexPath;                                                      //@synthesize selectedIndexPath=_selectedIndexPath - In the implementation block
@property (nonatomic,retain) NSArray * constraints;                                                                //@synthesize constraints=_constraints - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * mapHeightConstraint;                                             //@synthesize mapHeightConstraint=_mapHeightConstraint - In the implementation block
@property (nonatomic,retain) NSArray * recents;                                                                    //@synthesize recents=_recents - In the implementation block
@property (nonatomic,retain) MKLocalSearch * localSearch;                                                          //@synthesize localSearch=_localSearch - In the implementation block
@property (nonatomic,retain) NSArray * localSearchResults;                                                         //@synthesize localSearchResults=_localSearchResults - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                                                      //@synthesize home=_home - In the implementation block
@property (assign,nonatomic,__weak) id<HULocationTriggerRegionEditorViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_homeImage;
+(id)_pinImage;
-(id)initWithCoder:(id)arg1 ;
-(id<HULocationTriggerRegionEditorViewControllerDelegate>)delegate;
-(void)setDelegate:(id<HULocationTriggerRegionEditorViewControllerDelegate>)arg1 ;
-(NSArray *)constraints;
-(HULocationTriggerRegion *)region;
-(HMHome *)home;
-(void)loadView;
-(UITableView *)tableView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(UISearchBar *)searchBar;
-(void)setSearchBar:(UISearchBar *)arg1 ;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)_reloadData;
-(void)setTableView:(UITableView *)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)updateViewConstraints;
-(void)setRegion:(HULocationTriggerRegion *)arg1 ;
-(void)setSelectedIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)selectedIndexPath;
-(NSArray *)recents;
-(void)setRecents:(NSArray *)arg1 ;
-(void)setConstraints:(NSArray *)arg1 ;
-(void)setMapView:(MKMapView *)arg1 ;
-(MKMapView *)mapView;
-(void)_updateUI;
-(void)mapView:(id)arg1 regionWillChangeAnimated:(BOOL)arg2 ;
-(void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2 ;
-(void)mapViewDidChangeVisibleRegion:(id)arg1 ;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2 ;
-(void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2 ;
-(void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2 ;
-(id)mapView:(id)arg1 rendererForOverlay:(id)arg2 ;
-(double)_mapHeight;
-(void)_cancel:(id)arg1 ;
-(void)_done:(id)arg1 ;
-(HULocationTriggerEditorMapDragRadiusView *)dragView;
-(void)setDragView:(HULocationTriggerEditorMapDragRadiusView *)arg1 ;
-(MKLocalSearch *)localSearch;
-(void)setLocalSearch:(MKLocalSearch *)arg1 ;
-(BOOL)_hasLocation;
-(UIView *)dividerView;
-(void)setDividerView:(UIView *)arg1 ;
-(void)mapRadiusView:(id)arg1 radiusDidChange:(double)arg2 ;
-(SCD_Struct_HU2)mapRadiusView:(id)arg1 boundingMapRectForOverlay:(id)arg2 ;
-(id)mapRadiusView:(id)arg1 overlayForRadius:(double)arg2 ;
-(NSLayoutConstraint *)mapHeightConstraint;
-(void)setMapHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSArray *)localSearchResults;
-(void)setLocalSearchResults:(NSArray *)arg1 ;
-(void)_resetSearchResults;
-(id)hu_preloadContent;
-(id)initWithRegion:(id)arg1 home:(id)arg2 delegate:(id)arg3 ;
-(void)_updateRecentsWithSearchText:(id)arg1 ;
-(long long)_homeRowIndex;
-(void)_setupMap;
-(void)_updateMapHeight;
-(void)_updateUIWithRegion:(id)arg1 ;
-(unsigned long long)_proximityType;
-(long long)_firstRecentRowIndex;
-(long long)_lastRecentRowIndex;
-(void)_displayLocationCoordinate:(CLLocationCoordinate2D)arg1 ;
-(void)_showMapRegionForCoordinate:(CLLocationCoordinate2D)arg1 radius:(double)arg2 ;
-(id)_overlayWithCenterCoordinate:(CLLocationCoordinate2D)arg1 radius:(double)arg2 ;
-(long long)_firstLocalSearchResultRowIndex;
-(id)_locationForRecentMetadataDictionary:(id)arg1 ;
-(id)showLocationRegionInvalidAlert;
@end
