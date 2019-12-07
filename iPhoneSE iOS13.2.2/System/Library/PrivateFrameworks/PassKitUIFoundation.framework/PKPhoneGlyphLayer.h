/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:00 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUIFoundation/PassKitUIFoundation-Structs.h>
#import <PassKitCore/PKMicaLayer.h>

@class CALayer, NSString;

@interface PKPhoneGlyphLayer : PKMicaLayer {

	CALayer* _highlightLayer;
	CGPoint _highlightOffscreenPosition;
	CGPoint _highlightOnscreenPosition;
	NSString* _phoneWiggleAnimationKey;

}
-(id)init;
-(void)dealloc;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)layerDidBecomeVisible:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 package:(id)arg2 ;
-(void)_restartPhoneWiggleIfNecessary;
-(void)_startPhoneWiggle;
-(void)_endPhoneWiggle;
@end
