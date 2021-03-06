/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:10 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/RemoteCoreML.framework/RemoteCoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface _MLNetworkOptions : NSObject {

	NSMutableDictionary* _networkOptions;
	long long _receiveTimeout;

}

@property (nonatomic,readonly) NSMutableDictionary * networkOptions;              //@synthesize networkOptions=_networkOptions - In the implementation block
@property (nonatomic,readonly) long long receiveTimeout;                          //@synthesize receiveTimeout=_receiveTimeout - In the implementation block
-(id)initWithOptions:(id)arg1 ;
-(const char*)port;
-(const char*)localPort;
-(unsigned long long)family;
-(BOOL)useAWDL;
-(const char*)psk;
-(BOOL)useUDP;
-(BOOL)useTLS;
-(BOOL)useBonjour;
-(const char*)networkNameIdentifier;
-(const char*)localAddr;
-(long long)receiveTimeoutValue;
-(NSMutableDictionary *)networkOptions;
-(long long)receiveTimeout;
@end

