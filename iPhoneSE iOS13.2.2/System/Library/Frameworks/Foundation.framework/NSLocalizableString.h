/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:25 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSString.h>

@class NSString;

@interface NSLocalizableString : NSString {

	NSString* _stringsFileKey;
	NSString* _developmentLanguageString;

}

@property (copy,readonly) NSString * stringsFileKey; 
@property (copy,readonly) NSString * developmentLanguageString; 
+(BOOL)supportsSecureCoding;
+(id)localizableStringWithStringsFileKey:(id)arg1 developmentLanguageString:(id)arg2 ;
-(void)dealloc;
-(unsigned long long)length;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(Class)classForCoder;
-(id)awakeAfterUsingCoder:(id)arg1 ;
-(id)initWithStringsFileKey:(id)arg1 developmentLanguageString:(id)arg2 ;
-(NSString *)stringsFileKey;
-(void)setStringsFileKey:(NSString *)arg1 ;
-(NSString *)developmentLanguageString;
-(void)setDevelopmentLanguageString:(NSString *)arg1 ;
@end

