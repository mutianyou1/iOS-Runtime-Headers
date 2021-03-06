/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:51 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface IDSCarrierTokenRequestParameters : NSObject {

	long long _subscriptionSource;
	NSString* _IMEI;
	NSString* _carrierNonce;

}

@property (nonatomic,readonly) long long subscriptionSource;              //@synthesize subscriptionSource=_subscriptionSource - In the implementation block
@property (nonatomic,readonly) NSString * IMEI;                           //@synthesize IMEI=_IMEI - In the implementation block
@property (nonatomic,readonly) NSString * carrierNonce;                   //@synthesize carrierNonce=_carrierNonce - In the implementation block
-(NSString *)IMEI;
-(id)initWithSubscriptionSource:(long long)arg1 IMEI:(id)arg2 carrierNonce:(id)arg3 ;
-(long long)subscriptionSource;
-(NSString *)carrierNonce;
@end

