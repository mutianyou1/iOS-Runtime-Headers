/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:42 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTNotification.h>

@interface RTWiFiManagerNotificationPowerStatusChanged : RTNotification {

	unsigned long long _powerStatus;

}

@property (nonatomic,readonly) unsigned long long powerStatus;              //@synthesize powerStatus=_powerStatus - In the implementation block
-(unsigned long long)powerStatus;
-(id)initWithPowerStatus:(unsigned long long)arg1 ;
@end
