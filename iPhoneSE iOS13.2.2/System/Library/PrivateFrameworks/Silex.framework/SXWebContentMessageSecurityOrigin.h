/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:40 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXWebContentMessageSecurityOrigin.h>
@class NSString, NSURLRequest;


@protocol SXWebContentMessageSecurityOrigin <NSObject>
@property (nonatomic,readonly) NSString * protocol; 
@property (nonatomic,readonly) NSString * host; 
@property (nonatomic,readonly) NSURLRequest * request; 
@required
-(NSString *)host;
-(NSString *)protocol;
-(NSURLRequest *)request;

@end


@class NSString, NSURLRequest;

@interface SXWebContentMessageSecurityOrigin : NSObject <SXWebContentMessageSecurityOrigin> {

	NSString* _protocol;
	NSString* _host;
	NSURLRequest* _request;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * protocol;                 //@synthesize protocol=_protocol - In the implementation block
@property (nonatomic,readonly) NSString * host;                     //@synthesize host=_host - In the implementation block
@property (nonatomic,readonly) NSURLRequest * request;              //@synthesize request=_request - In the implementation block
-(NSString *)host;
-(NSString *)protocol;
-(NSURLRequest *)request;
-(id)initWithProtocol:(id)arg1 host:(id)arg2 request:(id)arg3 ;
@end
