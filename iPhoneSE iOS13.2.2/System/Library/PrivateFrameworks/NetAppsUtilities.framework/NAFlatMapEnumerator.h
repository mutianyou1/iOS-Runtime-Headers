/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:41 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class NSEnumerator;

@interface NAFlatMapEnumerator : NSEnumerator {

	NSEnumerator* _enumerator;
	/*^block*/id _map;

}

@property (nonatomic,readonly) NSEnumerator * enumerator;              //@synthesize enumerator=_enumerator - In the implementation block
@property (nonatomic,copy,readonly) id map;                            //@synthesize map=_map - In the implementation block
-(id)nextObject;
-(id)allObjects;
-(id)map;
-(NSEnumerator *)enumerator;
-(id)initWithEnumerator:(id)arg1 map:(/*^block*/id)arg2 ;
@end
