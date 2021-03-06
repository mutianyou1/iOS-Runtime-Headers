/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:00 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUIFoundation/PassKitUIFoundation-Structs.h>
#import <PassKitCore/PKMicaLayer.h>

@protocol PKCheckGlyphLayerDelegate;
@class CAShapeLayer, CAGradientLayer;

@interface PKCheckGlyphLayer : PKMicaLayer {

	CGColorRef _primaryColor;
	CAShapeLayer* _shapeLayer;
	CAGradientLayer* _maskLayer;
	BOOL _covered;
	CATransform3D _uncoveredTransform;
	CATransform3D _coveredTransform;
	BOOL _revealed;
	id<PKCheckGlyphLayerDelegate> _checkGlyphDelegate;

}

@property (assign,nonatomic,__weak) id<PKCheckGlyphLayerDelegate> checkGlyphDelegate;              //@synthesize checkGlyphDelegate=_checkGlyphDelegate - In the implementation block
@property (assign,nonatomic) BOOL revealed;                                                        //@synthesize revealed=_revealed - In the implementation block
-(id)init;
-(void)dealloc;
-(CGColorRef)primaryColor;
-(id)initWithFrame:(CGRect)arg1 package:(id)arg2 ;
-(double)setRevealed:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setRevealed:(BOOL)arg1 ;
-(void)setPrimaryColor:(CGColorRef)arg1 animated:(BOOL)arg2 ;
-(void)_createMask;
-(BOOL)revealed;
-(double)_updateCovered:(BOOL)arg1 ;
-(double)setCovered:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id<PKCheckGlyphLayerDelegate>)checkGlyphDelegate;
-(void)setCheckGlyphDelegate:(id<PKCheckGlyphLayerDelegate>)arg1 ;
@end

