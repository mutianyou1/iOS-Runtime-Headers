/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:12 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAIntentGroupGetIntentDefinitionsIntentDefinitionQuery : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * entity; 
@property (nonatomic,copy) NSString * verb; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)getIntentDefinitionsIntentDefinitionQuery;
+(id)getIntentDefinitionsIntentDefinitionQueryWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setEntity:(NSString *)arg1 ;
-(NSString *)verb;
-(NSString *)entity;
-(void)setVerb:(NSString *)arg1 ;
-(id)encodedClassName;
@end

