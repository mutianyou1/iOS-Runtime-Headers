/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:31 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _DKCKError : NSObject
+(BOOL)isShouldDeferError:(id)arg1 ;
+(BOOL)isUnrecoverableDecryptionError:(id)arg1 ;
+(id)zoneIDsWithUnrecoverableDecryptionError:(id)arg1 ;
+(id)errorMinusUnrecoverableDecryptionErrorsFromPartialError:(id)arg1 ;
+(BOOL)isIgnorableError:(id)arg1 ;
+(BOOL)isChangeTokenExpiredError:(id)arg1 ;
+(BOOL)isOperationCancelledError:(id)arg1 ;
+(BOOL)isPartialError:(id)arg1 ;
+(id)_allPartialErrorsFromError:(id)arg1 ;
+(void)_populateZoneIDs:(id)arg1 fromUnrecoverableDecryptionError:(id)arg2 zoneID:(id)arg3 ;
+(BOOL)isManateeNotAvailableError:(id)arg1 ;
+(BOOL)isKeychainSyncingInProgressError:(id)arg1 ;
+(BOOL)isPCSError:(id)arg1 ;
+(BOOL)isNetworkUnavailableError:(id)arg1 ;
@end

