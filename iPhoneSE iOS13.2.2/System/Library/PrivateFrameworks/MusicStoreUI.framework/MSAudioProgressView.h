/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:47 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicStoreUI/MusicStoreUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol OS_dispatch_source;
@class UIImageView, NSObject, SUPlayerStatus, MSPieImageView;

@interface MSAudioProgressView : UIView {

	UIImageView* _bufferingImageView;
	NSObject*<OS_dispatch_source> _bufferingTimer;
	BOOL _highlighted;
	SUPlayerStatus* _playerStatus;
	MSPieImageView* _progressView;
	UIImageView* _stopImageView;

}

@property (nonatomic,copy) SUPlayerStatus * playerStatus;                        //@synthesize playerStatus=_playerStatus - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;              //@synthesize highlighted=_highlighted - In the implementation block
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1 ;
-(SUPlayerStatus *)playerStatus;
-(void)setPlayerStatus:(SUPlayerStatus *)arg1 ;
-(id)_newProgressView;
-(void)_cancelBufferingTimer;
-(void)_showBufferingImageView;
-(id)_newBufferingImageView;
@end

