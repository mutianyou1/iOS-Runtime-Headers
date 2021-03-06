/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:02 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SUDownloadPolicyFactory : NSObject
+(int)downloadPolicyTypeForClass:(id)arg1 ;
+(id)downloadPolicyForType:(int)arg1 forDescriptor:(id)arg2 ;
+(id)userDownloadPolicyForDescriptor:(id)arg1 existingPolicy:(id)arg2 ;
+(id)_userDownloadPolicyFromCurrentPolicy:(id)arg1 descriptor:(id)arg2 networkMonitor:(id)arg3 allowCellularOverride:(BOOL)arg4 ;
+(id)userDownloadPolicyForDescriptor:(id)arg1 existingPolicy:(id)arg2 networkMonitor:(id)arg3 allowCellularOverride:(BOOL)arg4 ;
+(id)userDownloadPolicyForDescriptor:(id)arg1 existingPolicy:(id)arg2 allowCellularOverride:(BOOL)arg3 ;
+(id)userDownloadPolicyForDescriptor:(id)arg1 ;
@end

