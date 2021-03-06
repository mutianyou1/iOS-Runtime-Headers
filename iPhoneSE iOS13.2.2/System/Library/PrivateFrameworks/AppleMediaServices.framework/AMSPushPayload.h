/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:49 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class ACAccount, NSObject, NSString, NSDictionary, NSNumber;

@interface AMSPushPayload : NSObject {

	ACAccount* _account;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSString* _logKey;
	NSDictionary* _payload;

}

@property (nonatomic,readonly) ACAccount * account; 
@property (nonatomic,readonly) NSNumber * accountIdentifier; 
@property (nonatomic,readonly) NSString * actionType; 
@property (nonatomic,readonly) long long alertType; 
@property (nonatomic,readonly) NSDictionary * aps; 
@property (nonatomic,readonly) NSString * clientIdentifier; 
@property (nonatomic,readonly) NSString * logKey;                         //@synthesize logKey=_logKey - In the implementation block
@property (nonatomic,readonly) NSDictionary * payload;                    //@synthesize payload=_payload - In the implementation block
@property (nonatomic,readonly) long long priority; 
@property (nonatomic,readonly) NSString * URLString; 
+(id)actionTypeFromPayload:(id)arg1 ;
-(long long)priority;
-(id)initWithPayload:(id)arg1 ;
-(ACAccount *)account;
-(NSNumber *)accountIdentifier;
-(NSDictionary *)payload;
-(NSString *)URLString;
-(NSString *)clientIdentifier;
-(NSString *)actionType;
-(long long)alertType;
-(NSString *)logKey;
-(NSDictionary *)aps;
@end

