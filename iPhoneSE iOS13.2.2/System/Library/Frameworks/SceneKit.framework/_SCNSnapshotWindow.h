/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:04 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <UIKitCore/UIWindow.h>

@interface _SCNSnapshotWindow : UIWindow
-(void)dealloc;
-(void)_setFirstResponder:(id)arg1 ;
-(id)_hitTest:(CGPoint)arg1 withEvent:(id)arg2 windowServerHitTestWindow:(id)arg3 ;
-(BOOL)_canBecomeKeyWindow;
-(BOOL)_isSettingFirstResponder;
-(CGPoint)warpPoint:(CGPoint)arg1 ;
-(id)scnView;
-(CGPoint)_warpPoint:(CGPoint)arg1 outOfBounds:(BOOL*)arg2 ;
@end
