/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:33 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSSet;


@protocol HFTriggerBuilderContextProviding <NSObject>
@property (nonatomic,readonly) BOOL showTriggerSummary; 
@property (nonatomic,readonly) BOOL showTriggerEnableSwitch; 
@property (nonatomic,readonly) BOOL showActionSetsInstructions; 
@property (nonatomic,readonly) BOOL showConditionTriggers; 
@property (nonatomic,readonly) BOOL allowDurationEditing; 
@property (nonatomic,readonly) BOOL filtersEmptyActionSets; 
@property (nonatomic,copy,readonly) NSString * testActionsInstructionDescription; 
@property (nonatomic,copy,readonly) NSString * serviceActionsInstructionDescription; 
@property (nonatomic,copy,readonly) NSString * actionEditorInstructionsDescription; 
@property (nonatomic,copy,readonly) NSString * triggerContextAwareTitle; 
@property (nonatomic,copy,readonly) NSString * deleteInstructionDescription; 
@property (nonatomic,copy,readonly) NSString * deleteConfirmationAlertTitle; 
@property (nonatomic,copy,readonly) NSString * deleteConfirmationAlertMessage; 
@property (nonatomic,copy,readonly) NSSet * unsupportedTriggers; 
@required
-(NSString *)triggerContextAwareTitle;
-(NSSet *)unsupportedTriggers;
-(BOOL)filtersEmptyActionSets;
-(BOOL)showTriggerEnableSwitch;
-(NSString *)deleteConfirmationAlertTitle;
-(NSString *)deleteConfirmationAlertMessage;
-(NSString *)deleteInstructionDescription;
-(BOOL)showTriggerSummary;
-(BOOL)showActionSetsInstructions;
-(BOOL)showConditionTriggers;
-(BOOL)allowDurationEditing;
-(NSString *)testActionsInstructionDescription;
-(NSString *)serviceActionsInstructionDescription;
-(NSString *)actionEditorInstructionsDescription;

@end

