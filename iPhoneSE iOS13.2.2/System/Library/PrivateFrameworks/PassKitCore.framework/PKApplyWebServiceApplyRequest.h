/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:59 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKApplyWebServiceRequest.h>

@class NSString, NSArray, NSURL;

@interface PKApplyWebServiceApplyRequest : PKApplyWebServiceRequest {

	BOOL _isInstallment;
	NSString* _applicationIdentifier;
	unsigned long long _featureIdentifier;
	NSArray* _certificates;
	NSURL* _baseURL;
	NSString* _coreIDVNextStepToken;
	NSString* _previousContextIdentifier;
	NSString* _actionIdentifier;

}

@property (nonatomic,copy) NSString * applicationIdentifier;                    //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long featureIdentifier;              //@synthesize featureIdentifier=_featureIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * certificates;                              //@synthesize certificates=_certificates - In the implementation block
@property (nonatomic,retain) NSURL * baseURL;                                   //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,copy) NSString * coreIDVNextStepToken;                     //@synthesize coreIDVNextStepToken=_coreIDVNextStepToken - In the implementation block
@property (nonatomic,copy) NSString * previousContextIdentifier;                //@synthesize previousContextIdentifier=_previousContextIdentifier - In the implementation block
@property (nonatomic,copy) NSString * actionIdentifier;                         //@synthesize actionIdentifier=_actionIdentifier - In the implementation block
@property (assign,nonatomic) BOOL isInstallment;                                //@synthesize isInstallment=_isInstallment - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)baseURL;
-(NSString *)applicationIdentifier;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(NSArray *)certificates;
-(NSString *)actionIdentifier;
-(void)setBaseURL:(NSURL *)arg1 ;
-(unsigned long long)featureIdentifier;
-(id)_urlRequestWithAppleAccountInformation:(id)arg1 ;
-(void)setFeatureIdentifier:(unsigned long long)arg1 ;
-(void)setCertificates:(NSArray *)arg1 ;
-(NSString *)coreIDVNextStepToken;
-(void)setCoreIDVNextStepToken:(NSString *)arg1 ;
-(NSString *)previousContextIdentifier;
-(void)setPreviousContextIdentifier:(NSString *)arg1 ;
-(void)setActionIdentifier:(NSString *)arg1 ;
-(BOOL)isInstallment;
-(void)setIsInstallment:(BOOL)arg1 ;
@end
