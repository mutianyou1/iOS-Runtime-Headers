/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:21 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/CoreAccessories/PlugIns/Transports/IOAccessoryManager.transport/IOAccessoryManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ACCPlatformUSBModePluginProtocol <NSObject,ACCPlatformPluginProtocol>
@required
-(BOOL)setUSBMode:(int)arg1 forConnectionUUID:(id)arg2;
-(BOOL)setUSBMode:(int)arg1 forEndpointUUID:(id)arg2;
-(int)USBModeForConnectionUUID:(id)arg1;
-(int)USBModeForEndpointUUID:(id)arg1;

@end
