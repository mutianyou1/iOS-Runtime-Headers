/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:00 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentPreference.h>

@class NSString;

@interface PKPaymentPreferenceShippingMethod : PKPaymentPreference {

	NSString* _currency;

}

@property (nonatomic,copy) NSString * currency;              //@synthesize currency=_currency - In the implementation block
-(NSString *)currency;
-(void)setCurrency:(NSString *)arg1 ;
-(BOOL)supportsDeletion;
@end

