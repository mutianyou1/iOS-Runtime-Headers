/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:03 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKBankAccountInformation.h>

@interface PKPeerPaymentBankAccountInformation : PKBankAccountInformation
-(id)init;
-(void)setAccountNumber:(id)arg1 ;
-(void)setRoutingNumber:(id)arg1 ;
-(void)setBankName:(id)arg1 ;
-(void)updateToLatestKeychainData;
-(void)deleteAllBankInformation;
-(id)_wrapperWithType:(unsigned long long)arg1 ;
-(void)deleteAllLocalBankInformation;
-(id)_bankAccountInformationInKeychain;
-(void)_writeBankAccountInformationToKeychain;
@end
