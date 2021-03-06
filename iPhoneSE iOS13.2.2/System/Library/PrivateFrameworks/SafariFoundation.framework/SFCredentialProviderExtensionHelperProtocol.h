/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:26 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SFCredentialProviderExtensionHelperProtocol
@required
-(void)fetchCredentialIdentitiesMatchingDomains:(id)arg1 completion:(/*^block*/id)arg2;
-(void)getCredentialProviderExtensionStateWithCompletion:(/*^block*/id)arg1;
-(void)saveCredentialIdentities:(id)arg1 completion:(/*^block*/id)arg2;
-(void)removeCredentialIdentities:(id)arg1 completion:(/*^block*/id)arg2;
-(void)removeAllCredentialIdentitiesWithCompletion:(/*^block*/id)arg1;
-(void)replaceCredentialIdentitiesWithIdentities:(id)arg1 completion:(/*^block*/id)arg2;
-(void)removeCredentialIdentityStoreForApplication:(id)arg1 completion:(/*^block*/id)arg2;

@end

