/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:02 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentCredentialMetadata.h>

@class NSString;

@interface PKPaymentCredentialMetadataCurrency : PKPaymentCredentialMetadata {

	NSString* _currencyCode;

}

@property (nonatomic,copy,readonly) NSString * currencyCode;              //@synthesize currencyCode=_currencyCode - In the implementation block
-(NSString *)currencyCode;
-(id)initWithConfiguration:(id)arg1 ;
-(id)displayString;
@end

