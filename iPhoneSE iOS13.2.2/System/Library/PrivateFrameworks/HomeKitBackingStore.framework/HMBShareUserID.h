/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:36 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CKRecordID;

@interface HMBShareUserID : HMFObject <NSSecureCoding> {

	CKRecordID* _userRecordID;

}

@property (readonly) CKRecordID * userRecordID;              //@synthesize userRecordID=_userRecordID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CKRecordID *)userRecordID;
-(id)initWithUserRecordID:(id)arg1 ;
-(id)logIdentifier;
-(id)attributeDescriptions;
@end

