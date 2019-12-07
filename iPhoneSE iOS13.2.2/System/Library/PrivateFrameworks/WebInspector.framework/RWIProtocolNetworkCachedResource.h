/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:41 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolNetworkResponse;

@interface RWIProtocolNetworkCachedResource : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * url; 
@property (assign,nonatomic) long long type; 
@property (assign,nonatomic) double bodySize; 
@property (nonatomic,retain) RWIProtocolNetworkResponse * response; 
@property (nonatomic,copy) NSString * sourceMapURL; 
+(id)safe_initWithUrl:(id)arg1 type:(long long)arg2 bodySize:(double)arg3 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(NSString *)url;
-(RWIProtocolNetworkResponse *)response;
-(void)setUrl:(NSString *)arg1 ;
-(void)setResponse:(RWIProtocolNetworkResponse *)arg1 ;
-(double)bodySize;
-(void)setBodySize:(double)arg1 ;
-(id)initWithUrl:(id)arg1 type:(long long)arg2 bodySize:(double)arg3 ;
-(void)setSourceMapURL:(NSString *)arg1 ;
-(NSString *)sourceMapURL;
@end
