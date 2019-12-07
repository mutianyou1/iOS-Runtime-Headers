/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:20 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray, INIntentSlotDescription;

@interface WFSystemIntentEnumerationParameter : WFEnumerationParameter {

	NSArray* _possibleStates;
	INIntentSlotDescription* _slotDescription;

}

@property (nonatomic,readonly) INIntentSlotDescription * slotDescription;              //@synthesize slotDescription=_slotDescription - In the implementation block
-(id)initWithDefinition:(id)arg1 ;
-(id)possibleStates;
-(INIntentSlotDescription *)slotDescription;
-(Class)singleStateClass;
-(id)localizedLabelForPossibleState:(id)arg1 ;
-(BOOL)alwaysShowsButton;
@end
