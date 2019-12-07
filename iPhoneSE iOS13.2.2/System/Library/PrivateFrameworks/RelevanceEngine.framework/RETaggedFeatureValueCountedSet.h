/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:10 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface RETaggedFeatureValueCountedSet : NSObject <NSCopying> {

	CFBagRef _bag;

}

@property (readonly) unsigned long long count; 
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(void)enumerateFeatureValuesUsingBlock:(/*^block*/id)arg1 ;
-(void)addFeatureValue:(unsigned long long)arg1 ;
-(void)removeFeatureValue:(unsigned long long)arg1 ;
-(unsigned long long)countForFeatureValue:(unsigned long long)arg1 ;
-(BOOL)containsFeatureValue:(unsigned long long)arg1 ;
@end
