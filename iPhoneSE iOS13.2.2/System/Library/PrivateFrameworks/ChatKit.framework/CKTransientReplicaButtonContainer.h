/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:58 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, CALayer;

@interface CKTransientReplicaButtonContainer : UIView {

	UIView* _sendButtonCircle;
	UIView* _cancelButtonCircle;
	CALayer* _sendButtonGlyphLayer;
	CALayer* _cancelButtonGlyphLayer;

}

@property (nonatomic,readonly) UIView * sendButtonCircle;                     //@synthesize sendButtonCircle=_sendButtonCircle - In the implementation block
@property (nonatomic,readonly) UIView * cancelButtonCircle;                   //@synthesize cancelButtonCircle=_cancelButtonCircle - In the implementation block
@property (nonatomic,readonly) CALayer * sendButtonGlyphLayer;                //@synthesize sendButtonGlyphLayer=_sendButtonGlyphLayer - In the implementation block
@property (nonatomic,readonly) CALayer * cancelButtonGlyphLayer;              //@synthesize cancelButtonGlyphLayer=_cancelButtonGlyphLayer - In the implementation block
-(id)initWithFrame:(CGRect)arg1 hasDarkVibrancy:(BOOL)arg2 color:(char)arg3 ;
-(UIView *)cancelButtonCircle;
-(CALayer *)cancelButtonGlyphLayer;
-(UIView *)sendButtonCircle;
-(CALayer *)sendButtonGlyphLayer;
-(id)_glyphLayerForButtonAnimationWithGlyphName:(id)arg1 ;
@end
