/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:11 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextLinkInteraction.h>

@protocol TSDCanvasLayerHosting, UITextLinkInteraction;
@class TSDInteractiveCanvasController, TSKScrollView, TSDCanvasLayer;

@interface TSDCanvasView : UIView <UITextLinkInteraction> {

	TSDInteractiveCanvasController* mController;
	id<TSDCanvasLayerHosting> mLayerHost;
	id<UITextLinkInteraction> mHyperLinkDelegate;

}

@property (assign,nonatomic) TSDInteractiveCanvasController * controller; 
@property (assign,nonatomic) id<TSDCanvasLayerHosting> layerHost; 
@property (assign,nonatomic) id<UITextLinkInteraction> hyperLinkDelegate; 
@property (readonly) TSKScrollView * enclosingScrollView; 
@property (nonatomic,readonly) TSDCanvasLayer * canvasLayer; 
@property (nonatomic,readonly) TSDCanvasView * rootCanvasView; 
+(Class)layerClass;
-(BOOL)_accessibilitySpeakThisIgnoresAccessibilityElementStatus;
-(BOOL)_accessibilityIsSpeakThisElement;
-(id)_accessibilitySpeakThisString;
-(id)_accessibilityTextRectsForSpeakThisStringRange:(NSRange)arg1 ;
-(BOOL)_isInPreviewPlatter;
-(id)_speakThisElementStrings;
-(id)_speakThisElements;
-(void)teardown;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(void)setController:(TSDInteractiveCanvasController *)arg1 ;
-(TSDInteractiveCanvasController *)controller;
-(void)cancelInteractionWithLink;
-(BOOL)mightHaveLinks;
-(void)tapLinkAtPoint:(CGPoint)arg1 ;
-(BOOL)isInteractingWithLink;
-(void)startInteractionWithLinkAtPoint:(CGPoint)arg1 ;
-(void)updateInteractionWithLinkAtPoint:(CGPoint)arg1 ;
-(void)validateInteractionWithLinkAtPoint:(CGPoint)arg1 ;
-(void)startLongInteractionWithLinkAtPoint:(CGPoint)arg1 ;
-(BOOL)willInteractWithLinkAtPoint:(CGPoint)arg1 ;
-(id<TSDCanvasLayerHosting>)layerHost;
-(TSKScrollView *)enclosingScrollView;
-(TSDCanvasLayer *)canvasLayer;
-(TSDCanvasView *)rootCanvasView;
-(void)setLayerHost:(id<TSDCanvasLayerHosting>)arg1 ;
-(id<UITextLinkInteraction>)hyperLinkDelegate;
-(void)setHyperLinkDelegate:(id<UITextLinkInteraction>)arg1 ;
@end
