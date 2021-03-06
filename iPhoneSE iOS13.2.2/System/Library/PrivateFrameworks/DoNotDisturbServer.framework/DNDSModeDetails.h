/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:30 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface DNDSModeDetails : NSObject <NSCopying> {

	unsigned long long _interruptionSuppression;

}

@property (nonatomic,readonly) unsigned long long interruptionSuppression;              //@synthesize interruptionSuppression=_interruptionSuppression - In the implementation block
+(id)detailsForInactiveDoNotDisturb;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)interruptionSuppression;
-(id)restrictedDetailsWithDetails:(id)arg1 ;
-(id)initWithInterruptionSuppression:(unsigned long long)arg1 ;
@end

