/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:26 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthRecordsPlugin/HDClinicalIngestionPerAccountOperation.h>

@class HDClinicalAccount;

@interface HDClinicalIngestionIsAccountFetchableOperation : HDClinicalIngestionPerAccountOperation {

	BOOL _accountFetchable;
	HDClinicalAccount* _refreshedAccount;

}

@property (assign,nonatomic) BOOL accountFetchable;                             //@synthesize accountFetchable=_accountFetchable - In the implementation block
@property (nonatomic,retain) HDClinicalAccount * refreshedAccount;              //@synthesize refreshedAccount=_refreshedAccount - In the implementation block
-(void)main;
-(BOOL)_refreshAccountWithErrorString:(id*)arg1 ;
-(BOOL)_verifyShouldFetchWithErrorString:(id*)arg1 ;
-(void)setAccountFetchable:(BOOL)arg1 ;
-(void)setRefreshedAccount:(HDClinicalAccount *)arg1 ;
-(HDClinicalAccount *)refreshedAccount;
-(BOOL)accountFetchable;
@end

