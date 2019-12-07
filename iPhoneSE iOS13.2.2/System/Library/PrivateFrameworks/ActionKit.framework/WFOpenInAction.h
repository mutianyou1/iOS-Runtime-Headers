/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:50 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFAction.h>

@class NSArray;

@interface WFOpenInAction : WFAction {

	NSArray* _contentClasses;

}

@property (nonatomic,retain) NSArray * contentClasses;              //@synthesize contentClasses=_contentClasses - In the implementation block
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(BOOL)setParameterState:(id)arg1 forKey:(id)arg2 ;
-(id)outputContentClasses;
-(id)inputContentClasses;
-(NSArray *)contentClasses;
-(void)setContentClasses:(NSArray *)arg1 ;
-(void)openContentInSelectedApp:(id)arg1 ;
-(void)updateContentClasses;
-(id)selectedApp;
@end
