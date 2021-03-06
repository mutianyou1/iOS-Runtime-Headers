/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:02 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SoftwareUpdateServices/SUInstallationConstraintMonitorBase.h>

@class TUCallCenter;

@interface SUInstallationConstraintMonitorPhoneCalls : SUInstallationConstraintMonitorBase {

	TUCallCenter* _queue_callCenter;
	BOOL _queue_satisfied;
	BOOL _inSpringBoard;

}
-(void)dealloc;
-(unsigned long long)unsatisfiedConstraints;
-(id)initOnQueue:(id)arg1 withDownload:(id)arg2 ;
-(id)initOnQueue:(id)arg1 withDownload:(id)arg2 callCenter:(id)arg3 inSpringBoard:(BOOL)arg4 onExistingPhoneCall:(BOOL)arg5 ;
-(void)_callStatusChanged;
-(void)_queue_noteOnExistingPhoneCallDidChange:(BOOL)arg1 ;
@end

