/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:18 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Accounts/Notification/AMSAccountNotificationPlugin.bundle/AMSAccountNotificationPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AMSTask.h>

@class ACAccount;

@interface AMSLogoutTask : AMSTask {

	ACAccount* _account;

}

@property (nonatomic,readonly) ACAccount * account;              //@synthesize account=_account - In the implementation block
-(ACAccount *)account;
-(id)initWithAccount:(id)arg1 ;
-(id)logout;
@end

