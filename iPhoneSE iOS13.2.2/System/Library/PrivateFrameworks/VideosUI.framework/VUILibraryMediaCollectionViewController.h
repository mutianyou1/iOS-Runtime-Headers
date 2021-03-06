/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:37 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUILibraryStackViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <libobjc.A.dylib/VUIMediaEntitiesFetchControllerDelegate.h>
#import <libobjc.A.dylib/VUIProductLockupViewDelegate.h>
#import <libobjc.A.dylib/TVShelfViewLayoutDelegate.h>
#import <libobjc.A.dylib/VUILibraryEpisodeFooterCellDelegate.h>
#import <libobjc.A.dylib/VUILibraryEpisodeShelfViewControllerDelegate.h>

@class VUIMediaCollection, NSArray, VUILibraryMediaCollectionViewModel, NSMutableDictionary, NSString;

@interface VUILibraryMediaCollectionViewController : VUILibraryStackViewController <UICollectionViewDataSource, UICollectionViewDelegate, VUIMediaEntitiesFetchControllerDelegate, VUIProductLockupViewDelegate, TVShelfViewLayoutDelegate, VUILibraryEpisodeFooterCellDelegate, VUILibraryEpisodeShelfViewControllerDelegate> {

	BOOL _canShowMultipleSeasons;
	VUIMediaCollection* _mediaCollection;
	NSArray* _seasons;
	NSArray* _episodes;
	NSArray* _episodeGroups;
	VUILibraryMediaCollectionViewModel* _mediaCollectionViewModel;
	NSMutableDictionary* _downloadButtonBySeasonIdentifier;
	NSString* _showTitle;

}

@property (nonatomic,retain) NSArray * seasons;                                                          //@synthesize seasons=_seasons - In the implementation block
@property (nonatomic,retain) NSArray * episodes;                                                         //@synthesize episodes=_episodes - In the implementation block
@property (nonatomic,retain) NSArray * episodeGroups;                                                    //@synthesize episodeGroups=_episodeGroups - In the implementation block
@property (nonatomic,retain) VUILibraryMediaCollectionViewModel * mediaCollectionViewModel;              //@synthesize mediaCollectionViewModel=_mediaCollectionViewModel - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * downloadButtonBySeasonIdentifier;                     //@synthesize downloadButtonBySeasonIdentifier=_downloadButtonBySeasonIdentifier - In the implementation block
@property (nonatomic,retain) NSString * showTitle;                                                       //@synthesize showTitle=_showTitle - In the implementation block
@property (assign,nonatomic) BOOL canShowMultipleSeasons;                                                //@synthesize canShowMultipleSeasons=_canShowMultipleSeasons - In the implementation block
@property (nonatomic,readonly) VUIMediaCollection * mediaCollection;                                     //@synthesize mediaCollection=_mediaCollection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)start;
-(void)traitCollectionDidChange:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(void)setShowTitle:(NSString *)arg1 ;
-(NSString *)showTitle;
-(VUIMediaCollection *)mediaCollection;
-(NSArray *)episodes;
-(void)libraryEpisodesShelfViewController:(id)arg1 didRemoveDownloadForAssetController:(id)arg2 ;
-(void)configureWithCollectionView:(id)arg1 ;
-(void)controller:(id)arg1 fetchRequests:(id)arg2 didCompleteWithResult:(id)arg3 ;
-(void)controller:(id)arg1 fetchRequests:(id)arg2 didFailWithError:(id)arg3 ;
-(NSArray *)seasons;
-(void)setSeasons:(NSArray *)arg1 ;
-(void)contentDescriptionExpanded;
-(void)setEpisodes:(NSArray *)arg1 ;
-(void)titleButtonPressedForStoreId:(id)arg1 ;
-(id)initWithMediaCollection:(id)arg1 showMultipleSeasons:(BOOL)arg2 ;
-(BOOL)_usingEpisodesGroupFetch;
-(void)_buildMediaCollectionViewModel;
-(void)_updateDeletedContentErrorMessage;
-(id)_episodesChangeSetMapWithEpisodeGroups:(id)arg1 changeSet:(id)arg2 ;
-(id)_seasonViewModelsWithSeasons:(id)arg1 ;
-(void)_updateMediaCollectionViewModelWithSeasonViewModels:(id)arg1 ;
-(void)_updateProductLockupViewWithSeasonIdentifier:(id)arg1 ;
-(BOOL)canShowMultipleSeasons;
-(id)_episodesBySeasonIdentifier;
-(id)_productLockupViewWithSeason:(id)arg1 ;
-(id)_episodeShelfViewControllerWithSeason:(id)arg1 episodes:(id)arg2 ;
-(void)_updateProductLockupView:(id)arg1 withSeason:(id)arg2 ;
-(void)addDownloadButtonToProductLockupView:(id)arg1 forSeason:(id)arg2 ;
-(NSArray *)episodeGroups;
-(void)setEpisodeGroups:(NSArray *)arg1 ;
-(VUILibraryMediaCollectionViewModel *)mediaCollectionViewModel;
-(void)setMediaCollectionViewModel:(VUILibraryMediaCollectionViewModel *)arg1 ;
-(NSMutableDictionary *)downloadButtonBySeasonIdentifier;
-(void)setDownloadButtonBySeasonIdentifier:(NSMutableDictionary *)arg1 ;
-(void)setCanShowMultipleSeasons:(BOOL)arg1 ;
@end

