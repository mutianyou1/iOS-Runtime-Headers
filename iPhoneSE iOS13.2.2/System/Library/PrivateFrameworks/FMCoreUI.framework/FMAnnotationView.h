/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:16 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMCoreUI/FMCoreUI-Structs.h>
#import <MapKit/MKAnnotationView.h>

@class CAShapeLayer, CALayer;

@interface FMAnnotationView : MKAnnotationView {

	BOOL _shouldPreventLargeAnnotationState;
	BOOL _isDelayed;
	BOOL _isShowingLargeSelectedAnnotation;
	BOOL _hasPhotoImage;
	CAShapeLayer* _smallRingLayer;
	CAShapeLayer* _largeRingLayer;
	CALayer* _smallCircleLayer;
	CALayer* _largeCircleLayer;
	CALayer* _locationOuterLayer;
	CALayer* _locationInnerLayer;
	CALayer* _smallPersonImageLayer;
	CALayer* _largePersonImageLayer;

}

@property (nonatomic,retain) CAShapeLayer * smallRingLayer;                          //@synthesize smallRingLayer=_smallRingLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * largeRingLayer;                          //@synthesize largeRingLayer=_largeRingLayer - In the implementation block
@property (nonatomic,retain) CALayer * smallCircleLayer;                             //@synthesize smallCircleLayer=_smallCircleLayer - In the implementation block
@property (nonatomic,retain) CALayer * largeCircleLayer;                             //@synthesize largeCircleLayer=_largeCircleLayer - In the implementation block
@property (nonatomic,retain) CALayer * locationOuterLayer;                           //@synthesize locationOuterLayer=_locationOuterLayer - In the implementation block
@property (nonatomic,retain) CALayer * locationInnerLayer;                           //@synthesize locationInnerLayer=_locationInnerLayer - In the implementation block
@property (nonatomic,retain) CALayer * smallPersonImageLayer;                        //@synthesize smallPersonImageLayer=_smallPersonImageLayer - In the implementation block
@property (nonatomic,retain) CALayer * largePersonImageLayer;                        //@synthesize largePersonImageLayer=_largePersonImageLayer - In the implementation block
@property (assign,nonatomic) BOOL isShowingLargeSelectedAnnotation;                  //@synthesize isShowingLargeSelectedAnnotation=_isShowingLargeSelectedAnnotation - In the implementation block
@property (assign,nonatomic) BOOL hasPhotoImage;                                     //@synthesize hasPhotoImage=_hasPhotoImage - In the implementation block
@property (nonatomic,retain) id<FMAnnotation><MKAnnotation> annotation; 
@property (assign,nonatomic) BOOL shouldPreventLargeAnnotationState;                 //@synthesize shouldPreventLargeAnnotationState=_shouldPreventLargeAnnotationState - In the implementation block
@property (assign,nonatomic) BOOL isDelayed;                                         //@synthesize isDelayed=_isDelayed - In the implementation block
+(BOOL)_followsTerrain;
+(void)setImagePadding:(double)arg1 ;
+(void)preloadAssets;
+(void)setLargeAnnotationBorderVisible:(BOOL)arg1 ;
+(void)setThickAnnotationBorder:(BOOL)arg1 ;
+(void)setShouldMaskLayer:(BOOL)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)prepareForReuse;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setTintColor:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setIsDelayed:(BOOL)arg1 ;
-(BOOL)isDelayed;
-(void)setAnnotation:(id<FMAnnotation><MKAnnotation>)arg1 ;
-(id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 delay:(double)arg3 ;
-(id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 tintColor:(id)arg3 ;
-(void)updateStyleForAnnotation:(id)arg1 ;
-(void)setSmallCircleLayer:(CALayer *)arg1 ;
-(void)setLargeCircleLayer:(CALayer *)arg1 ;
-(void)setSmallPersonImageLayer:(CALayer *)arg1 ;
-(void)setLargePersonImageLayer:(CALayer *)arg1 ;
-(void)setLocationOuterLayer:(CALayer *)arg1 ;
-(void)setLocationInnerLayer:(CALayer *)arg1 ;
-(void)setSmallRingLayer:(CAShapeLayer *)arg1 ;
-(void)setLargeRingLayer:(CAShapeLayer *)arg1 ;
-(CAShapeLayer *)smallRingLayer;
-(CAShapeLayer *)largeRingLayer;
-(void)invertColorStatusDidChange:(id)arg1 ;
-(void)_setupSpringActions;
-(void)setHasPhotoImage:(BOOL)arg1 ;
-(CALayer *)smallPersonImageLayer;
-(CALayer *)largePersonImageLayer;
-(void)_updateAnnotationStyle;
-(void)animateDelayedAnimation;
-(void)_selectionWasUpdated:(BOOL)arg1 ;
-(CALayer *)locationInnerLayer;
-(BOOL)isShowingLargeSelectedAnnotation;
-(void)_transitionToNewSize:(BOOL)arg1 ;
-(CALayer *)smallCircleLayer;
-(CALayer *)locationOuterLayer;
-(CALayer *)largeCircleLayer;
-(BOOL)shouldPreventLargeAnnotationState;
-(void)setIsShowingLargeSelectedAnnotation:(BOOL)arg1 ;
-(void)addColorInvertFilterToLayer:(id)arg1 ;
-(void)removeColorInvertFilterToLayer:(id)arg1 ;
-(void)setShouldPreventLargeAnnotationState:(BOOL)arg1 ;
-(BOOL)hasPhotoImage;
@end
