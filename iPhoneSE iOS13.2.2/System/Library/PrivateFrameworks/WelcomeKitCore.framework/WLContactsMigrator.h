/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:41 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WLDataclassMigrating.h>

@class CNContactStore, NSString;

@interface WLContactsMigrator : NSObject <WLDataclassMigrating> {

	CNContactStore* _contactStore;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)contentType;
-(id)init;
-(id)contentType;
-(id)dataType;
-(BOOL)accountBased;
-(void)importRecordData:(id)arg1 summary:(id)arg2 account:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)storeRecordDataInDatabase;
-(void)estimateItemSizeForSummary:(id)arg1 account:(id)arg2 ;
-(id)_vcardDataWithoutCustomFieldsFromVcardData:(id)arg1 ;
@end

