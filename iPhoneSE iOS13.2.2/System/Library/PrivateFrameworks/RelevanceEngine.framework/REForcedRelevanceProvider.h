/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:09 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RERelevanceProvider.h>

@interface REForcedRelevanceProvider : RERelevanceProvider {

	BOOL _isHistoric;
	float _relevance;

}

@property (nonatomic,readonly) float relevance;              //@synthesize relevance=_relevance - In the implementation block
@property (nonatomic,readonly) BOOL isHistoric;              //@synthesize isHistoric=_isHistoric - In the implementation block
+(id)relevanceSimulatorID;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)_hash;
-(id)dictionaryEncoding;
-(id)initWithForcedRelevance:(float)arg1 isHistoric:(BOOL)arg2 ;
-(id)initWithForcedRelevance:(float)arg1 ;
-(float)relevance;
-(BOOL)isHistoric;
@end
