/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:21 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ComponentKit/CKComponentController.h>
#import <libobjc.A.dylib/WFWorkflowPickerViewControllerDelegate.h>

@class NSString;

@interface WFWorkflowPickerParameterComponentController : CKComponentController <WFWorkflowPickerViewControllerDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)buttonTapped:(id)arg1 ;
-(void)parameterLayoutTapped:(id)arg1 ;
-(void)workflowPickerViewControllerDidCancel:(id)arg1 ;
-(void)workflowPickerViewController:(id)arg1 didSelectWorkflowWithName:(id)arg2 ;
-(void)workflowPickerViewController:(id)arg1 didSelectVariable:(id)arg2 ;
@end

