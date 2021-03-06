/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:57 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VTUIEnrollTrainingViewControllerDelegate.h>
#import <libobjc.A.dylib/BFFFinishSetupFlowControlling.h>

@class VTUIEnrollTrainingViewController, NSString;

@interface BFFFinishSetupAssistantOptInController : NSObject <VTUIEnrollTrainingViewControllerDelegate, BFFFinishSetupFlowControlling> {

	BFFFinishSetupAssistantOptInController* _selfReference;
	VTUIEnrollTrainingViewController* _enrollmentController;
	BOOL _willOfferVoiceTrigger;
	/*^block*/id _completion;

}

@property (nonatomic,copy) id completion;                           //@synthesize completion=_completion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)finishSetupAssistantOptInController;
-(id)init;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(void)continueSetup;
-(id)viewControllerWithCompletion:(/*^block*/id)arg1 ;
-(void)performExtendedInitializationWithCompletion:(/*^block*/id)arg1 ;
-(void)skipSetup;
-(void)showLearnMore;
@end

