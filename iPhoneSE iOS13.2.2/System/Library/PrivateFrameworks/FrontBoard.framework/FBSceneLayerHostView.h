/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FrontBoard-Structs.h>
#import <UIKitCore/UIView.h>

@class FBSceneLayer;

@interface FBSceneLayerHostView : UIView {

	FBSceneLayer* _sceneLayer;

}

@property (nonatomic,readonly) FBSceneLayer * sceneLayer;              //@synthesize sceneLayer=_sceneLayer - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)initWithSceneLayer:(id)arg1 ;
-(FBSceneLayer *)sceneLayer;
@end
