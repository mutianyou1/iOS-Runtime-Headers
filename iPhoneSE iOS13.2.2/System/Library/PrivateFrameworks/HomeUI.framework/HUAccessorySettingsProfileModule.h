/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:33 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemModule.h>
#import <libobjc.A.dylib/HFAccessorySettingManagedConfigurationAdapterObserver.h>

@protocol HUAccessorySettingsProfileModuleDelegate;
@class HUAccessorySettingsProfileItemProvider, HFAccessorySettingGroupItem, HFAccessorySettingManagedConfigurationAdapter, NSString;

@interface HUAccessorySettingsProfileModule : HFItemModule <HFAccessorySettingManagedConfigurationAdapterObserver> {

	id<HUAccessorySettingsProfileModuleDelegate> _delegate;
	HUAccessorySettingsProfileItemProvider* _profileItemProvider;
	HFAccessorySettingGroupItem* _settingGroupItem;
	HFAccessorySettingManagedConfigurationAdapter* _adapter;

}

@property (assign,nonatomic,__weak) id<HUAccessorySettingsProfileModuleDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) HUAccessorySettingsProfileItemProvider * profileItemProvider;              //@synthesize profileItemProvider=_profileItemProvider - In the implementation block
@property (nonatomic,readonly) HFAccessorySettingGroupItem * settingGroupItem;                            //@synthesize settingGroupItem=_settingGroupItem - In the implementation block
@property (nonatomic,readonly) HFAccessorySettingManagedConfigurationAdapter * adapter;                   //@synthesize adapter=_adapter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<HUAccessorySettingsProfileModuleDelegate>)delegate;
-(void)setDelegate:(id<HUAccessorySettingsProfileModuleDelegate>)arg1 ;
-(id)itemProviders;
-(HFAccessorySettingManagedConfigurationAdapter *)adapter;
-(id)buildSectionsWithDisplayedItems:(id)arg1 ;
-(void)managedConfigurationAdapterSettingsWereUpdated:(id)arg1 ;
-(HUAccessorySettingsProfileItemProvider *)profileItemProvider;
-(id)_actuallyRemoveProfileItem:(id)arg1 ;
-(id)initWithItemUpdater:(id)arg1 settingGroupItem:(id)arg2 ;
-(id)promptForRemoveProfileItem:(id)arg1 ;
-(HFAccessorySettingGroupItem *)settingGroupItem;
@end
