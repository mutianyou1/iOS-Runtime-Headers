/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:57 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface CKSpotlightSearchResult : NSObject {

	NSString* _chatGUID;
	NSString* _messageGUID;
	NSString* _summary;
	NSDate* _messageDate;

}

@property (nonatomic,copy) NSString * chatGUID;                 //@synthesize chatGUID=_chatGUID - In the implementation block
@property (nonatomic,copy) NSString * messageGUID;              //@synthesize messageGUID=_messageGUID - In the implementation block
@property (nonatomic,copy) NSString * summary;                  //@synthesize summary=_summary - In the implementation block
@property (nonatomic,retain) NSDate * messageDate;              //@synthesize messageDate=_messageDate - In the implementation block
-(long long)compare:(id)arg1 ;
-(NSString *)summary;
-(void)setMessageGUID:(NSString *)arg1 ;
-(NSString *)messageGUID;
-(void)setSummary:(NSString *)arg1 ;
-(NSString *)chatGUID;
-(id)initWithMessageGUID:(id)arg1 chatGUID:(id)arg2 messageTime:(id)arg3 summery:(id)arg4 ;
-(NSDate *)messageDate;
-(void)setMessageDate:(NSDate *)arg1 ;
-(void)setChatGUID:(NSString *)arg1 ;
@end
