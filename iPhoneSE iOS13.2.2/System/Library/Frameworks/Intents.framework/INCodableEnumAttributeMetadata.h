/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:38 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INCodableAttributeMetadata.h>

@class INCodableEnumValue;

@interface INCodableEnumAttributeMetadata : INCodableAttributeMetadata {

	INCodableEnumValue* _defaultValue;

}

@property (nonatomic,retain) INCodableEnumValue * defaultValue;              //@synthesize defaultValue=_defaultValue - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(INCodableEnumValue *)defaultValue;
-(void)setDefaultValue:(INCodableEnumValue *)arg1 ;
-(void)updateWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentationForLanguage:(id)arg1 ;
@end
