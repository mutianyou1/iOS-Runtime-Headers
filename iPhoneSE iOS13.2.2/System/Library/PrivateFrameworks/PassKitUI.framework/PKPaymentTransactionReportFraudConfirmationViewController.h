/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:36 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKExplanationViewController.h>

@protocol PKPaymentDataProvider, PKPaymentTransactionReportFraudConfirmationViewControllerDelegate;
@class PKPaymentTransaction;

@interface PKPaymentTransactionReportFraudConfirmationViewController : PKExplanationViewController {

	PKPaymentTransaction* _transaction;
	id<PKPaymentDataProvider> _dataProvider;
	id<PKPaymentTransactionReportFraudConfirmationViewControllerDelegate> _fraudDelegate;

}
-(void)viewDidLoad;
-(void)reportFraud:(id)arg1 ;
-(id)initWithContext:(long long)arg1 transaction:(id)arg2 dataProvider:(id)arg3 fraudDelegate:(id)arg4 ;
@end

