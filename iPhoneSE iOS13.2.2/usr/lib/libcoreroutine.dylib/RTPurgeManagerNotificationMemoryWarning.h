/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:42 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTNotification.h>

@interface RTPurgeManagerNotificationMemoryWarning : RTNotification {

	long long _pressureState;

}

@property (assign,nonatomic) long long pressureState;              //@synthesize pressureState=_pressureState - In the implementation block
-(id)initWithMemoryPressureState:(long long)arg1 ;
-(long long)pressureState;
-(void)setPressureState:(long long)arg1 ;
@end
