/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:49 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IMSpamFilterHelper : NSObject
+(BOOL)isInternationalSpamFilteringEnabled;
+(BOOL)receiverIsCandidateForSpamFiltering:(id)arg1 ;
+(BOOL)senderIsCandidateForSMSDowngrade:(id)arg1 ;
+(BOOL)isFilterUnknownSendersEnabled;
+(BOOL)accountRegionIsCandidateForSpamFiltering:(id)arg1 ;
+(BOOL)senderIsKnownContact:(id)arg1 ;
+(BOOL)senderIsCandidateForBlackhole:(id)arg1 withReceiver:(id)arg2 ;
+(BOOL)anyParticipantIsKnownContact:(id)arg1 ;
+(id)mapID:(id)arg1 usingKey:(id)arg2 ;
+(BOOL)isChineseSpamFilteringEnabled;
+(id)_cnRecordForAliases:(id)arg1 ;
+(BOOL)shouldDowngradeToRecipient:(id)arg1 fromSender:(id)arg2 ifCapableOfSMS:(BOOL)arg3 withConversationDowngradeState:(BOOL)arg4 andConversationHistoryState:(BOOL)arg5 ;
+(BOOL)shouldShowSMSWarningForSender:(id)arg1 forRecipient:(id)arg2 withConversationHistory:(BOOL)arg3 ;
+(BOOL)shouldBlackholeMessageFromSender:(id)arg1 toRecipient:(id)arg2 forRegion:(id)arg3 givenHistory:(BOOL)arg4 ;
+(BOOL)shouldBlackholeGroupMessageFromSender:(id)arg1 toRecipient:(id)arg2 otherRecipients:(id)arg3 forRegion:(id)arg4 givenHistory:(BOOL)arg5 ;
+(id)internationalSpamFilterLearnMoreURL;
+(BOOL)repliedToChat:(id)arg1 ;
+(BOOL)receivedResponseForChat:(id)arg1 ;
@end

