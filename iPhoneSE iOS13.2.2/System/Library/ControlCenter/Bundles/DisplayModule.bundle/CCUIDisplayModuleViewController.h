/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:09 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/ControlCenter/Bundles/DisplayModule.bundle/DisplayModule
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DisplayModule/DisplayModule-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CCUIGroupRendering.h>
#import <libobjc.A.dylib/CCUIContentModuleContentViewController.h>

@protocol CCUIDisplayModuleViewControllerDelegate;
@class NSArray, CALayer, UIViewPropertyAnimator, CCUIContinuousSliderView, NSString;

@interface CCUIDisplayModuleViewController : UIViewController <CCUIGroupRendering, CCUIContentModuleContentViewController> {

	BKSDisplayBrightnessTransactionRef _brightnessTransaction;
	BOOL _expanded;
	id<CCUIDisplayModuleViewControllerDelegate> _delegate;
	CCUIContinuousSliderView* _sliderView;

}

@property (nonatomic,retain) CCUIContinuousSliderView * sliderView;                                      //@synthesize sliderView=_sliderView - In the implementation block
@property (assign,nonatomic,__weak) id<CCUIDisplayModuleViewControllerDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) float currentBrightness; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isGroupRenderingRequired,nonatomic,readonly) BOOL groupRenderingRequired; 
@property (nonatomic,readonly) NSArray * punchOutRootLayers; 
@property (nonatomic,readonly) CALayer * punchOutRootLayer; 
@property (nonatomic,readonly) double preferredExpandedContentHeight; 
@property (nonatomic,readonly) double preferredExpandedContentWidth; 
@property (nonatomic,readonly) double preferredExpandedContinuousCornerRadius; 
@property (nonatomic,readonly) BOOL providesOwnPlatter; 
@property (nonatomic,readonly) UIViewPropertyAnimator * customAnimator; 
-(void)dealloc;
-(id<CCUIDisplayModuleViewControllerDelegate>)delegate;
-(void)setDelegate:(id<CCUIDisplayModuleViewControllerDelegate>)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)_sliderValueDidChange:(id)arg1 ;
-(void)_setBacklightLevel:(float)arg1 ;
-(float)_backlightLevel;
-(id)viewForTouchContinuation;
-(void)setSliderView:(CCUIContinuousSliderView *)arg1 ;
-(CCUIContinuousSliderView *)sliderView;
-(void)setGlyphPackageDescription:(id)arg1 ;
-(void)setGlyphState:(id)arg1 ;
-(NSArray *)punchOutRootLayers;
-(BOOL)isGroupRenderingRequired;
-(double)preferredExpandedContentHeight;
-(void)willTransitionToExpandedContentMode:(BOOL)arg1 ;
-(double)preferredExpandedContentWidth;
-(double)preferredExpandedContinuousCornerRadius;
-(float)currentBrightness;
-(void)_sliderEditingDidBegin:(id)arg1 ;
-(void)_sliderEditingDidEnd:(id)arg1 ;
-(void)_updateWithCurrentBrightnessAnimated:(BOOL)arg1 ;
-(void)_noteScreenBrightnessDidChange:(id)arg1 ;
@end

