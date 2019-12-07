/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:26 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface _MKBezierPathView : UIView {

	UIColor* _fillColor;
	UIColor* _strokeColor;

}
+(Class)layerClass;
+(id)_pathForBalloonRadius:(double)arg1 tailLength:(double)arg2 ;
-(void)setPath:(id)arg1 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)setFillColor:(id)arg1 ;
-(void)setStrokeColor:(id)arg1 width:(double)arg2 ;
-(id)initWithBalloonRadius:(double)arg1 tailLength:(double)arg2 ;
-(id)initWithOvalInSize:(CGSize)arg1 ;
@end
