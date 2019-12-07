/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:05 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber;

@interface PPSiriQueryResult : NSObject <NSCopying> {

	NSString* _qid;
	NSString* _domain;
	NSNumber* _confidence;

}

@property (nonatomic,readonly) NSString * qid;                     //@synthesize qid=_qid - In the implementation block
@property (nonatomic,readonly) NSString * domain;                  //@synthesize domain=_domain - In the implementation block
@property (nonatomic,readonly) NSNumber * confidence;              //@synthesize confidence=_confidence - In the implementation block
+(id)siriQueryResultWithQid:(id)arg1 domain:(id)arg2 confidence:(id)arg3 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)domain;
-(NSNumber *)confidence;
-(id)initWithQid:(id)arg1 domain:(id)arg2 confidence:(id)arg3 ;
-(BOOL)isEqualToSiriQueryResult:(id)arg1 ;
-(NSString *)qid;
@end
