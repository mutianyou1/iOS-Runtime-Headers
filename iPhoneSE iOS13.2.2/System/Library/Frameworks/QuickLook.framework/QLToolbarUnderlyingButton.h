/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:23 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <UIKitCore/UIButton.h>

@class NSString;

@interface QLToolbarUnderlyingButton : UIButton {

	BOOL _offsetRoundedSelectedIndicator;
	NSString* _identifier;
	CGRect _selectedIndicatorBounds;

}

@property (copy) NSString * identifier;                                        //@synthesize identifier=_identifier - In the implementation block
@property (assign) CGRect selectedIndicatorBounds;                             //@synthesize selectedIndicatorBounds=_selectedIndicatorBounds - In the implementation block
@property (assign,nonatomic) BOOL offsetRoundedSelectedIndicator;              //@synthesize offsetRoundedSelectedIndicator=_offsetRoundedSelectedIndicator - In the implementation block
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(CGRect)_selectedIndicatorBounds;
-(CGRect)selectedIndicatorBounds;
-(void)setSelectedIndicatorBounds:(CGRect)arg1 ;
-(BOOL)offsetRoundedSelectedIndicator;
-(void)setOffsetRoundedSelectedIndicator:(BOOL)arg1 ;
@end

