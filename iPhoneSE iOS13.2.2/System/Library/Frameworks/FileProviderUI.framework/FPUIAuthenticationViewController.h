/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:36 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/FileProviderUI.framework/FileProviderUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@protocol FPUIAuthenticationDelegate;
@class NSURL, FPUIAuthenticationLandingViewController;

@interface FPUIAuthenticationViewController : UIViewController {

	id<FPUIAuthenticationDelegate> _authenticationDelegate;
	NSURL* _initialConnectionURL;
	FPUIAuthenticationLandingViewController* _landingViewController;

}

@property (__weak) FPUIAuthenticationLandingViewController * landingViewController;                     //@synthesize landingViewController=_landingViewController - In the implementation block
@property (assign,nonatomic,__weak) id<FPUIAuthenticationDelegate> authenticationDelegate;              //@synthesize authenticationDelegate=_authenticationDelegate - In the implementation block
@property (nonatomic,copy) NSURL * initialConnectionURL;                                                //@synthesize initialConnectionURL=_initialConnectionURL - In the implementation block
-(void)viewDidLoad;
-(id<FPUIAuthenticationDelegate>)authenticationDelegate;
-(void)setAuthenticationDelegate:(id<FPUIAuthenticationDelegate>)arg1 ;
-(void)setInitialConnectionURL:(NSURL *)arg1 ;
-(id)initWithServerURL:(id)arg1 ;
-(NSURL *)initialConnectionURL;
-(FPUIAuthenticationLandingViewController *)landingViewController;
-(void)setLandingViewController:(FPUIAuthenticationLandingViewController *)arg1 ;
@end
