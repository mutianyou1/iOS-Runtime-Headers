/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:00 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKAccountWebServiceRequest.h>

@class NSString, NSURL, NSDate, NSTimeZone;

@interface PKAccountWebServiceExportTransactionDataRequest : PKAccountWebServiceRequest {

	NSString* _accountIdentifier;
	NSURL* _baseURL;
	NSString* _fileFormat;
	NSDate* _beginDate;
	NSDate* _endDate;
	NSTimeZone* _productTimeZone;

}

@property (nonatomic,copy) NSString * accountIdentifier;              //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,retain) NSURL * baseURL;                         //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,copy) NSString * fileFormat;                     //@synthesize fileFormat=_fileFormat - In the implementation block
@property (nonatomic,copy) NSDate * beginDate;                        //@synthesize beginDate=_beginDate - In the implementation block
@property (nonatomic,copy) NSDate * endDate;                          //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,copy) NSTimeZone * productTimeZone;              //@synthesize productTimeZone=_productTimeZone - In the implementation block
-(NSURL *)baseURL;
-(NSDate *)endDate;
-(void)setEndDate:(NSDate *)arg1 ;
-(NSString *)accountIdentifier;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(NSDate *)beginDate;
-(void)setBaseURL:(NSURL *)arg1 ;
-(NSString *)fileFormat;
-(id)_urlRequestWithAppleAccountInformation:(id)arg1 ;
-(NSTimeZone *)productTimeZone;
-(void)setBeginDate:(NSDate *)arg1 ;
-(void)setFileFormat:(NSString *)arg1 ;
-(void)setProductTimeZone:(NSTimeZone *)arg1 ;
@end

