/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:05 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSString;

@interface PKPaymentProvisioningNonceResponse : PKPaymentWebServiceResponse {

	NSString* _nonce;

}

@property (nonatomic,copy,readonly) NSString * nonce;              //@synthesize nonce=_nonce - In the implementation block
-(id)initWithData:(id)arg1 ;
-(NSString *)nonce;
@end
