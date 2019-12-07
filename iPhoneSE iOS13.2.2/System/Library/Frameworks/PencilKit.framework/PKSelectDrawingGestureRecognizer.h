/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:32 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UILongPressGestureRecognizer.h>

@interface PKSelectDrawingGestureRecognizer : UILongPressGestureRecognizer {

	double _lastFailureTime;

}

@property (assign,nonatomic) double lastFailureTime;              //@synthesize lastFailureTime=_lastFailureTime - In the implementation block
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(double)lastFailureTime;
-(void)setLastFailureTime:(double)arg1 ;
@end
