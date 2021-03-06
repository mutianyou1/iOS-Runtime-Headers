/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:24 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLAssetContainerListChangeNotification.h>

@class PLSortedAlbumList, PLAssetContainerListChangeNotification;

@interface PLSortedAlbumListChangeNotification : PLAssetContainerListChangeNotification {

	PLSortedAlbumList* _albumList;
	PLAssetContainerListChangeNotification* _backingNotification;

}
+(id)notificationForDerivedObject:(id)arg1 priorChangeState:(id)arg2 forBackingObjectNotification:(id)arg3 ;
-(id)init;
-(id)description;
-(id)object;
-(id)_changedObjects;
-(BOOL)_getOldSet:(id*)arg1 newSet:(id*)arg2 ;
-(BOOL)shouldReload;
-(BOOL)countDidChange;
-(id)albumList;
-(id)initWithSortedAlbumList:(id)arg1 albumListChangeNotification:(id)arg2 ;
@end

