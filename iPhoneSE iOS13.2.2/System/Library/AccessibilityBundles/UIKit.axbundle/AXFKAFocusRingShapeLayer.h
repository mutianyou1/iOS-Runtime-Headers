/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:58 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <QuartzCore/CAShapeLayer.h>

@class CAShapeLayer;

@interface AXFKAFocusRingShapeLayer : CAShapeLayer {

	CAShapeLayer* _bottomBorderLayer;

}

@property (nonatomic,retain) CAShapeLayer * bottomBorderLayer;              //@synthesize bottomBorderLayer=_bottomBorderLayer - In the implementation block
+(id)focusLayerForUserInterfaceStyle:(long long)arg1 ;
+(id)parentLayerForUserInterfaceStyle:(long long)arg1 ;
+(id)selectedLayerForUserInterfaceStyle:(long long)arg1 ;
+(id)selectedParentLayerForUserInterfaceStyle:(long long)arg1 ;
+(id)parentLayer;
+(id)defaultFilter;
+(id)focusLayer;
+(id)vibrantFilter;
+(id)springBoardFilter;
+(id)selectedLayer;
+(id)selectedParentLayer;
-(id)init;
-(void)setPath:(CGPathRef)arg1 ;
-(CAShapeLayer *)bottomBorderLayer;
-(void)setBottomBorderLayer:(CAShapeLayer *)arg1 ;
-(void)_updateBottomLayerPath;
@end

