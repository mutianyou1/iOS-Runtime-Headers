/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:23 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface WFSelectableListOption : NSObject {

	BOOL _selected;
	NSString* _displayTitle;
	id _value;

}

@property (nonatomic,copy,readonly) NSString * displayTitle;               //@synthesize displayTitle=_displayTitle - In the implementation block
@property (nonatomic,readonly) id value;                                   //@synthesize value=_value - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;              //@synthesize selected=_selected - In the implementation block
-(id)value;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(NSString *)displayTitle;
-(id)initWithDisplayTitle:(id)arg1 value:(id)arg2 ;
@end
