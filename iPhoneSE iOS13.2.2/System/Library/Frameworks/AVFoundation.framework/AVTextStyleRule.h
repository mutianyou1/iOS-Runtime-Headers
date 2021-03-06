/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:12 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVTextStyleRuleInternal, NSDictionary, NSString;

@interface AVTextStyleRule : NSObject <NSCopying> {

	AVTextStyleRuleInternal* _textStyleRule;

}

@property (nonatomic,readonly) NSDictionary * textMarkupAttributes; 
@property (nonatomic,readonly) NSString * textSelector; 
+(id)propertyListForTextStyleRules:(id)arg1 ;
+(id)textStyleRuleWithTextMarkupAttributes:(id)arg1 textSelector:(id)arg2 ;
+(id)textStyleRulesFromPropertyList:(id)arg1 ;
+(id)textStyleRuleWithTextMarkupAttributes:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)textSelector;
-(NSDictionary *)textMarkupAttributes;
-(id)_dictionaryPlistRepresentation;
-(id)initWithTextMarkupAttributes:(id)arg1 textSelector:(id)arg2 ;
-(id)initWithTextMarkupAttributes:(id)arg1 ;
@end

