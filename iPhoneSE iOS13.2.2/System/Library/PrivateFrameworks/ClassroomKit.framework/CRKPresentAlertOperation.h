/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:00 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATOperation.h>

@class UIAlertController, NSString, UIViewController;

@interface CRKPresentAlertOperation : CATOperation {

	UIAlertController* mAlertController;
	NSString* _acknowledgeOptionTitle;
	NSString* _message;
	UIViewController* _presentingViewController;
	NSString* _title;

}

@property (nonatomic,readonly) NSString * acknowledgeOptionTitle;                               //@synthesize acknowledgeOptionTitle=_acknowledgeOptionTitle - In the implementation block
@property (nonatomic,readonly) NSString * message;                                              //@synthesize message=_message - In the implementation block
@property (nonatomic,__weak,readonly) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (nonatomic,readonly) NSString * title;                                                //@synthesize title=_title - In the implementation block
-(void)dealloc;
-(void)cancel;
-(void)main;
-(BOOL)isAsynchronous;
-(NSString *)title;
-(NSString *)message;
-(UIViewController *)presentingViewController;
-(NSString *)acknowledgeOptionTitle;
-(id)initWithPresentingViewController:(id)arg1 title:(id)arg2 message:(id)arg3 acknowledgeOptionTitle:(id)arg4 ;
@end

