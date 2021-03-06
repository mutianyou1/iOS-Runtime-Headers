/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:58 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/AXFKAFocusRingShapeLayer.h>

@class CAShapeLayer;

@interface AXFKAFocusDoubleRingShapeLayer : AXFKAFocusRingShapeLayer {

	CAShapeLayer* _topBorderLayer;

}

@property (nonatomic,retain) CAShapeLayer * topBorderLayer;              //@synthesize topBorderLayer=_topBorderLayer - In the implementation block
-(id)init;
-(void)setPath:(CGPathRef)arg1 ;
-(CAShapeLayer *)topBorderLayer;
-(void)setTopBorderLayer:(CAShapeLayer *)arg1 ;
-(void)_updateTopLayerPath;
@end

