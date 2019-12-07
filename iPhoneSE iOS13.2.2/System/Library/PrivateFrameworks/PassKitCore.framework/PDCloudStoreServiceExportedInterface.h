/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:03 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PDCloudStoreServiceExportedInterface <PDXPCServiceExportedInterface>
@optional
-(void)simulateCloudStorePushWithCompletion:(/*^block*/id)arg1;
-(void)resetContainerWithHandler:(/*^block*/id)arg1;
-(void)resetContainerWithCompletion:(/*^block*/id)arg1;

@required
-(void)checkTLKsMissingWithCompletion:(/*^block*/id)arg1;
-(void)resetApplePayManateeViewWithCompletion:(/*^block*/id)arg1;
-(void)noteAccountDeletedWithHandler:(/*^block*/id)arg1;
-(void)uploadTransaction:(id)arg1 forPassWithUniqueIdentifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)fetchAndStoreRecordsForPaymentPassWithUniqueIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)generateRandomTransactionForPassWithUniqueIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)populateEvents:(id)arg1 forAccountIdentifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)updateCloudStoreWithLocalItems:(id)arg1 recordSpecificKeys:(id)arg2 completion:(/*^block*/id)arg3;
-(void)removeItemsWithRecordNames:(id)arg1 itemType:(unsigned long long)arg2 completion:(/*^block*/id)arg3;
-(void)allItemsOfItemType:(unsigned long long)arg1 storeLocally:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)itemOfItemType:(unsigned long long)arg1 recordName:(id)arg2 qualityOfService:(long long)arg3 completion:(/*^block*/id)arg4;
-(void)resetContainerWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)simulateCloudStorePushForContainerIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)setupCloudDatabaseForContainerName:(id)arg1 completion:(/*^block*/id)arg2;
-(void)cloudStoreStatusForContainer:(id)arg1 completion:(/*^block*/id)arg2;
-(void)noteCloudSyncPassesSwitchChangedWithHandler:(/*^block*/id)arg1;

@end
