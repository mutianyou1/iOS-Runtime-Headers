/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:23 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMDaemonCore/IMDCKAttachmentSyncController.h>

@class CKServerChangeToken;

@interface IMDCKInitialAttachmentSyncController : IMDCKAttachmentSyncController {

	CKServerChangeToken* _syncToken;

}

@property (nonatomic,retain) CKServerChangeToken * syncToken;              //@synthesize syncToken=_syncToken - In the implementation block
-(void)dealloc;
-(CKServerChangeToken *)syncToken;
-(void)setSyncToken:(CKServerChangeToken *)arg1 ;
-(id)ckUtilities;
-(BOOL)_deviceConditionsAllowsMessageSyncIgnoreFeatureEnabled:(BOOL)arg1 ;
-(BOOL)_deviceConditionsAllowsMessageSync;
-(BOOL)_deviceConditionsAllowsMessageSyncForCurrentBatchCount:(long long)arg1 maxBatchCount:(long long)arg2 ;
-(BOOL)_kickOffWriteIfNeededForSyncType:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)setLatestSyncToken:(id)arg1 ;
-(id)latestSyncToken;
@end

