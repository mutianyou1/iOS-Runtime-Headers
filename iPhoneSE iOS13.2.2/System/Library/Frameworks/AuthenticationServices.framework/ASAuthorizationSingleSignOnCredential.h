/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:35 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AuthenticationServices/AuthenticationServices-Structs.h>
#import <libobjc.A.dylib/ASAuthorizationCredential.h>

@class NSString, NSData, NSArray, NSHTTPURLResponse;

@interface ASAuthorizationSingleSignOnCredential : NSObject <ASAuthorizationCredential> {

	NSString* _state;
	NSData* _accessToken;
	NSData* _identityToken;
	NSArray* _authorizedScopes;
	NSHTTPURLResponse* _authenticatedResponse;

}

@property (nonatomic,copy,readonly) NSString * state;                                       //@synthesize state=_state - In the implementation block
@property (nonatomic,copy,readonly) NSData * accessToken;                                   //@synthesize accessToken=_accessToken - In the implementation block
@property (nonatomic,copy,readonly) NSData * identityToken;                                 //@synthesize identityToken=_identityToken - In the implementation block
@property (nonatomic,copy,readonly) NSArray * authorizedScopes;                             //@synthesize authorizedScopes=_authorizedScopes - In the implementation block
@property (nonatomic,copy,readonly) NSHTTPURLResponse * authenticatedResponse;              //@synthesize authenticatedResponse=_authenticatedResponse - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
+(BOOL)supportsSecureCoding;
+(id)emptyCredential;
-(id)init;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)state;
-(NSData *)identityToken;
-(NSData *)accessToken;
-(NSArray *)authorizedScopes;
-(id)initWithAuthenticatedResponse:(id)arg1 ;
-(NSHTTPURLResponse *)authenticatedResponse;
@end
