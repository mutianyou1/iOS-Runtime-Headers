/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:30 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface DNDSLifetimeMonitorResult : NSObject {

	NSArray* _activeUUIDs;
	NSArray* _expiredUUIDs;

}

@property (nonatomic,copy,readonly) NSArray * activeUUIDs;               //@synthesize activeUUIDs=_activeUUIDs - In the implementation block
@property (nonatomic,copy,readonly) NSArray * expiredUUIDs;              //@synthesize expiredUUIDs=_expiredUUIDs - In the implementation block
-(id)initWithActiveUUIDs:(id)arg1 expiredUUIDs:(id)arg2 ;
-(NSArray *)activeUUIDs;
-(NSArray *)expiredUUIDs;
@end

