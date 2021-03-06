/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:33 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBDataPlanAlertItem.h>
#import <libobjc.A.dylib/SBDataPlanAlertActions.h>

@class NSURL;

@interface SBDataPlanAccountAlertItem : SBDataPlanAlertItem <SBDataPlanAlertActions> {

	NSURL* _accountURL;

}

@property (nonatomic,copy) NSURL * accountURL;              //@synthesize accountURL=_accountURL - In the implementation block
+(id)laterButtonTitle;
+(id)nowButtonTitle;
-(NSURL *)accountURL;
-(id)initWithAccountURL:(id)arg1 ;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(void)setAccountURL:(NSURL *)arg1 ;
-(void)notNow;
-(void)takeAction;
@end

