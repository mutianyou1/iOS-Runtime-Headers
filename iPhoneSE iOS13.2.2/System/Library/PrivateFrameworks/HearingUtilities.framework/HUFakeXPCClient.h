/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:12 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HearingCore/HCXPCClient.h>

@interface HUFakeXPCClient : HCXPCClient {

	/*^block*/id _updateBlock;

}
-(BOOL)sendMessage:(id)arg1 withError:(id*)arg2 ;
-(BOOL)wantsUpdatesForIdentifier:(unsigned long long)arg1 ;
-(void)registerMessageBlock:(/*^block*/id)arg1 ;
@end

