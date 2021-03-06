/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:43 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface IMSPISuggestionsObject : NSObject {

	NSString* _chatGUID;
	NSString* _displayName;
	NSArray* _participants;

}

@property (readonly) NSString * chatGUID;                 //@synthesize chatGUID=_chatGUID - In the implementation block
@property (readonly) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
@property (readonly) NSArray * participants;              //@synthesize participants=_participants - In the implementation block
-(id)description;
-(NSString *)displayName;
-(NSArray *)participants;
-(NSString *)chatGUID;
-(id)initWithChatGuid:(id)arg1 displayName:(id)arg2 participants:(id)arg3 ;
@end

