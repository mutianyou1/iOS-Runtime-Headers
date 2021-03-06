/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:16 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface CUIPSDLayerEffects : NSObject {

	BOOL _visible;
	double _effectScale;
	NSMutableDictionary* _effectList;

}

@property (assign) BOOL visible;                                  //@synthesize visible=_visible - In the implementation block
@property (assign) double effectScale;                            //@synthesize effectScale=_effectScale - In the implementation block
@property (retain) NSMutableDictionary * effectList;              //@synthesize effectList=_effectList - In the implementation block
-(id)init;
-(void)dealloc;
-(BOOL)visible;
-(void)setVisible:(BOOL)arg1 ;
-(id)dropShadow;
-(void)setEffectScale:(double)arg1 ;
-(void)addLayerEffectComponent:(id)arg1 ;
-(NSMutableDictionary *)effectList;
-(double)effectScale;
-(id)colorOverlay;
-(void)setEffectList:(NSMutableDictionary *)arg1 ;
@end

