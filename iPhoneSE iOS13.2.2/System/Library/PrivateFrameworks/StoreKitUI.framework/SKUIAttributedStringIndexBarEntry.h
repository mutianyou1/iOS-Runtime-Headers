/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:12 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIIndexBarEntry.h>

@class NSAttributedString, NSDictionary;

@interface SKUIAttributedStringIndexBarEntry : SKUIIndexBarEntry {

	BOOL _hasValidSynthesizedAttributedString;
	NSAttributedString* _synthesizedAttributedString;
	NSAttributedString* _attributedString;
	NSDictionary* _defaultTextAttributes;

}

@property (nonatomic,copy,readonly) NSAttributedString * attributedString;              //@synthesize attributedString=_attributedString - In the implementation block
@property (nonatomic,copy) NSDictionary * defaultTextAttributes;                        //@synthesize defaultTextAttributes=_defaultTextAttributes - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithAttributedString:(id)arg1 ;
-(NSAttributedString *)attributedString;
-(void)setDefaultTextAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)defaultTextAttributes;
-(void)_tintColorDidChange;
-(CGSize)_calculatedContentSize;
-(void)_drawContentInRect:(CGRect)arg1 ;
-(id)entryAttributedString;
-(id)_synthesizedAttributedString;
-(void)_invalidateSynthesizedAttributedString;
@end

