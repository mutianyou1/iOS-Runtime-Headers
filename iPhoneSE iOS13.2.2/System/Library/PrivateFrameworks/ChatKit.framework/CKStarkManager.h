/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:54 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIViewController, UIWindow;

@interface CKStarkManager : NSObject {

	UIViewController* _starkRootViewController;
	UIWindow* _starkWindow;

}

@property (nonatomic,retain) UIViewController * starkRootViewController;              //@synthesize starkRootViewController=_starkRootViewController - In the implementation block
@property (nonatomic,retain) UIWindow * starkWindow;                                  //@synthesize starkWindow=_starkWindow - In the implementation block
@property (nonatomic,readonly) BOOL isStarkConnected; 
+(id)sharedInstance;
-(BOOL)isStarkConnected;
-(void)setStarkWindow:(UIWindow *)arg1 ;
-(void)setStarkRootViewController:(UIViewController *)arg1 ;
-(UIWindow *)starkWindow;
-(id)_assistantContextForConversation:(id)arg1 ;
-(id)_assistantContextForRecipientID:(id)arg1 ;
-(void)attachStarkToWindow:(id)arg1 ;
-(void)detachStarkFromWindow:(id)arg1 ;
-(void)activateForConversation:(id)arg1 ;
-(void)activateForRecipient:(id)arg1 ;
-(UIViewController *)starkRootViewController;
@end

