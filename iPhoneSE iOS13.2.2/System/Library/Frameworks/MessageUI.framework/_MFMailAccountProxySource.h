/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:33 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSLock, NSArray;

@interface _MFMailAccountProxySource : NSObject {

	NSLock* _lock;
	NSArray* _accountProxies;
	int _lastSourceAccountManagementQueried;
	BOOL _registeredForNotifications;
	int _notifyToken;

}
+(id)defaultInstance;
-(id)init;
-(void)dealloc;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_deregisterForNotifications_nts;
-(void)_registerForNotifications_nts;
-(void)_resetAccountsChanged:(BOOL)arg1 ;
-(id)accountProxiesOriginatingBundleID:(id)arg1 sourceAccountManagement:(int)arg2 ;
@end

