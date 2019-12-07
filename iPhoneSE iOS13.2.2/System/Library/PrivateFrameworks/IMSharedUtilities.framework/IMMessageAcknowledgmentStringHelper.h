/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:49 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IMMessageAcknowledgmentStringHelper : NSObject
+(id)longContentTypeStringForPluginBundleID:(id)arg1 pluginDisplayName:(id)arg2 ;
+(BOOL)shouldQuoteContentString:(id)arg1 ;
+(id)messageAcknowledgmentString:(long long)arg1 lowercase:(BOOL)arg2 ;
+(id)longContentTypeStringForContentType:(id)arg1 ;
+(id)generatePreviewStringForMessageAcknowledgmentType:(long long)arg1 acknowledgmentDisplayName:(id)arg2 isFromMe:(BOOL)arg3 messageSummaryInfo:(id)arg4 ;
+(id)generateFormatStringForMessageAcknowledgmentType:(long long)arg1 acknowledgmentDisplayName:(id)arg2 isFromMe:(BOOL)arg3 messageSummaryInfo:(id)arg4 format:(long long*)arg5 ;
+(id)generateBackwardCompatibilityStringForMessageAcknowledgmentType:(long long)arg1 messageSummaryInfo:(id)arg2 ;
+(id)generateBackwardCompatibilityFormatStringForMessageAcknowledgmentType:(long long)arg1 messageSummaryInfo:(id)arg2 format:(long long*)arg3 ;
+(id)generatePreviewStringForMessageAcknowledgmentType:(long long)arg1 acknowledgmentDisplayName:(id)arg2 isFromMe:(BOOL)arg3 messageSummaryInfo:(id)arg4 isGroupMessage:(BOOL)arg5 ;
+(id)generateBackwardCompatibilityStringForMessageAcknowledgmentType:(long long)arg1 messageSummaryInfo:(id)arg2 isGroupMessage:(BOOL)arg3 ;
@end
