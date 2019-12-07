/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:22 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <ComponentKit/CKCompositeComponent.h>

@class CKComponent;

@interface WFActionTitleComponent : CKCompositeComponent {

	CKComponent* _leadingComponent;
	CKTypedComponentAction<> _action;
	BOOL _enabled;

}
+(id)newWithIcon:(id)arg1 attributedTitle:(id)arg2 enabled:(BOOL)arg3 action:(CKTypedComponentAction<>)arg4 ;
-(void)componentTapped:(id)arg1 ;
@end
