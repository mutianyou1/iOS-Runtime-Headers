/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:23 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WFUIKitUserInterface.h>

@class UIViewController, UIView, NSString;

@interface WFModuleUserInterface : NSObject <WFUIKitUserInterface> {

	UIView* _view;
	UIViewController* _viewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,readonly) UIView * view;                                  //@synthesize view=_view - In the implementation block
-(UIView *)view;
-(UIViewController *)viewController;
-(void)presentAlert:(id)arg1 ;
-(id)initWithView:(id)arg1 inViewController:(id)arg2 ;
@end

