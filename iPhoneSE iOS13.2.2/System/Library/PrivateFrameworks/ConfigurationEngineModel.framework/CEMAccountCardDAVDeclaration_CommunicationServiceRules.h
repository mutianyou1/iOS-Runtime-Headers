/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:55 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class CEMAccountCardDAVDeclaration_CommunicationServiceRulesDefaultServiceHandlers;

@interface CEMAccountCardDAVDeclaration_CommunicationServiceRules : CEMPayloadBase {

	CEMAccountCardDAVDeclaration_CommunicationServiceRulesDefaultServiceHandlers* _payloadDefaultServiceHandlers;

}

@property (nonatomic,copy) CEMAccountCardDAVDeclaration_CommunicationServiceRulesDefaultServiceHandlers * payloadDefaultServiceHandlers;              //@synthesize payloadDefaultServiceHandlers=_payloadDefaultServiceHandlers - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildRequiredOnly;
+(id)buildWithDefaultServiceHandlers:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadDefaultServiceHandlers:(CEMAccountCardDAVDeclaration_CommunicationServiceRulesDefaultServiceHandlers *)arg1 ;
-(CEMAccountCardDAVDeclaration_CommunicationServiceRulesDefaultServiceHandlers *)payloadDefaultServiceHandlers;
@end
