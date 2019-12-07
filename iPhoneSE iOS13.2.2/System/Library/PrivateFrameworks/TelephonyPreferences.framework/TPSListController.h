/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:24 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class CTXPCServiceSubscriptionContext, NSOrderedSet;

@interface TPSListController : PSListController {

	CTXPCServiceSubscriptionContext* _subscriptionContext;
	NSOrderedSet* _subscriptions;

}

@property (nonatomic,retain) CTXPCServiceSubscriptionContext * subscriptionContext;              //@synthesize subscriptionContext=_subscriptionContext - In the implementation block
@property (nonatomic,copy) NSOrderedSet * subscriptions;                                         //@synthesize subscriptions=_subscriptions - In the implementation block
-(NSOrderedSet *)subscriptions;
-(void)setSubscriptions:(NSOrderedSet *)arg1 ;
-(void)setSpecifier:(id)arg1 ;
-(CTXPCServiceSubscriptionContext *)subscriptionContext;
-(void)setSubscriptionContext:(CTXPCServiceSubscriptionContext *)arg1 ;
@end
