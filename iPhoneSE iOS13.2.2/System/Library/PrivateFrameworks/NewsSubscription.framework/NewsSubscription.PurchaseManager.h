/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:17 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NewsSubscription.framework/NewsSubscription
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCPurchaseManagerDelegate.h>

@interface NewsSubscription.PurchaseManager : _UKNOWN_SUPERCLASS_ <FCPurchaseManagerDelegate> {

	 purchaseObservers;
	 transactionObservers;
	 internalPurchaseManager;
	 purchaseController;
	 purchaseContextEntriesManager;

}
-(void)purchaseFailedWithProductID:(id)arg1 transactionState:(long long)arg2 transactionError:(id)arg3 ongoingPurchaseEntry:(id)arg4 ;
-(void)purchaseSuccessWithProductID:(id)arg1 purchaseReceipt:(id)arg2 chargeCurrencyCode:(id)arg3 ongoingPurchaseEntry:(id)arg4 ;
-(void)purchaseFailedForInvalidPurchaseReceiptWithProductID:(id)arg1 ongoingPurchaseEntry:(id)arg2 ;
@end
