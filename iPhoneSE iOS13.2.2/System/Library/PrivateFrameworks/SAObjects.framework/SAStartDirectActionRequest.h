/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:16 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAStartRequest.h>

@class NSString, NSDictionary;

@interface SAStartDirectActionRequest : SAStartRequest

@property (nonatomic,copy) NSString * directAction; 
@property (nonatomic,copy) NSDictionary * requestExecutionParameters; 
@property (nonatomic,copy) NSString * utteranceFromRequestParameters; 
+(id)startDirectActionRequest;
+(id)startDirectActionRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setDirectAction:(NSString *)arg1 ;
-(NSString *)directAction;
-(BOOL)requiresResponse;
-(NSDictionary *)requestExecutionParameters;
-(void)setRequestExecutionParameters:(NSDictionary *)arg1 ;
-(NSString *)utteranceFromRequestParameters;
-(void)setUtteranceFromRequestParameters:(NSString *)arg1 ;
@end
