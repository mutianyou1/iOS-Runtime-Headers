/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:07 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class REMAccount;

@interface REMAccountGroupContext : NSObject {

	REMAccount* _account;

}

@property (nonatomic,retain) REMAccount * account;              //@synthesize account=_account - In the implementation block
-(REMAccount *)account;
-(void)setAccount:(REMAccount *)arg1 ;
-(id)initWithAccount:(id)arg1 ;
-(id)fetchGroupsWithError:(id*)arg1 ;
@end

