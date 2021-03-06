/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:14 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSData, NSString;

@interface SAIntentGroupIntentDefinitionInfo : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSData * intentDefinition; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)intentDefinitionInfo;
+(id)intentDefinitionInfoWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSData *)intentDefinition;
-(void)setIntentDefinition:(NSData *)arg1 ;
@end

