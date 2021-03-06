/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:14 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSWPiOSCanvasViewController.h>

@class UIGestureRecognizer, TSAInteractiveCanvasController;

@interface TIACanvasViewController : TSWPiOSCanvasViewController

@property (assign) UIGestureRecognizer * hyperlinkGestureRecognizer; 
@property (nonatomic,readonly) TSAInteractiveCanvasController * interactiveCanvasController; 
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(TSAInteractiveCanvasController *)interactiveCanvasController;
-(void)setUpGestureRecognizers;
-(id)commonGestureRecognizers;
-(UIGestureRecognizer *)hyperlinkGestureRecognizer;
-(BOOL)wantsHyperlinkGestureRecognizer;
-(id)p_LocalGestureRecognizers;
-(void)setHyperlinkGestureRecognizer:(UIGestureRecognizer *)arg1 ;
@end

