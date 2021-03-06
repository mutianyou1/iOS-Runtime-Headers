/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:03 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentAvailableProductsRequest.h>

@class NSString;

@interface PKPaymentAvailableProductsPreferredLanguageRequest : PKPaymentAvailableProductsRequest {

	NSString* _preferredLanguage;

}

@property (nonatomic,copy) NSString * preferredLanguage;              //@synthesize preferredLanguage=_preferredLanguage - In the implementation block
-(id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 ;
-(id)initWithType:(id)arg1 preferredLanguage:(id)arg2 ;
-(NSString *)preferredLanguage;
-(void)setPreferredLanguage:(NSString *)arg1 ;
@end

