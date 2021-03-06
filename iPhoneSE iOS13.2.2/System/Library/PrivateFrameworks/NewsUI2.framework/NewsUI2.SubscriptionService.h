/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:04 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCSubscriptionObserving.h>

@interface NewsUI2.SubscriptionService : NSObject <FCSubscriptionObserving> {

	 observers;
	 tagService;
	 notificationController;
	 notificationService;
	 subscriptionController;
	 purchaseController;

}
-(void)subscriptionController:(id)arg1 didAddTags:(id)arg2 changeTags:(id)arg3 moveTags:(id)arg4 removeTags:(id)arg5 subscriptionType:(unsigned long long)arg6 eventInitiationLevel:(long long)arg7 ;
-(void)handlePurchaseAddedNotificationWithNotification:(id)arg1 ;
-(void)handlePurchaseRemovedNotificationWithNotification:(id)arg1 ;
-(id)init;
@end

