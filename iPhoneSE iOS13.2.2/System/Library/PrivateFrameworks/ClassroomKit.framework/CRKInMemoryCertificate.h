/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:00 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassroomKit/ClassroomKit-Structs.h>
#import <libobjc.A.dylib/CRKCertificate.h>

@class NSArray, NSString, NSData, NSDateInterval, CRKIdentityConfiguration;

@interface CRKInMemoryCertificate : NSObject <CRKCertificate> {

	CRKIdentityConfiguration* _configuration;

}

@property (nonatomic,copy,readonly) CRKIdentityConfiguration * configuration;                        //@synthesize configuration=_configuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * commonNames; 
@property (nonatomic,copy,readonly) NSString * fingerprint; 
@property (nonatomic,copy,readonly) NSData * dataRepresentation; 
@property (nonatomic,readonly) NSDateInterval * validityDateInterval; 
@property (getter=isTemporallyValid,nonatomic,readonly) BOOL temporallyValid; 
@property (getter=isCertificateAuthority,nonatomic,readonly) BOOL certificateAuthority; 
@property (nonatomic,readonly) unsigned hashingAlgorithm; 
@property (nonatomic,readonly) long long keySizeInBits; 
@property (nonatomic,readonly) SecCertificateRef underlyingCertificate; 
-(id)init;
-(id)initWithData:(id)arg1 ;
-(NSData *)dataRepresentation;
-(CRKIdentityConfiguration *)configuration;
-(id)initWithConfiguration:(id)arg1 ;
-(NSString *)fingerprint;
-(SecCertificateRef)underlyingCertificate;
-(unsigned)hashingAlgorithm;
-(long long)keySizeInBits;
-(NSArray *)commonNames;
-(NSDateInterval *)validityDateInterval;
-(BOOL)isTemporallyValid;
-(BOOL)isCertificateAuthority;
@end

