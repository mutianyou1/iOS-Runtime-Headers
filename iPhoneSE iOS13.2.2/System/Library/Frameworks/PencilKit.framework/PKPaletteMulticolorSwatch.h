/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:31 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilKit/PencilKit-Structs.h>
#import <PencilKit/PKPaletteColorSwatch.h>
#import <libobjc.A.dylib/PKPaletteMultiColorSwatchProperties.h>

@class NSString, PKSwatchColor;

@interface PKPaletteMulticolorSwatch : PKPaletteColorSwatch <PKPaletteMultiColorSwatchProperties>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isSelected,nonatomic) BOOL selected; 
@property (assign,nonatomic) BOOL showsSelectionHighlight; 
@property (nonatomic,retain) PKSwatchColor * swatchColor; 
@property (assign,nonatomic) long long colorUserInterfaceStyle; 
-(id)initWithFrame:(CGRect)arg1 ;
-(id)newColorBackgroundView;
-(BOOL)wantsBackgroundViewColor;
-(BOOL)wantsColorBulletVisible;
@end
