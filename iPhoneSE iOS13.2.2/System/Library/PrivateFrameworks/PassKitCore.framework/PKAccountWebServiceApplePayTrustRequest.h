/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:00 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKAccountWebServiceRequest.h>

@protocol PKAccountWebServiceApplePayTrustProtocol;
@class PKApplePayTrustSignature;

@interface PKAccountWebServiceApplePayTrustRequest : PKAccountWebServiceRequest {

	id<PKAccountWebServiceApplePayTrustProtocol> _protocol;
	PKApplePayTrustSignature* _signature;

}

@property (nonatomic,retain) PKApplePayTrustSignature * signature;              //@synthesize signature=_signature - In the implementation block
-(PKApplePayTrustSignature *)signature;
-(Class)responseClass;
-(void)setSignature:(PKApplePayTrustSignature *)arg1 ;
-(id)_urlRequestWithAppleAccountInformation:(id)arg1 ;
-(id)initWithApplePayTrustProtocol:(id)arg1 ;
-(id)endpointComponents;
@end
