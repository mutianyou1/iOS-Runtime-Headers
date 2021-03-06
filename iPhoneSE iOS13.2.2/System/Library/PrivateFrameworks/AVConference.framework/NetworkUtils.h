/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:55 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NetworkUtils : NSObject
+(id)encryptionInfoForKey:(unsigned long long)arg1 ;
+(int)socketWithIPAddress:(id)arg1 srcPort:(short)arg2 shouldConnect:(BOOL)arg3 error:(id*)arg4 ;
+(int)socketWithIPAddress:(id)arg1 srcPort:(short)arg2 error:(id*)arg3 ;
+(id)newEncryptionInfoWithMasterKeyIndex:(id)arg1 ;
+(int)connectedSocketWithIPAddress:(id)arg1 srcPort:(short)arg2 error:(id*)arg3 ;
+(id)newRTPSocketDictionary:(BOOL)arg1 rtpSourcePort:(short)arg2 ;
+(id)securityKeyMaterialWithMasterKeyIndex:(id)arg1 ;
@end

