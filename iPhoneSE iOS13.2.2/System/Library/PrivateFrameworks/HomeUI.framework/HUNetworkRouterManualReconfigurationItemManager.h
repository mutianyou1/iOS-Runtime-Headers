/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:37 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemManager.h>

@class HMHome, HFNetworkConfigurationItemProvider;

@interface HUNetworkRouterManualReconfigurationItemManager : HFItemManager {

	HMHome* _overrideHome;
	HFNetworkConfigurationItemProvider* _networkConfigurationItemProvider;

}

@property (nonatomic,readonly) HMHome * overrideHome;                                                            //@synthesize overrideHome=_overrideHome - In the implementation block
@property (nonatomic,retain) HFNetworkConfigurationItemProvider * networkConfigurationItemProvider;              //@synthesize networkConfigurationItemProvider=_networkConfigurationItemProvider - In the implementation block
-(id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 ;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(id)_homeFuture;
-(HMHome *)overrideHome;
-(id)initWithHome:(id)arg1 delegate:(id)arg2 ;
-(BOOL)isItemNetworkConfigurationItem:(id)arg1 ;
-(HFNetworkConfigurationItemProvider *)networkConfigurationItemProvider;
-(void)setNetworkConfigurationItemProvider:(HFNetworkConfigurationItemProvider *)arg1 ;
-(id)networkConfigurationItemForProfile:(id)arg1 ;
@end

