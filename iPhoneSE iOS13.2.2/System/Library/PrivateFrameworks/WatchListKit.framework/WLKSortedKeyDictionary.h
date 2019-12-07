/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:40 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSDictionary.h>

@class NSDictionary;

@interface WLKSortedKeyDictionary : NSDictionary {

	NSDictionary* _underlyingDictionary;

}

@property (nonatomic,copy) NSDictionary * underlyingDictionary;              //@synthesize underlyingDictionary=_underlyingDictionary - In the implementation block
-(unsigned long long)count;
-(id)objectForKey:(id)arg1 ;
-(id)keyEnumerator;
-(id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3 ;
-(NSDictionary *)underlyingDictionary;
-(void)setUnderlyingDictionary:(NSDictionary *)arg1 ;
@end
