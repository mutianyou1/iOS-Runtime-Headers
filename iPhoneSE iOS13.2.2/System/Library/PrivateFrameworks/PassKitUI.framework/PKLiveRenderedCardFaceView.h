/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:37 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PK3DLiveCardViewDelegate.h>

@class PKPass, PK3DCardView, UIImageView;

@interface PKLiveRenderedCardFaceView : UIView <PK3DLiveCardViewDelegate> {

	PKPass* _pass;
	PK3DCardView* _cardView;
	UIImageView* _logoImageView;
	BOOL _invalidated;

}
-(void)dealloc;
-(void)invalidate;
-(void)layoutSubviews;
-(void)setMotionEnabled:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 pass:(id)arg2 ;
-(void)sceneDidRenderAtTime:(double)arg1 ;
@end

