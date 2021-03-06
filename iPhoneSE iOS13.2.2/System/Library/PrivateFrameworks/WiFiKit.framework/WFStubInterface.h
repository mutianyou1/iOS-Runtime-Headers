/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:11 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiKit/WFInterface.h>

@class WFNetworkScanRecord;

@interface WFStubInterface : WFInterface {

	BOOL _currentNetworkIsDirected;
	BOOL _ipv4SelfAssigned;
	BOOL _hasNoGatewayIP;
	WFNetworkScanRecord* _currentNetwork;

}

@property (assign) BOOL currentNetworkIsDirected;              //@synthesize currentNetworkIsDirected=_currentNetworkIsDirected - In the implementation block
@property (assign) BOOL ipv4SelfAssigned;                      //@synthesize ipv4SelfAssigned=_ipv4SelfAssigned - In the implementation block
@property (assign) BOOL hasNoGatewayIP;                        //@synthesize hasNoGatewayIP=_hasNoGatewayIP - In the implementation block
-(void)setCurrentNetwork:(id)arg1 ;
-(id)currentNetwork;
-(id)interfaceName;
-(BOOL)ipv4SelfAssigned;
-(void)setIpv4SelfAssigned:(BOOL)arg1 ;
-(BOOL)hasNoGatewayIP;
-(void)setHasNoGatewayIP:(BOOL)arg1 ;
-(BOOL)currentNetworkIsDirected;
-(void)setCurrentNetworkIsDirected:(BOOL)arg1 ;
@end

