/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:05 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface CAMMemoizationCache : NSObject {

	BOOL _memoizesNil;
	NSMutableDictionary* __dictionary;

}

@property (nonatomic,readonly) NSMutableDictionary * _dictionary;              //@synthesize _dictionary=__dictionary - In the implementation block
@property (nonatomic,readonly) BOOL memoizesNil;                               //@synthesize memoizesNil=_memoizesNil - In the implementation block
-(id)init;
-(void)enumerateKeysAndObjectsUsingBlock:(/*^block*/id)arg1 ;
-(NSMutableDictionary *)_dictionary;
-(id)initWithMemoizesNil:(BOOL)arg1 ;
-(id)objectForKey:(id)arg1 memoizationBlock:(/*^block*/id)arg2 ;
-(BOOL)memoizesNil;
@end

