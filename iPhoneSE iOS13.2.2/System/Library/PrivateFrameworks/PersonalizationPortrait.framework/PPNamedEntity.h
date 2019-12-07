/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:05 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <ProactiveSupport/_PASZonedObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, PPNamedEntityRecord;

@interface PPNamedEntity : _PASZonedObject <NSCopying, NSSecureCoding> {

	NSString* _name;
	unsigned long long _category;
	NSString* _bestLanguage;

}

@property (nonatomic,readonly) NSString * name;                                       //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned long long category;                           //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) NSString * bestLanguage;                               //@synthesize bestLanguage=_bestLanguage - In the implementation block
@property (nonatomic,readonly) PPNamedEntityRecord * mostRelevantRecord; 
@property (nonatomic,readonly) double sentimentScore; 
+(BOOL)supportsSecureCoding;
+(id)describeCategory:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)category;
-(double)sentimentScore;
-(NSString *)bestLanguage;
-(id)initWithName:(id)arg1 category:(unsigned long long)arg2 language:(id)arg3 mostRelevantRecord:(id)arg4 ;
-(PPNamedEntityRecord *)mostRelevantRecord;
-(id)initWithName:(id)arg1 category:(unsigned long long)arg2 language:(id)arg3 ;
-(BOOL)isEqualToNamedEntity:(id)arg1 ;
@end
