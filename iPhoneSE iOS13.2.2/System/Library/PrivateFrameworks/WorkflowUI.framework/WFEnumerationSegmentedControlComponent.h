/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:24 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <ComponentKit/CKComponent.h>

@class WFEnumerationParameter;

@interface WFEnumerationSegmentedControlComponent : CKComponent {

	WFEnumerationParameter* _parameter;
	/*^block*/id _updateBlock;

}
+(id)newWithParameter:(id)arg1 state:(id)arg2 updateBlock:(/*^block*/id)arg3 options:(WFParameterComponentOptions)arg4 ;
+(double)minimumWidthForSegmentWithTitle:(id)arg1 ;
+(double)perSegmentWidthWithSegments:(id)arg1 ;
+(double)estimatedWidthWithSegments:(id)arg1 ;
-(void)segmentedControlSelectedSegmentChanged:(id)arg1 ;
@end
