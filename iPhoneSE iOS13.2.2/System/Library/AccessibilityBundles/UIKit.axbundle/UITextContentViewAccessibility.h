/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:58 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UITextContentViewAccessibility_super.h>

@interface UITextContentViewAccessibility : __UITextContentViewAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(CGRect)accessibilityFrame;
-(id)accessibilityValue;
-(CGPoint)accessibilityActivationPoint;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(BOOL)accessibilityActivate;
-(id)accessibilityCustomRotors;
-(BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3 ;
-(BOOL)keyboardInput:(id)arg1 shouldReplaceTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(BOOL)keyboardInputChanged:(id)arg1 ;
-(void)keyboardInputChangedSelection:(id)arg1 ;
-(void)_accessibilitySetValue:(id)arg1 ;
-(NSRange)_accessibilitySelectedTextRange;
-(void)_accessibilitySetSelectedTextRange:(NSRange)arg1 ;
-(id)_accessibilityTextViewTextOperationResponder;
-(unsigned long long)_accessibilityAutomationType;
-(id)_accessibilitySupplementaryHeaderViews;
-(BOOL)_accessibilitySupportsActivateAction;
-(id)_accessibilityAttributedValueForRange:(NSRange*)arg1 ;
-(id)_accessibilityDataDetectorScheme:(CGPoint)arg1 ;
-(id)_accessibilityCapturedImages;
-(BOOL)_accessibilityShouldAnnounceFontInfo;
-(id)_accessibilityAttributedTextRetrieval;
-(void)_accessibilitySetShouldUpdateCache:(BOOL)arg1 ;
-(BOOL)_accessibilityShouldUpdateTextCache;
@end

