/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:35 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOResourceManifestServerProxyDelegate <NSObject>
@required
-(oneway void)serverProxyWillStartUpdatingResourceManifest:(id)arg1;
-(oneway void)serverProxyDidStopUpdatingResourceManifest:(id)arg1;
-(oneway void)serverProxyWillStartLoadingResources:(id)arg1;
-(oneway void)serverProxyDidStopLoadingResources:(id)arg1;
-(oneway void)serverProxy:(id)arg1 didChangeActiveTileGroup:(id)arg2 finishedCallback:(/*^block*/id)arg3;
-(void)serverProxyNeedsWiFiResourceActivity:(id)arg1;

@end

