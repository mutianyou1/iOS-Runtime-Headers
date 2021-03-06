/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:16 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TeaUI/TeaUI-Structs.h>
#import <TeaUI/TeaUI.TouchInsetsLabel.h>

@class NSString;

@interface TeaUI.TappableLabel : TeaUI.TouchInsetsLabel {

	 onTap;

}

@property (assign,nonatomic) BOOL isAccessibilityElement; 
@property (assign,nonatomic) unsigned long long accessibilityTraits; 
@property (copy,nonatomic) NSString * accessibilityLabel; 
-(NSString *)accessibilityLabel;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(void)setAccessibilityLabel:(NSString *)arg1 ;
-(void)setAccessibilityTraits:(unsigned long long)arg1 ;
-(void)setIsAccessibilityElement:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
@end

