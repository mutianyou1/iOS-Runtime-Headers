/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:21 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CDPDaemonConnection;

@interface CDPFollowUpController : NSObject {

	CDPDaemonConnection* _daemonConn;

}
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(BOOL)postFollowUpWithContext:(id)arg1 error:(id*)arg2 ;
-(BOOL)clearFollowUpWithContext:(id)arg1 error:(id*)arg2 ;
@end

