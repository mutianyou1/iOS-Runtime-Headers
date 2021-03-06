/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:19 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CACContentViewManager.h>

@protocol CACSimpleContentViewManagerDelegate, CACViewController;
@class UIViewController;

@interface CACSimpleContentViewManager : NSObject <CACContentViewManager> {

	id<CACSimpleContentViewManagerDelegate> _contentViewManagerDelegate;
	UIViewController*<CACViewController> _viewController;
	long long _pendingDimmingTransactionID;
	long long _activeDimmingTransactionID;

}

@property (nonatomic,retain) UIViewController*<CACViewController> viewController;                                    //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic,__weak) id<CACSimpleContentViewManagerDelegate> contentViewManagerDelegate;              //@synthesize contentViewManagerDelegate=_contentViewManagerDelegate - In the implementation block
@property (assign) long long pendingDimmingTransactionID;                                                            //@synthesize pendingDimmingTransactionID=_pendingDimmingTransactionID - In the implementation block
@property (assign) long long activeDimmingTransactionID;                                                             //@synthesize activeDimmingTransactionID=_activeDimmingTransactionID - In the implementation block
-(void)setViewController:(UIViewController*<CACViewController>)arg1 ;
-(UIViewController*<CACViewController>)viewController;
-(void)hide;
-(BOOL)isShowing;
-(BOOL)isOverlay;
-(BOOL)isOutOfProcess;
-(void)hideAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setContentViewManagerDelegate:(id<CACSimpleContentViewManagerDelegate>)arg1 ;
-(void)showViewControllerWithCreationHandler:(/*^block*/id)arg1 updateHandler:(/*^block*/id)arg2 ;
-(void)startDelayedDimmingOfNumbers;
-(long long)pendingDimmingTransactionID;
-(void)setPendingDimmingTransactionID:(long long)arg1 ;
-(void)setActiveDimmingTransactionID:(long long)arg1 ;
-(long long)activeDimmingTransactionID;
-(void)stopDelayedDimmingOfNumbers;
-(id<CACSimpleContentViewManagerDelegate>)contentViewManagerDelegate;
-(void)_hideAnimated:(BOOL)arg1 ;
-(void)hideWithoutAnimation;
@end

