/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:43 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMAccount.h>

@class IMHandle;

@interface IMSimulatedAccount : IMAccount {

	IMHandle* _loginHandle;

}

@property (nonatomic,retain) IMHandle * loginHandle;              //@synthesize loginHandle=_loginHandle - In the implementation block
-(BOOL)isConnected;
-(BOOL)isOperational;
-(void)setLoginHandle:(IMHandle *)arg1 ;
-(IMHandle *)loginHandle;
-(id)loginIMHandle;
-(BOOL)supportsRegistration;
@end

