/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:19 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSNumber, SSMutableAuthenticationContext, UIViewController;

@interface SUScriptAuthenticationOperation : ISOperation {

	NSNumber* _authenticatedDSID;
	SSMutableAuthenticationContext* _authenticationContext;
	UIViewController* _presentingViewController;

}

@property (retain) NSNumber * authenticatedDSID;                             //@synthesize authenticatedDSID=_authenticatedDSID - In the implementation block
@property (retain) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
-(id)init;
-(void)run;
-(UIViewController *)presentingViewController;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(id)initWithAccountIdentifier:(id)arg1 ;
-(id)authenticatedAccountDSID;
-(void)sendCompletionCallback:(id)arg1 ;
-(void)setScriptOptions:(id)arg1 ;
-(NSNumber *)authenticatedDSID;
-(void)setAuthenticatedDSID:(NSNumber *)arg1 ;
@end

