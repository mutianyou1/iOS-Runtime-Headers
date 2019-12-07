/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:56 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMNetworkVPNDeclaration_VendorConfig : CEMPayloadBase {

	NSString* _payloadRealm;
	NSString* _payloadRole;
	NSString* _payloadGroup;
	NSString* _payloadLoginGroupOrDomain;

}

@property (nonatomic,copy) NSString * payloadRealm;                           //@synthesize payloadRealm=_payloadRealm - In the implementation block
@property (nonatomic,copy) NSString * payloadRole;                            //@synthesize payloadRole=_payloadRole - In the implementation block
@property (nonatomic,copy) NSString * payloadGroup;                           //@synthesize payloadGroup=_payloadGroup - In the implementation block
@property (nonatomic,copy) NSString * payloadLoginGroupOrDomain;              //@synthesize payloadLoginGroupOrDomain=_payloadLoginGroupOrDomain - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildRequiredOnly;
+(id)buildWithRealm:(id)arg1 withRole:(id)arg2 withGroup:(id)arg3 withLoginGroupOrDomain:(id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadRealm:(NSString *)arg1 ;
-(void)setPayloadRole:(NSString *)arg1 ;
-(void)setPayloadGroup:(NSString *)arg1 ;
-(void)setPayloadLoginGroupOrDomain:(NSString *)arg1 ;
-(NSString *)payloadRealm;
-(NSString *)payloadRole;
-(NSString *)payloadGroup;
-(NSString *)payloadLoginGroupOrDomain;
@end
