/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:10 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/REFeatureTransformer.h>

@interface _REBinaryFeatureTransformer : REFeatureTransformer {

	unsigned long long _threshold;

}

@property (assign,nonatomic) unsigned long long threshold;              //@synthesize threshold=_threshold - In the implementation block
+(id)functionName;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)threshold;
-(void)setThreshold:(unsigned long long)arg1 ;
-(unsigned long long)_outputType;
-(void)configureWithInvocation:(id)arg1 ;
-(long long)_bitCount;
-(unsigned long long)_featureCount;
-(unsigned long long)_createTransformFromValues:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)_validateWithFeatures:(id)arg1 ;
@end

