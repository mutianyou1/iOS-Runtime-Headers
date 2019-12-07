/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:59 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSDictionary;

@interface CRKIdentityServiceFetchCertificatesTaskResultObject : CATTaskResultObject {

	NSDictionary* _identityCertificateSetsByConsumerID;

}

@property (nonatomic,copy) NSDictionary * identityCertificateSetsByConsumerID;              //@synthesize identityCertificateSetsByConsumerID=_identityCertificateSetsByConsumerID - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)identityCertificateSetsByConsumerID;
-(void)setIdentityCertificateSetsByConsumerID:(NSDictionary *)arg1 ;
@end
