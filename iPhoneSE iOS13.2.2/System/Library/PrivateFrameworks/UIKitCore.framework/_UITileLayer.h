/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:07 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <QuartzCore/CALayer.h>

@class UIBezierPath;

@interface _UITileLayer : CALayer {

	UIBezierPath* maskPath;
	AB pendingDeferredOffscreenSetNeedsDisplay;

}
-(void)setNeedsDisplay;
-(void)drawInContext:(CGContextRef)arg1 ;
-(id)actionForKey:(id)arg1 ;
@end

