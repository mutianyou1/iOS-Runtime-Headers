/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:35 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UMUserSwitchManagement <NSObject>
@required
-(void)switchToLoginUserWithCompletionHandler:(/*^block*/id)arg1;
-(void)switchToLoginUserWithError:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)logoutToLoginSessionWithCompletionHandler:(/*^block*/id)arg1;
-(void)directSwitchToUser:(id)arg1 passcodeData:(id)arg2 context:(id)arg3 preferences:(id)arg4 completionHandler:(/*^block*/id)arg5;
-(void)loginUICheckInWithCompletionHandler:(/*^block*/id)arg1;
-(void)registerUserSwitchStakeHolder:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)registerUserSyncStakeholder:(id)arg1 withMachServiceName:(id)arg2;
-(void)unregisterStakeHolder:(id)arg1 status:(unsigned long long)arg2 reason:(id)arg3;
-(void)terminateSyncWithCompletionHandler:(/*^block*/id)arg1;
-(void)resumeSync;
-(void)switchToUser:(id)arg1 passcodeData:(id)arg2 context:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)registerUserSwitchStakeHolder:(id)arg1;

@end
