/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:35 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BCApplePayManagerProtocol.h>

@protocol BCApplePayManagerDelegate;
@interface BCApplePayManager : NSObject <BCApplePayManagerProtocol> {

	id<BCApplePayManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<BCApplePayManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<BCApplePayManagerDelegate>)delegate;
-(void)setDelegate:(id<BCApplePayManagerDelegate>)arg1 ;
-(id)message;
-(id)initWithMessage:(id)arg1 delegate:(id)arg2 ;
-(long long)applePayStatus;
-(void)presentApplePay;
@end

