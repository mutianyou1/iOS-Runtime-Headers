/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:10 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol DATestViewOperationDelegate;
@class NSDictionary, UIViewController, DKMutableDiagnosticResult, DATestViewController;

@interface DATestViewOperation : NSOperation {

	BOOL _cancelled;
	BOOL _executing;
	BOOL _finished;
	NSDictionary* _parameters;
	NSDictionary* _specifications;
	NSDictionary* _predicates;
	id<DATestViewOperationDelegate> _delegate;
	UIViewController* _viewController;
	DKMutableDiagnosticResult* _testResult;
	DATestViewController* _weakViewController;

}

@property (assign,nonatomic,__weak) DATestViewController * weakViewController;              //@synthesize weakViewController=_weakViewController - In the implementation block
@property (nonatomic,retain) NSDictionary * parameters;                                     //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,retain) NSDictionary * specifications;                                 //@synthesize specifications=_specifications - In the implementation block
@property (nonatomic,retain) NSDictionary * predicates;                                     //@synthesize predicates=_predicates - In the implementation block
@property (assign,nonatomic,__weak) id<DATestViewOperationDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIViewController * viewController;                             //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain) DKMutableDiagnosticResult * testResult;                        //@synthesize testResult=_testResult - In the implementation block
-(id<DATestViewOperationDelegate>)delegate;
-(void)setDelegate:(id<DATestViewOperationDelegate>)arg1 ;
-(void)cancel;
-(void)start;
-(BOOL)isCancelled;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isAsynchronous;
-(void)finish;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
-(void)setViewController:(UIViewController *)arg1 ;
-(void)setPredicates:(NSDictionary *)arg1 ;
-(NSDictionary *)predicates;
-(UIViewController *)viewController;
-(void)_cancel;
-(void)_finish;
-(DKMutableDiagnosticResult *)testResult;
-(NSDictionary *)specifications;
-(DATestViewController *)weakViewController;
-(void)setSpecifications:(NSDictionary *)arg1 ;
-(void)setTestResult:(DKMutableDiagnosticResult *)arg1 ;
-(void)setWeakViewController:(DATestViewController *)arg1 ;
@end
