/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:26 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NEFilterProvider.h>

@interface NEFilterPacketProvider : NEFilterProvider {

	/*^block*/id _packetHandler;

}

@property (copy) id packetHandler;              //@synthesize packetHandler=_packetHandler - In the implementation block
-(void)setPacketHandler:(id)arg1 ;
-(id)packetHandler;
-(void)allowPacket:(id)arg1 ;
-(id)delayCurrentPacket:(id)arg1 ;
@end

