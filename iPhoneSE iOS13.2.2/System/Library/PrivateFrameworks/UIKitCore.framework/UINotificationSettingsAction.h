/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:53 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSAction.h>

@class UNNotification;

@interface UINotificationSettingsAction : BSAction {

	UNNotification* _notification;

}

@property (nonatomic,copy,readonly) UNNotification * notification;              //@synthesize notification=_notification - In the implementation block
-(UNNotification *)notification;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(long long)UIActionType;
-(id)initWithNotification:(id)arg1 ;
@end

