/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:15 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAIntentGroupSnippetTemplate.h>

@class NSString, NSArray;

@interface SAIntentGroupTextSnippetTemplate : SAIntentGroupSnippetTemplate

@property (nonatomic,copy) NSString * alignment; 
@property (nonatomic,copy) NSString * detailText; 
@property (nonatomic,copy) NSArray * labelComponents; 
@property (assign,nonatomic) BOOL showsDisclosureIndicator; 
+(id)textSnippetTemplate;
+(id)textSnippetTemplateWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)alignment;
-(void)setAlignment:(NSString *)arg1 ;
-(NSString *)detailText;
-(void)setDetailText:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSArray *)labelComponents;
-(void)setLabelComponents:(NSArray *)arg1 ;
-(BOOL)showsDisclosureIndicator;
-(void)setShowsDisclosureIndicator:(BOOL)arg1 ;
@end

