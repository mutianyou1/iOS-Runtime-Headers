/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:33 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HMBulletinBoardNotification.h>

@class NSUUID, HMCameraUserSettings;

@interface HMCameraBulletinBoardSmartNotification : HMBulletinBoardNotification {

	NSUUID* _targetUUID;
	HMCameraUserSettings* _cameraUserSettings;

}

@property (__weak) HMCameraUserSettings * cameraUserSettings;                   //@synthesize cameraUserSettings=_cameraUserSettings - In the implementation block
@property (readonly) unsigned long long notificationEventTriggers; 
+(id)notificationEventTriggersInPredicate:(id)arg1 ;
+(id)predicateForCameraSignificantEvent:(unsigned long long)arg1 ;
-(void)commitWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)targetUUID;
-(void)setCameraUserSettings:(HMCameraUserSettings *)arg1 ;
-(HMCameraUserSettings *)cameraUserSettings;
-(id)initWithBulletinBoardNotification:(id)arg1 ;
-(void)__configureWithContext:(id)arg1 cameraUserSettings:(id)arg2 ;
-(unsigned long long)notificationEventTriggers;
@end

