/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:15 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SAStartLocalRequest : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * clientBoundCommands; 
+(id)startLocalRequest;
+(id)startLocalRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)clientBoundCommands;
-(void)setClientBoundCommands:(NSArray *)arg1 ;
@end
