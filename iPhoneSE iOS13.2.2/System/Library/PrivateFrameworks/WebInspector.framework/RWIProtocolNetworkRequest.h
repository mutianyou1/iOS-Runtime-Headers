/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:41 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolNetworkHeaders;

@interface RWIProtocolNetworkRequest : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * url; 
@property (nonatomic,copy) NSString * method; 
@property (nonatomic,retain) RWIProtocolNetworkHeaders * headers; 
@property (nonatomic,copy) NSString * postData; 
+(id)safe_initWithUrl:(id)arg1 method:(id)arg2 headers:(id)arg3 ;
+(id)ik_networkRequestFromURLRequest:(id)arg1 ;
-(NSString *)method;
-(NSString *)url;
-(void)setMethod:(NSString *)arg1 ;
-(void)setUrl:(NSString *)arg1 ;
-(NSString *)postData;
-(void)setPostData:(NSString *)arg1 ;
-(void)setHeaders:(RWIProtocolNetworkHeaders *)arg1 ;
-(RWIProtocolNetworkHeaders *)headers;
-(id)initWithUrl:(id)arg1 method:(id)arg2 headers:(id)arg3 ;
@end
