/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:40 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TBCacheProvider <NSObject>
@required
-(void)removeAllWithCompletionHandler:(/*^block*/id)arg1;
-(void)cacheFetchResponse:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)prune3BarsNetworks:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2;
-(void)removeWithFetchRequest:(id)arg1 completionHandler:(/*^block*/id)arg2;

@end

