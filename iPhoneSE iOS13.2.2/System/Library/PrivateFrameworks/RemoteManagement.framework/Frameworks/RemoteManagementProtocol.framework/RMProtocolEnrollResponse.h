/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:10 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementProtocol.framework/RemoteManagementProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteManagementProtocol/RemoteManagementProtocol-Structs.h>
#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSString, RMProtocolOrganizationDetails, RMProtocolSupportedFeatures;

@interface RMProtocolEnrollResponse : RMModelPayloadBase {

	NSString* _responsePushTopic;
	NSString* _responsePushEnvironment;
	NSString* _responseOrganizationDetailsToken;
	RMProtocolOrganizationDetails* _responseOrganizationDetails;
	NSString* _responseCapabilitiesToken;
	NSString* _responseVersion;
	RMProtocolSupportedFeatures* _responseSupportedFeatures;

}

@property (nonatomic,copy) NSString * responsePushTopic;                                             //@synthesize responsePushTopic=_responsePushTopic - In the implementation block
@property (nonatomic,copy) NSString * responsePushEnvironment;                                       //@synthesize responsePushEnvironment=_responsePushEnvironment - In the implementation block
@property (nonatomic,copy) NSString * responseOrganizationDetailsToken;                              //@synthesize responseOrganizationDetailsToken=_responseOrganizationDetailsToken - In the implementation block
@property (nonatomic,copy) RMProtocolOrganizationDetails * responseOrganizationDetails;              //@synthesize responseOrganizationDetails=_responseOrganizationDetails - In the implementation block
@property (nonatomic,copy) NSString * responseCapabilitiesToken;                                     //@synthesize responseCapabilitiesToken=_responseCapabilitiesToken - In the implementation block
@property (nonatomic,copy) NSString * responseVersion;                                               //@synthesize responseVersion=_responseVersion - In the implementation block
@property (nonatomic,copy) RMProtocolSupportedFeatures * responseSupportedFeatures;                  //@synthesize responseSupportedFeatures=_responseSupportedFeatures - In the implementation block
+(id)requestWithPushTopic:(id)arg1 pushEnvironment:(id)arg2 organizationDetailsToken:(id)arg3 organizationDetails:(id)arg4 capabilitiesToken:(id)arg5 version:(id)arg6 supportedFeatures:(id)arg7 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(id)serializePayloadWithType:(short)arg1 ;
-(void)setResponsePushTopic:(NSString *)arg1 ;
-(void)setResponsePushEnvironment:(NSString *)arg1 ;
-(void)setResponseOrganizationDetailsToken:(NSString *)arg1 ;
-(void)setResponseOrganizationDetails:(RMProtocolOrganizationDetails *)arg1 ;
-(void)setResponseCapabilitiesToken:(NSString *)arg1 ;
-(void)setResponseVersion:(NSString *)arg1 ;
-(void)setResponseSupportedFeatures:(RMProtocolSupportedFeatures *)arg1 ;
-(NSString *)responsePushTopic;
-(NSString *)responsePushEnvironment;
-(NSString *)responseOrganizationDetailsToken;
-(RMProtocolOrganizationDetails *)responseOrganizationDetails;
-(NSString *)responseCapabilitiesToken;
-(NSString *)responseVersion;
-(RMProtocolSupportedFeatures *)responseSupportedFeatures;
@end

