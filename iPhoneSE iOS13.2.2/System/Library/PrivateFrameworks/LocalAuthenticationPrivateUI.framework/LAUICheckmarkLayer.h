/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:39 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/LocalAuthenticationPrivateUI.framework/LocalAuthenticationPrivateUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LocalAuthenticationPrivateUI/LocalAuthenticationPrivateUI-Structs.h>
#import <QuartzCore/CALayer.h>

@class CAShapeLayer, UIColor;

@interface LAUICheckmarkLayer : CALayer {

	CAShapeLayer* _shapeLayer;
	vector<CAShapeLayer *, std::__1::allocator<CAShapeLayer *> >* _transientShapeLayers;
	BOOL _animating;
	unsigned _animationIndex;
	double _lineWidth;
	vector<LAUI_CA_utilities::animation_completion_handler_container, std::__1::allocator<LAUI_CA_utilities::animation_completion_handler_container> >* _completions;
	BOOL _revealed;
	double _lineWidthScale;
	UIColor* _primaryColor;

}

@property (assign,nonatomic) double lineWidthScale;                          //@synthesize lineWidthScale=_lineWidthScale - In the implementation block
@property (nonatomic,copy,readonly) UIColor * primaryColor;                  //@synthesize primaryColor=_primaryColor - In the implementation block
@property (getter=isRevealed,nonatomic,readonly) BOOL revealed;              //@synthesize revealed=_revealed - In the implementation block
@property (nonatomic,readonly) CGSize aspectSize; 
-(id)init;
-(void)dealloc;
-(void)setPrimaryColor:(UIColor *)arg1 ;
-(UIColor *)primaryColor;
-(void)layoutSublayers;
-(void)setRevealed:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setPrimaryColor:(UIColor*)arg1 animated:(BOOL)arg2 ;
-(BOOL)isRevealed;
-(void)setLineWidthScale:(double)arg1 ;
-(double)lineWidthScale;
-(void)_updateRevealedAnimated:(BOOL)arg1 ;
-(void)setRevealed:(BOOL)arg1 animated:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_executeCompletions:(BOOL)arg1 ;
-(void)_animationsDidResolve;
-(CGSize)aspectSize;
@end
