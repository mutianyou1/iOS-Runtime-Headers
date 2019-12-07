/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:00 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PPLocalLocationStore, PPLocation, NSMutableSet;

@interface PPLocationCache : NSObject {

	PPLocalLocationStore* _locationStore;
	BOOL _valid;
	PPLocation* _home;
	PPLocation* _work;
	NSMutableSet* _homeOrWorkAddresses;

}
-(id)init;
-(void)invalidate;
-(void)_refresh;
-(id)locationForHome;
-(id)locationForWork;
-(id)homeOrWorkAddresses;
-(id)initWithLocationStore:(id)arg1 ;
@end
