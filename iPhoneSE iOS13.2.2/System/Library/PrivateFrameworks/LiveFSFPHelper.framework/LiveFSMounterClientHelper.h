/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:39 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/LiveFSFPHelper.framework/LiveFSFPHelper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LiveFSFPHelper/LiveFSMounterClient.h>
#import <LiveFSFPHelper/LiveFSMounterClientHelper.h>

@protocol LiveFSMounterClientHelper
@required
-(id)LiveMounterClientHelperDestroyDomain:(id)arg1;
-(void)LiveMounterClientHelperSetProviderName:(id)arg1;

@end


@class NSString;

@interface LiveFSMounterClientHelper : NSObject <LiveFSMounterClient, LiveFSMounterClientHelper> {

	NSString* _providerName;

}

@property (retain) NSString * providerName;              //@synthesize providerName=_providerName - In the implementation block
-(NSString *)providerName;
-(void)setProviderName:(NSString *)arg1 ;
-(void)LiveMounterClientCreateDomain:(id)arg1 displayName:(id)arg2 how:(int)arg3 reply:(/*^block*/id)arg4 ;
-(void)LiveMounterClientCreateDomain:(id)arg1 displayName:(id)arg2 how:(int)arg3 storageName:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)LiveMounterClientCreateDomain:(id)arg1 how:(int)arg2 reply:(/*^block*/id)arg3 ;
-(void)LiveMounterClientCleanupDomain:(id)arg1 how:(int)arg2 reply:(/*^block*/id)arg3 ;
-(id)LiveMounterClientHelperDestroyDomain:(id)arg1 ;
-(void)LiveMounterClientHelperSetProviderName:(id)arg1 ;
@end

