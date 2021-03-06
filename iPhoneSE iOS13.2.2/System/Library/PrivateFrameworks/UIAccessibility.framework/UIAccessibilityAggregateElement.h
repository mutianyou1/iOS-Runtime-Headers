/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:29 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIAccessibility/UIAccessibility-Structs.h>
#import <UIKitCore/UIAccessibilityElement.h>

@class NSArray;

@interface UIAccessibilityAggregateElement : UIAccessibilityElement {

	NSArray* _representedElements;

}

@property (nonatomic,retain) NSArray * representedElements;              //@synthesize representedElements=_representedElements - In the implementation block
-(CGRect)accessibilityFrame;
-(id)accessibilityLabel;
-(id)initWithAccessibilityContainer:(id)arg1 ;
-(void)setRepresentedElements:(NSArray *)arg1 ;
-(NSArray *)representedElements;
-(id)initWithAccessibilityContainer:(id)arg1 representedElements:(id)arg2 ;
-(void)addRepresentedObject:(id)arg1 ;
@end

