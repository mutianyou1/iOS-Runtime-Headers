/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:07 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConversationKit/ConversationKit-Structs.h>
#import <UIKitCore/UIView.h>

@class _TtC15ConversationKit33ParticipantViewLabelContainerView;

@interface ConversationKit.ParticipantInfoView : UIView {

	 gradientView;
	 nameLabel;
	 shutterButton;
	 expandButton;
	 isSmall;
	 isExpanded;
	 customCornerRadius;
	 isMomentsAvailable;
	 delegate;

}

@property (readonly,nonatomic) _TtC15ConversationKit33ParticipantViewLabelContainerView * nameLabel; 
@property (assign,nonatomic) BOOL isMomentsAvailable; 
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(_TtC15ConversationKit33ParticipantViewLabelContainerView *)nameLabel;
-(BOOL)isMomentsAvailable;
-(void)didTapShutterButton;
-(void)didTapExpandButton;
-(void)setIsMomentsAvailable:(BOOL)arg1 ;
@end
