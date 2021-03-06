/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:29 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Home/HFStaticItemProvider.h>

@class HMHome, HMRoom;

@interface HFStatusItemProvider : HFStaticItemProvider {

	HMHome* _home;
	HMRoom* _room;

}

@property (nonatomic,readonly) HMHome * home;              //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) HMRoom * room;              //@synthesize room=_room - In the implementation block
+(id)_statusItemClasses;
+(BOOL)hasStatusItemForServiceType:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HMHome *)home;
-(id)initWithItems:(id)arg1 ;
-(HMRoom *)room;
-(id)initWithHome:(id)arg1 room:(id)arg2 ;
@end

