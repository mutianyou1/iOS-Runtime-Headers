/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:43 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMAccountController.h>

@class NSMutableDictionary;

@interface IMSimulatedAccountController : IMAccountController {

	NSMutableDictionary* _simulatedAccountsPerService;

}
-(id)init;
-(id)activeAccounts;
-(id)activeIMessageAccount;
-(id)activeSMSAccount;
-(void)setSimulatedAccounts:(id)arg1 forServiceNamed:(id)arg2 ;
@end

