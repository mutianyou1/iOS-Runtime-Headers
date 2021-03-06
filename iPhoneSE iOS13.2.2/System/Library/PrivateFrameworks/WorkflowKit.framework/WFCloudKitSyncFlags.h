/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:22 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WFCloudKitItem.h>

@class CKRecordID, NSString;

@interface WFCloudKitSyncFlags : NSObject <WFCloudKitItem> {

	BOOL _migratedVoiceShortcuts;
	CKRecordID* _identifier;

}

@property (assign,nonatomic) BOOL migratedVoiceShortcuts;              //@synthesize migratedVoiceShortcuts=_migratedVoiceShortcuts - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CKRecordID * identifier;                //@synthesize identifier=_identifier - In the implementation block
+(id)properties;
+(id)recordType;
+(id)recordIDWithZoneID:(id)arg1 ;
-(CKRecordID *)identifier;
-(id)initWithZoneID:(id)arg1 ;
-(BOOL)migratedVoiceShortcuts;
-(void)setMigratedVoiceShortcuts:(BOOL)arg1 ;
@end

