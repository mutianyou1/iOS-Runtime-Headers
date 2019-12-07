/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:32 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIAlertController, UITextField;

@interface EKUIDeclineCommentController : NSObject {

	UIAlertController* _alertController;
	UITextField* _alertTextField;
	/*^block*/id _completionBlock;

}
+(id)_newDeclineCommentControllerWithCompletionBlock:(/*^block*/id)arg1 ;
+(id)presentDeclineCommentAlertWithOrganizer:(id)arg1 currentComment:(id)arg2 viewController:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)dealloc;
-(void)dismissAnimated:(BOOL)arg1 ;
-(void)_presentAlertWithOrganizer:(id)arg1 currentComment:(id)arg2 viewController:(id)arg3 ;
-(void)_completeWithButton:(unsigned long long)arg1 ;
@end
