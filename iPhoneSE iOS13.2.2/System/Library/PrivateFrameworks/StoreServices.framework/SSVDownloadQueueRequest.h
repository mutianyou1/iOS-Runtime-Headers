/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:44 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSRequest.h>

@interface SSVDownloadQueueRequest : SSRequest {

	long long _queueType;

}

@property (nonatomic,readonly) long long queueType;              //@synthesize queueType=_queueType - In the implementation block
-(long long)queueType;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)startWithResponseBlock:(/*^block*/id)arg1 ;
-(id)initWithQueueType:(long long)arg1 ;
@end
