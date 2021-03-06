/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:00 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKPaymentAuthorizationViewControllerDelegate <NSObject>
@optional
-(void)paymentAuthorizationViewController:(id)arg1 didAuthorizePayment:(id)arg2 handler:(/*^block*/id)arg3;
-(void)paymentAuthorizationViewControllerWillAuthorizePayment:(id)arg1;
-(void)paymentAuthorizationViewController:(id)arg1 didSelectShippingMethod:(id)arg2 handler:(/*^block*/id)arg3;
-(void)paymentAuthorizationViewController:(id)arg1 didSelectShippingContact:(id)arg2 handler:(/*^block*/id)arg3;
-(void)paymentAuthorizationViewController:(id)arg1 didSelectPaymentMethod:(id)arg2 handler:(/*^block*/id)arg3;
-(void)paymentAuthorizationViewController:(id)arg1 didAuthorizePayment:(id)arg2 completion:(/*^block*/id)arg3;
-(void)paymentAuthorizationViewController:(id)arg1 didSelectShippingMethod:(id)arg2 completion:(/*^block*/id)arg3;
-(void)paymentAuthorizationViewController:(id)arg1 didSelectShippingAddress:(const void*)arg2 completion:(/*^block*/id)arg3;
-(void)paymentAuthorizationViewController:(id)arg1 didSelectShippingContact:(id)arg2 completion:(/*^block*/id)arg3;
-(void)paymentAuthorizationViewController:(id)arg1 didSelectPaymentMethod:(id)arg2 completion:(/*^block*/id)arg3;

@required
-(void)paymentAuthorizationViewControllerDidFinish:(id)arg1;

@end

