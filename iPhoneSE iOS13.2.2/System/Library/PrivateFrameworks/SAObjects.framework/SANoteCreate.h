/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:11 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSString;

@interface SANoteCreate : SADomainCommand

@property (nonatomic,copy) NSString * contents; 
+(id)create;
+(id)createWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)contents;
-(id)groupIdentifier;
-(void)setContents:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end
