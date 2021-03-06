/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUILibraryStackViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <libobjc.A.dylib/VUIMediaEntitiesFetchControllerDelegate.h>
#import <libobjc.A.dylib/VUIProductLockupViewDelegate.h>
#import <libobjc.A.dylib/VUIRoundButtonDelegate.h>

@class VUIMediaItem, VUIMediaEntitiesFetchController, VUIProductLockupView, VUILibraryProductInfoView, VUIDownloadButton, NSString;

@interface VUILibraryProductViewController : VUILibraryStackViewController <UICollectionViewDataSource, VUIMediaEntitiesFetchControllerDelegate, VUIProductLockupViewDelegate, VUIRoundButtonDelegate> {

	VUIMediaItem* _mediaItem;
	VUIMediaEntitiesFetchController* _fetchController;
	VUIProductLockupView* _productLockupView;
	VUILibraryProductInfoView* _productInfoView;
	VUIDownloadButton* _downloadButton;

}

@property (nonatomic,retain) VUIDownloadButton * downloadButton;              //@synthesize downloadButton=_downloadButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)start;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLoad;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(id)initWithMediaItem:(id)arg1 ;
-(VUIDownloadButton *)downloadButton;
-(void)didSelectButton:(id)arg1 ;
-(void)configureWithCollectionView:(id)arg1 ;
-(id)initWithMediaLibrary:(id)arg1 ;
-(void)controller:(id)arg1 fetchRequests:(id)arg2 didCompleteWithResult:(id)arg3 ;
-(void)controller:(id)arg1 fetchRequests:(id)arg2 didFailWithError:(id)arg3 ;
-(void)setDownloadButton:(VUIDownloadButton *)arg1 ;
-(void)reportMetricsPageEvent;
-(id)_productLockupViewWithMediaItem:(id)arg1 ;
-(id)_productInfoViewWithMediaItem:(id)arg1 ;
-(id)_productSectionForHeader:(id)arg1 data:(id)arg2 group:(id)arg3 maxItemCount:(unsigned long long)arg4 ;
-(void)contentDescriptionExpanded;
@end

