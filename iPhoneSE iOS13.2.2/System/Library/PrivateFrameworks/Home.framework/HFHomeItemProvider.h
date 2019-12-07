/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:31 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemProvider.h>

@class HMHomeManager, NSMutableSet;

@interface HFHomeItemProvider : HFItemProvider {

	/*^block*/id _filter;
	HMHomeManager* _homeManager;
	NSMutableSet* _homeItems;

}

@property (nonatomic,retain) HMHomeManager * homeManager;              //@synthesize homeManager=_homeManager - In the implementation block
@property (nonatomic,retain) NSMutableSet * homeItems;                 //@synthesize homeItems=_homeItems - In the implementation block
@property (nonatomic,copy) id filter;                                  //@synthesize filter=_filter - In the implementation block
-(id)items;
-(void)setFilter:(id)arg1 ;
-(id)filter;
-(id)reloadItems;
-(HMHomeManager *)homeManager;
-(void)setHomeManager:(HMHomeManager *)arg1 ;
-(id)initWithHomeManager:(id)arg1 ;
-(id)invalidationReasons;
-(NSMutableSet *)homeItems;
-(void)setHomeItems:(NSMutableSet *)arg1 ;
@end
