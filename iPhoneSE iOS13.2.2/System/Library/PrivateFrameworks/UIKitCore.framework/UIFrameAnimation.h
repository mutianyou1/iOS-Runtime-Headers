/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:43 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIAnimation.h>

@interface UIFrameAnimation : UIAnimation {

	CGRect _startFrame;
	CGRect _endFrame;
	int _fieldsToChange;

}
-(id)initWithTarget:(id)arg1 ;
-(void)setProgress:(float)arg1 ;
-(void)setStartFrame:(CGRect)arg1 ;
-(void)setEndFrame:(CGRect)arg1 ;
-(CGRect)endFrame;
-(void)setSignificantRectFields:(int)arg1 ;
@end
