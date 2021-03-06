/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:16 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/FMFCore.framework/FMFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/APSConnectionDelegate.h>

@interface FMFCore.FMAPSConnectionHandler : NSObject <APSConnectionDelegate> {

	 delegate;
	 topic;
	 preferenceDomain;
	 connectionQueue;
	 connection;
	 topicAPSToken;
	 publicAPSToken;

}
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4 ;
-(void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3 ;
-(id)init;
-(void)dealloc;
@end

