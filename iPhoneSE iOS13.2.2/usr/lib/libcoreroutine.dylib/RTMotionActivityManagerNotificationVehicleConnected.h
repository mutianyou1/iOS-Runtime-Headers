/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:42 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTNotification.h>

@class NSString;

@interface RTMotionActivityManagerNotificationVehicleConnected : RTNotification {

	unsigned long long _vehicleConnectedState;
	NSString* _deviceId;

}

@property (nonatomic,readonly) unsigned long long vehicleConnectedState;              //@synthesize vehicleConnectedState=_vehicleConnectedState - In the implementation block
@property (nonatomic,readonly) NSString * deviceId;                                   //@synthesize deviceId=_deviceId - In the implementation block
-(NSString *)deviceId;
-(unsigned long long)vehicleConnectedState;
-(id)initWithVehicleConnectedState:(unsigned long long)arg1 deviceId:(id)arg2 ;
@end
