/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:57 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/CKAssociatedMessageTranscriptCell.h>

@class CKAcknowledgmentBalloonView;

@interface CKAggregateAcknowledgmentTranscriptCell : CKAssociatedMessageTranscriptCell {

	BOOL _parentMessageIsFromMe;

}

@property (nonatomic,retain) CKAcknowledgmentBalloonView * balloonView; 
@property (assign,nonatomic) BOOL parentMessageIsFromMe;                             //@synthesize parentMessageIsFromMe=_parentMessageIsFromMe - In the implementation block
-(void)prepareForReuse;
-(CKAcknowledgmentBalloonView *)balloonView;
-(void)setBalloonView:(CKAcknowledgmentBalloonView *)arg1 ;
-(void)layoutSubviewsForAlignmentContents;
-(void)configureForChatItem:(id)arg1 ;
-(BOOL)parentMessageIsFromMe;
-(void)performInsertion:(/*^block*/id)arg1 ;
-(void)setParentMessageIsFromMe:(BOOL)arg1 ;
@end

