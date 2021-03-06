/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:15 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol ECAuthenticatableAccount <NSObject>
@property (readonly) NSString * username; 
@property (copy,readonly) NSString * password; 
@property (nonatomic,copy,readonly) NSString * hostname; 
@property (nonatomic,readonly) NSString * domain; 
@property (nonatomic,readonly) NSString * oauth2Token; 
@required
-(NSString *)domain;
-(NSString *)password;
-(NSString *)hostname;
-(NSString *)username;
-(void)setMissingPasswordError;
-(NSString *)oauth2Token;

@end

