/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:19 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUViewController.h>
#import <libobjc.A.dylib/SKComposeReviewDelegate.h>

@class NSURL, SKComposeReviewViewController, NSString;

@interface SUComposeReviewViewController : SUViewController <SKComposeReviewDelegate> {

	NSURL* _compositionURL;
	SKComposeReviewViewController* _remoteViewController;

}

@property (nonatomic,readonly) NSURL * compositionURL;              //@synthesize compositionURL=_compositionURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)loadView;
-(BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
-(void)prepareWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)reviewComposeViewControllerDidFinish:(id)arg1 ;
-(id)initWithCompositionURL:(id)arg1 ;
-(id)copyScriptViewController;
-(void)_showRemoteView;
-(NSURL *)compositionURL;
@end
