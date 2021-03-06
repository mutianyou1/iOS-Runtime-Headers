/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:12 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAML/SAMLBaseElement.h>

@class NSString, NSNumber, NSData;

@interface SAMLX509Data : SAMLBaseElement

@property (nonatomic,readonly) NSString * issuerName; 
@property (nonatomic,readonly) NSNumber * serialNumber; 
@property (nonatomic,readonly) NSData * ski; 
@property (nonatomic,readonly) NSString * subjectName; 
@property (nonatomic,readonly) NSData * certificate; 
@property (nonatomic,readonly) NSData * crl; 
+(id)createElement:(id*)arg1 ;
-(NSData *)certificate;
-(NSNumber *)serialNumber;
-(NSString *)issuerName;
-(NSData *)ski;
-(NSString *)subjectName;
-(NSData *)crl;
@end

