/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:54 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AppStoreUI.framework/AppStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUClientController.h>

@interface ASClientController : SUClientController {

	BOOL _shouldExitAfterPurchases;

}

@property (assign,nonatomic) BOOL shouldExitAfterPurchases;              //@synthesize shouldExitAfterPurchases=_shouldExitAfterPurchases - In the implementation block
-(id)initWithClientIdentifier:(id)arg1 ;
-(id)purchaseManager:(id)arg1 purchaseBatchForItems:(id)arg2 ;
-(id)purchaseManager:(id)arg1 purchaseBatchForPurchases:(id)arg2 ;
-(id)initWithClientInterface:(id)arg1 ;
-(BOOL)libraryContainsItemIdentifier:(unsigned long long)arg1 ;
-(BOOL)shouldExitAfterPurchases;
-(void)setShouldExitAfterPurchases:(BOOL)arg1 ;
@end

