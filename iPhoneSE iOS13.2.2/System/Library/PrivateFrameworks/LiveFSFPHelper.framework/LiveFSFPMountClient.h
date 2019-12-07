/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:39 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/LiveFSFPHelper.framework/LiveFSFPHelper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LiveFS/LiveFSMountClient.h>

@interface LiveFSFPMountClient : LiveFSMountClient
+(id)newClientForProvider:(id)arg1 ;
+(id)locallyBuiltDomainStorageSuffix;
+(id)locallyBuildFPDomain:(id)arg1 displayName:(id)arg2 provider:(id)arg3 how:(int)arg4 ;
+(id)locallyDestroyFPDomain:(id)arg1 provider:(id)arg2 ;
-(id)fixupConnectionFor:(id)arg1 ;
-(id)mountVolume:(id)arg1 displayName:(id)arg2 provider:(id)arg3 domainError:(id)arg4 on:(id)arg5 how:(int)arg6 ;
-(id)mountVolume:(id)arg1 displayName:(id)arg2 provider:(id)arg3 on:(id)arg4 how:(int)arg5 ;
-(id)mountVolume:(id)arg1 provider:(id)arg2 on:(id)arg3 how:(int)arg4 ;
@end
