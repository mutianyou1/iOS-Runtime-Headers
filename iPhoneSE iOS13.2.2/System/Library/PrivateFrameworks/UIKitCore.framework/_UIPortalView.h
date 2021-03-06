/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:01 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, CAPortalLayer;

@interface _UIPortalView : UIView {

	BOOL _forwardsClientHitTestingToSourceView;
	UIView* _sourceView;

}

@property (assign,nonatomic,__weak) UIView * sourceView;                             //@synthesize sourceView=_sourceView - In the implementation block
@property (assign,nonatomic) BOOL hidesSourceView; 
@property (assign,nonatomic) BOOL matchesAlpha; 
@property (assign,nonatomic) BOOL matchesTransform; 
@property (assign,nonatomic) BOOL matchesPosition; 
@property (assign,nonatomic) BOOL allowsBackdropGroups; 
@property (assign,nonatomic) BOOL allowsHitTesting; 
@property (assign,nonatomic) BOOL forwardsClientHitTestingToSourceView;              //@synthesize forwardsClientHitTestingToSourceView=_forwardsClientHitTestingToSourceView - In the implementation block
@property (nonatomic,readonly) CAPortalLayer * portalLayer; 
+(Class)layerClass;
-(id)description;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(UIView *)sourceView;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setSourceView:(UIView *)arg1 ;
-(void)setAllowsBackdropGroups:(BOOL)arg1 ;
-(void)setAllowsHitTesting:(BOOL)arg1 ;
-(void)setHidesSourceView:(BOOL)arg1 ;
-(BOOL)hidesSourceView;
-(void)setMatchesAlpha:(BOOL)arg1 ;
-(void)setMatchesPosition:(BOOL)arg1 ;
-(void)setMatchesTransform:(BOOL)arg1 ;
-(CAPortalLayer *)portalLayer;
-(BOOL)matchesTransform;
-(BOOL)matchesPosition;
-(BOOL)allowsBackdropGroups;
-(BOOL)allowsHitTesting;
-(BOOL)forwardsClientHitTestingToSourceView;
-(BOOL)matchesAlpha;
-(void)setForwardsClientHitTestingToSourceView:(BOOL)arg1 ;
@end

