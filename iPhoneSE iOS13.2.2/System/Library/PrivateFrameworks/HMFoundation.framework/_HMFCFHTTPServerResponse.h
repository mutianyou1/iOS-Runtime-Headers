/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:54 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFHTTPResponseInternal.h>

@class _HMFCFHTTPServerRequest, _HMFCFHTTPMessage;

@interface _HMFCFHTTPServerResponse : HMFHTTPResponseInternal {

	CFHTTPServerResponseRef _responseRef;
	_HMFCFHTTPServerRequest* _request;
	/*^block*/id _completionHandler;
	_HMFCFHTTPMessage* _response;

}

@property (nonatomic,readonly) _HMFCFHTTPMessage * response;                     //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) _HMFCFHTTPServerRequest * request;                //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) CFHTTPServerResponseRef responseRef;              //@synthesize responseRef=_responseRef - In the implementation block
@property (nonatomic,copy) id completionHandler;                                 //@synthesize completionHandler=_completionHandler - In the implementation block
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(_HMFCFHTTPServerRequest *)request;
-(_HMFCFHTTPMessage *)response;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setBody:(id)arg1 ;
-(id)body;
-(id)headerFields;
-(void)setHeaderValue:(id)arg1 forHeaderKey:(id)arg2 ;
-(id)initWithRequest:(id)arg1 statusCode:(long long)arg2 ;
-(CFHTTPServerResponseRef)responseRef;
@end

