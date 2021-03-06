/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:39 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/_SBSUICFUserNotificationContentExtensionHostInterface.h>

@class SBUserNotificationAlert, NSString;

@interface _SBSUICFUserNotificationContentHostViewController : _UIRemoteViewController <_SBSUICFUserNotificationContentExtensionHostInterface> {

	SBUserNotificationAlert* _userNotification;

}

@property (assign,nonatomic,__weak) SBUserNotificationAlert * userNotification;              //@synthesize userNotification=_userNotification - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(void)setUserNotification:(SBUserNotificationAlert *)arg1 ;
-(SBUserNotificationAlert *)userNotification;
-(void)configureWithCompletion:(/*^block*/id)arg1 ;
-(void)invalidateWithCompletion:(/*^block*/id)arg1 ;
@end

