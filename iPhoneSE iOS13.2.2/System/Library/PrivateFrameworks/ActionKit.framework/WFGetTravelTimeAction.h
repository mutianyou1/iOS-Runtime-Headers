/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:52 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFAction.h>

@interface WFGetTravelTimeAction : WFAction
+(unsigned long long)transportTypeFromString:(id)arg1 ;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(BOOL)setParameterState:(id)arg1 forKey:(id)arg2 ;
-(id)outputContentClasses;
-(void)getMapItemFromCollection:(id)arg1 parameterKey:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

