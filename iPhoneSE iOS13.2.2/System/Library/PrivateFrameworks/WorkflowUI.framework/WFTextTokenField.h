/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:23 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class WFVariableString;


@protocol WFTextTokenField <WFTextField>
@property (nonatomic,copy) WFVariableString * variableString; 
@property (assign,nonatomic) NSRange selectedRange; 
@required
-(NSRange)selectedRange;
-(void)setSelectedRange:(NSRange)arg1;
-(WFVariableString *)variableString;
-(void)setVariableString:(id)arg1;
-(void)beginEditingWithContext:(id)arg1;
-(void)defaultCut:(id)arg1;
-(void)defaultCopy:(id)arg1;
-(void)defaultPaste:(id)arg1;

@end

