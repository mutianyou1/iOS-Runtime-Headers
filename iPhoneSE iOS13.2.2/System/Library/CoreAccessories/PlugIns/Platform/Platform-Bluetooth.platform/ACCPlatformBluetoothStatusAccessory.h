/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:21 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/CoreAccessories/PlugIns/Platform/Platform-Bluetooth.platform/Platform-Bluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary;

@interface ACCPlatformBluetoothStatusAccessory : NSObject {

	NSString* _accessoryUID;
	NSMutableDictionary* _componentList;

}

@property (nonatomic,readonly) NSString * accessoryUID;                          //@synthesize accessoryUID=_accessoryUID - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * componentList;              //@synthesize componentList=_componentList - In the implementation block
-(id)description;
-(NSString *)accessoryUID;
-(NSMutableDictionary *)componentList;
-(id)initWithUID:(id)arg1 ;
@end

