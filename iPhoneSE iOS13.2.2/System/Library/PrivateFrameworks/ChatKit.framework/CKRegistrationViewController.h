/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:53 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/AKTapToSignInViewControllerDelegate.h>

@class AKTapToSignInViewController, NSString;

@interface CKRegistrationViewController : UIViewController <AKTapToSignInViewControllerDelegate> {

	/*^block*/id _completionBlock;
	AKTapToSignInViewController* _akSignInVC;

}

@property (nonatomic,retain) AKTapToSignInViewController * akSignInVC;              //@synthesize akSignInVC=_akSignInVC - In the implementation block
@property (nonatomic,copy) id completionBlock;                                      //@synthesize completionBlock=_completionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_shouldShowAuthKitSignIn;
+(id)_inProgressRegisteringNonPhoneAccount;
+(BOOL)shouldShowRegistration;
-(id)init;
-(void)dealloc;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)canBecomeFirstResponder;
-(void)keyboardDidShow:(id)arg1 ;
-(void)keyboardWillShow:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
-(void)tapToSignInViewController:(id)arg1 didAuthenticateWithResults:(id)arg2 error:(id)arg3 ;
-(id)accountRegistrar;
-(void)_handleRegistrarCompletion:(BOOL)arg1 errorAlertController:(id)arg2 ;
-(void)updateInsetsForKeyboardFrame:(CGRect)arg1 ;
-(void)setErrorPresentationViewController:(id)arg1 ;
-(AKTapToSignInViewController *)akSignInVC;
-(void)setAkSignInVC:(AKTapToSignInViewController *)arg1 ;
@end
