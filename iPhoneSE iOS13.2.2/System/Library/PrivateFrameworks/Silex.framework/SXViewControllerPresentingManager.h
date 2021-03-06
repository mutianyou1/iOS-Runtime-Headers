/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:40 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXViewControllerPresenting.h>

@class UIViewController, NSString;

@interface SXViewControllerPresentingManager : NSObject <SXViewControllerPresenting> {

	UIViewController* _presentingViewController;

}

@property (nonatomic,readonly) UIViewController * controller; 
@property (assign,nonatomic,__weak) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIViewController *)presentingViewController;
-(UIViewController *)controller;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 sourceView:(id)arg3 sourceRect:(CGRect)arg4 ;
@end

