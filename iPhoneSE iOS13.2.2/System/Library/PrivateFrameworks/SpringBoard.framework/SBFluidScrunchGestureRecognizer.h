/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:37 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTouchTemplateGestureRecognizer.h>
#import <libobjc.A.dylib/SBGestureRecognizerTouchHistoryProviding.h>
#import <libobjc.A.dylib/SBGestureRecognizerPanGestureProviding.h>

@class SBFluidSwitcherViewController, SBTouchHistory, NSString;

@interface SBFluidScrunchGestureRecognizer : SBTouchTemplateGestureRecognizer <SBGestureRecognizerTouchHistoryProviding, SBGestureRecognizerPanGestureProviding> {

	SBFluidSwitcherViewController* _switcherViewController;
	double _absoluteScale;
	double _lastPerimeter;
	SBTouchHistory* _touchHistory;
	CGPoint _initialCentroid;
	CGPoint _absoluteTranslation;
	CGPoint _additionalTranslationDueToChangingAnchorPoints;

}

@property (assign,nonatomic) CGPoint absoluteTranslation;                                                //@synthesize absoluteTranslation=_absoluteTranslation - In the implementation block
@property (assign,nonatomic) double absoluteScale;                                                       //@synthesize absoluteScale=_absoluteScale - In the implementation block
@property (assign,nonatomic) CGPoint additionalTranslationDueToChangingAnchorPoints;                     //@synthesize additionalTranslationDueToChangingAnchorPoints=_additionalTranslationDueToChangingAnchorPoints - In the implementation block
@property (assign,nonatomic) double lastPerimeter;                                                       //@synthesize lastPerimeter=_lastPerimeter - In the implementation block
@property (assign,nonatomic) CGPoint initialCentroid;                                                    //@synthesize initialCentroid=_initialCentroid - In the implementation block
@property (nonatomic,retain) SBTouchHistory * touchHistory;                                              //@synthesize touchHistory=_touchHistory - In the implementation block
@property (assign,nonatomic,__weak) SBFluidSwitcherViewController * switcherViewController;              //@synthesize switcherViewController=_switcherViewController - In the implementation block
@property (nonatomic,readonly) CGPoint centroid; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reset;
-(void)setState:(long long)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(CGPoint)locationInView:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(CGPoint)translationInView:(id)arg1 ;
-(CGPoint)velocityInView:(id)arg1 ;
-(double)_hysteresis;
-(CGPoint)centroid;
-(double)peakSpeed;
-(SBTouchHistory *)touchHistory;
-(CGPoint)initialCentroid;
-(void)setInitialCentroid:(CGPoint)arg1 ;
-(id)logCategory;
-(double)absoluteScale;
-(SBFluidSwitcherViewController *)switcherViewController;
-(void)setSwitcherViewController:(SBFluidSwitcherViewController *)arg1 ;
-(double)incrementalGestureMotionForCandidate:(id)arg1 withTransformAnalyzerInfo:(id)arg2 ;
-(double)animationDistance;
-(CGPoint)averageTouchVelocityOverTimeDuration:(double)arg1 ;
-(void)setAbsoluteScale:(double)arg1 ;
-(CGPoint)translationWithoutConsideringScaleInView:(id)arg1 ;
-(double)averageTouchPathAngleOverTimeDuration:(double)arg1 ;
-(void)setTouchHistory:(SBTouchHistory *)arg1 ;
-(CGPoint)absoluteTranslation;
-(BOOL)_shouldAddNewTouchesAfterGestureRecognition;
-(void)_computeGestureMotionWithTouches:(id)arg1 polygon:(id)arg2 ;
-(void)_setMatchedPolygon:(id)arg1 ;
-(void)_installTemplates;
-(CGPoint)_centroidInSwitcherViewForPolygon:(id)arg1 ;
-(BOOL)_isMatchedTemplateScrunchTemplate;
-(id)_switcherView;
-(void)setAbsoluteTranslation:(CGPoint)arg1 ;
-(CGPoint)additionalTranslationDueToChangingAnchorPoints;
-(void)setAdditionalTranslationDueToChangingAnchorPoints:(CGPoint)arg1 ;
-(double)lastPerimeter;
-(void)setLastPerimeter:(double)arg1 ;
@end

