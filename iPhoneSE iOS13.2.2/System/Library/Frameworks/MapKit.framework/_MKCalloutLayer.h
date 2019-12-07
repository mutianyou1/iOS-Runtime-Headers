/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:23 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/_MKResizingLayer.h>

@class CALayer, UIColor;

@interface _MKCalloutLayer : _MKResizingLayer {

	CGImageRef _contentImage;
	CALayer* _leftLayer;
	CALayer* _rightLayer;
	long long _arrowPosition;
	double _arrowOffset;
	UIColor* _fillColor;
	UIColor* _strokeColor;

}

@property (assign,nonatomic) long long arrowPosition;              //@synthesize arrowPosition=_arrowPosition - In the implementation block
@property (assign,nonatomic) double arrowOffset;                   //@synthesize arrowOffset=_arrowOffset - In the implementation block
@property (nonatomic,retain) UIColor * fillColor;                  //@synthesize fillColor=_fillColor - In the implementation block
@property (nonatomic,retain) UIColor * strokeColor;                //@synthesize strokeColor=_strokeColor - In the implementation block
-(id)init;
-(void)dealloc;
-(CGSize)_contentSize;
-(UIColor *)fillColor;
-(void)setContentsScale:(double)arg1 ;
-(void)setFillColor:(UIColor *)arg1 ;
-(double)arrowOffset;
-(void)setArrowOffset:(double)arg1 ;
-(void)setStrokeColor:(UIColor *)arg1 ;
-(void)layoutSublayers;
-(UIColor *)strokeColor;
-(void)setArrowPosition:(long long)arg1 ;
-(CGImageRef)_newContentImage;
-(long long)arrowPosition;
@end
