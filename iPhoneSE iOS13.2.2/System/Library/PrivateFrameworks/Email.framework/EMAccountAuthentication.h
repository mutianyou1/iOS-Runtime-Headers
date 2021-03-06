/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:24 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EDAccountFactory;
@interface EMAccountAuthentication : NSObject {

	id<EDAccountFactory> _accountFactory;

}

@property (nonatomic,readonly) id<EDAccountFactory> accountFactory;              //@synthesize accountFactory=_accountFactory - In the implementation block
+(id)log;
-(id<EDAccountFactory>)accountFactory;
-(BOOL)_updateDeliveryAccountCredentialIfNecessaryForAccountWithAccount:(id)arg1 ;
-(BOOL)_updateDeliveryAccountCredentialIfNecessaryForReceivingAccount:(id)arg1 ;
-(BOOL)_shouldAutoUpdateDeliveryAccount:(id)arg1 forChangedReceivingAccount:(id)arg2 ;
-(BOOL)_hostnamesHaveSameTopLevelDomain:(id)arg1 deliveryAccount:(id)arg2 ;
-(id)initWithAccountFactory:(id)arg1 ;
-(BOOL)updateDeliveryAccountCredentialIfNecessaryForAccountWithSystemAccount:(id)arg1 ;
-(BOOL)updateDeliveryAccountCredentialIfNecessaryForAccountWithIdentifier:(id)arg1 ;
@end

