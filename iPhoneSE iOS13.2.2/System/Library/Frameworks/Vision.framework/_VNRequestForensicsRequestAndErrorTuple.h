/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:20 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VNRequest, NSError;

@interface _VNRequestForensicsRequestAndErrorTuple : NSObject {

	VNRequest* _request;
	NSError* _error;

}

@property (nonatomic,readonly) VNRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) NSError * error;                  //@synthesize error=_error - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSError *)error;
-(VNRequest *)request;
-(id)initWithRequest:(id)arg1 error:(id)arg2 ;
@end
