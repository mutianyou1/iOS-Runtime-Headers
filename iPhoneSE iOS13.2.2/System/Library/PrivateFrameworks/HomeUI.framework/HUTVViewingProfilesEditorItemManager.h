/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:33 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemManager.h>

@class HUTVViewingProfilesDevicesItemModule;

@interface HUTVViewingProfilesEditorItemManager : HFItemManager {

	HUTVViewingProfilesDevicesItemModule* _tvpDevicesModule;

}

@property (nonatomic,readonly) HUTVViewingProfilesDevicesItemModule * tvpDevicesModule;              //@synthesize tvpDevicesModule=_tvpDevicesModule - In the implementation block
-(id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 ;
-(void)_registerForExternalUpdates;
-(void)_unregisterForExternalUpdates;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 userItem:(id)arg2 ;
-(HUTVViewingProfilesDevicesItemModule *)tvpDevicesModule;
@end

