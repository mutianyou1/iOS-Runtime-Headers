/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:01 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionUI.framework/AppPredictionUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol APUIWFLIntentControllerDelegate <NSObject>
@optional
-(BOOL)intentController:(id)arg1 shouldRequireConfirmationForIntent:(id)arg2 intentResponse:(id)arg3;

@required
-(void)intentController:(id)arg1 requiresConfirmationForIntent:(id)arg2 intentResponse:(id)arg3;
-(void)intentController:(id)arg1 requiresContinuingInAppForIntent:(id)arg2 proceedHandler:(/*^block*/id)arg3;
-(void)intentController:(id)arg1 didHandleInteraction:(id)arg2;
-(void)intentController:(id)arg1 didFailWithError:(id)arg2 forInteraction:(id)arg3;
-(void)intentControllerDidFailAuthorizationCheck:(id)arg1;

@end

