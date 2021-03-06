/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:07 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_ICLexiconManaging.h>

@class NSMutableArray;

@interface _ICNullLexiconManager : NSObject <_ICLexiconManaging> {

	NSMutableArray* _contactObservers;

}
-(id)init;
-(void)warmUp;
-(/*^block*/id)addContactObserver:(/*^block*/id)arg1 ;
-(void)removeContactObserver:(/*^block*/id)arg1 ;
-(id)loadLexicons:(/*^block*/id)arg1 ;
-(id)loadLexiconsUsingFilter:(/*^block*/id)arg1 ;
-(void)unloadLexicons;
-(void)hibernate;
@end

