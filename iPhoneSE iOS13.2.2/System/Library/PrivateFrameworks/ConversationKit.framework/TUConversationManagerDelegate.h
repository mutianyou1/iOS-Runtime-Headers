/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:07 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TUConversationManagerDelegate <NSObject>
@optional
-(void)conversationsChangedForConversationManager:(id)arg1;
-(void)conversationManager:(id)arg1 stateChangedForConversation:(id)arg2;
-(void)conversationManager:(id)arg1 localVideoToggledForConversation:(id)arg2;
-(void)conversationManager:(id)arg1 remoteMembersChangedForConversation:(id)arg2;
-(void)conversationManager:(id)arg1 activeRemoteParticipantsChangedForConversation:(id)arg2;
-(void)conversationManager:(id)arg1 removedActiveConversation:(id)arg2;
-(void)serverDisconnectedForConversationManager:(id)arg1;

@end

