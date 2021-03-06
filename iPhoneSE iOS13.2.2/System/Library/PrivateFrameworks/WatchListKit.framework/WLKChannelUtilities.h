/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:40 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, WLKChannelsResponse, NSDictionary, NSArray;

@interface WLKChannelUtilities : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	BOOL _filtered;
	WLKChannelsResponse* _cachedResponse;
	NSDictionary* _channelsByBundleID;

}

@property (nonatomic,copy,readonly) NSDictionary * channelsByID; 
@property (nonatomic,copy,readonly) NSDictionary * channelsByBundleID;              //@synthesize channelsByBundleID=_channelsByBundleID - In the implementation block
@property (nonatomic,copy,readonly) NSArray * orderedChannels; 
+(id)sharedInstance;
+(id)sharedInstanceFiltered;
+(id)_validiTunesBundles;
+(BOOL)isItunesBundleID:(id)arg1 ;
-(id)init;
-(id)_configuration;
-(id)channelIDForBundleID:(id)arg1 ;
-(id)channelForBundleID:(id)arg1 ;
-(NSArray *)orderedChannels;
-(id)channelForID:(id)arg1 ;
-(id)initFiltered:(BOOL)arg1 ;
-(NSDictionary *)channelsByID;
-(BOOL)isItunesOrFirstPartyBundleID:(id)arg1 ;
-(NSDictionary *)channelsByBundleID;
@end

