/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:09 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/REFeature.h>

@class NSString;

@interface _REConcreteFeature : REFeature {

	NSString* _name;
	unsigned long long _featureType;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)featureType;
-(long long)_bitCount;
-(id)initWithName:(id)arg1 featureType:(unsigned long long)arg2 ;
-(id)_rootFeatures;
@end

