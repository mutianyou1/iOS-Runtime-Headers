/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:51 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol _UIPreviewProvider, NSCopyingNSObject;
@class UIPreviewTarget, UIView, UIPreviewParameters;

@interface UITargetedPreview : NSObject <NSCopying> {

	BOOL _defaultPreview;
	BOOL _sourceViewIsInViewHierarchy;
	BOOL _hasCustomTarget;
	UIPreviewTarget* _target;
	UIView* _view;
	UIPreviewParameters* _parameters;
	UIView* _viewToSnapshot;
	id<_UIPreviewProvider> __PreviewProvider;
	id<NSCopying><NSObject> _internalIdentifer;
	UIView* _overridePositionTrackingView;

}

@property (assign,setter=_setDefaultPreview:,getter=_isDefaultPreview,nonatomic) BOOL defaultPreview;                       //@synthesize defaultPreview=_defaultPreview - In the implementation block
@property (assign,setter=_setViewToSnapshot:,getter=_viewToSnapshot,nonatomic,__weak) UIView * viewToSnapshot;              //@synthesize viewToSnapshot=_viewToSnapshot - In the implementation block
@property (nonatomic,readonly) id<_UIPreviewProvider> _PreviewProvider;                                                     //@synthesize _PreviewProvider=__PreviewProvider - In the implementation block
@property (nonatomic,readonly) BOOL sourceViewIsInViewHierarchy;                                                            //@synthesize sourceViewIsInViewHierarchy=_sourceViewIsInViewHierarchy - In the implementation block
@property (nonatomic,readonly) BOOL hasCustomTarget;                                                                        //@synthesize hasCustomTarget=_hasCustomTarget - In the implementation block
@property (assign,setter=_setPreviewMode:,getter=_previewMode,nonatomic) long long previewMode; 
@property (nonatomic,copy) id<NSCopying><NSObject> internalIdentifer;                                                       //@synthesize internalIdentifer=_internalIdentifer - In the implementation block
@property (assign,nonatomic) BOOL _springboardPlatterStyle; 
@property (setter=_setOverridePositionTrackingView:,nonatomic,retain) UIView * overridePositionTrackingView;                //@synthesize overridePositionTrackingView=_overridePositionTrackingView - In the implementation block
@property (nonatomic,readonly) UIPreviewTarget * target;                                                                    //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) UIView * view;                                                                               //@synthesize view=_view - In the implementation block
@property (nonatomic,copy,readonly) UIPreviewParameters * parameters;                                                       //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,readonly) CGSize size; 
+(id)new;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIPreviewTarget *)target;
-(CGSize)size;
-(UIPreviewParameters *)parameters;
-(UIView *)view;
-(id)initWithView:(id)arg1 ;
-(id)initWithView:(id)arg1 parameters:(id)arg2 ;
-(id)retargetedPreviewWithTarget:(id)arg1 ;
-(void)_setPreviewMode:(long long)arg1 ;
-(id)initWithView:(id)arg1 parameters:(id)arg2 target:(id)arg3 ;
-(void)_setViewToSnapshot:(id)arg1 ;
-(void)_setDefaultPreview:(BOOL)arg1 ;
-(BOOL)containsPoint:(CGPoint)arg1 fromView:(id)arg2 ;
-(long long)_previewMode;
-(BOOL)_isDefaultPreview;
-(UIView *)overridePositionTrackingView;
-(void)_setOverridePositionTrackingView:(id)arg1 ;
-(id<NSCopying><NSObject>)internalIdentifer;
-(BOOL)sourceViewIsInViewHierarchy;
-(BOOL)hasCustomTarget;
-(void)set_springboardPlatterStyle:(BOOL)arg1 ;
-(BOOL)_springboardPlatterStyle;
-(id)_viewToSnapshot;
-(id<_UIPreviewProvider>)_PreviewProvider;
-(void)setInternalIdentifer:(id<NSCopying><NSObject>)arg1 ;
-(void)platterAnimator_getBounds:(CGRect*)arg1 center:(CGPoint*)arg2 transform:(CGAffineTransform*)arg3 forContainer:(id)arg4 ;
-(BOOL)platterAnimator_isValidPreview;
@end
