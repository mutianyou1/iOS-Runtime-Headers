/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:19 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpeechRecognitionCommandAndControl/SpeechRecognitionCommandAndControl-Structs.h>
#import <SpeechRecognitionCommandAndControl/CACSimpleContentViewManager.h>
#import <libobjc.A.dylib/CACElementActionsPresentationViewControllerDelegate.h>

@interface CACElementActionsPresentationManager : CACSimpleContentViewManager <CACElementActionsPresentationViewControllerDelegate>
+(BOOL)canShowElementActionsForElement:(id)arg1 ;
-(BOOL)isOverlay;
-(void)showElementActionsForElement:(id)arg1 usingPortraitUpRect:(CGRect)arg2 ;
-(void)elementActionsPresentationViewController:(id)arg1 hideWithCompletion:(/*^block*/id)arg2 ;
@end

