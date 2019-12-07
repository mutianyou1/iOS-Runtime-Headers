/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:10 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementProtocol.framework/RemoteManagementProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteManagementProtocol/RemoteManagementProtocol-Structs.h>
#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSArray, RMProtocolSupportedFeatures, RMProtocolSupportedPayloads;

@interface RMProtocolClientCapabilitiesRequest : RMModelPayloadBase {

	NSArray* _requestSupportedVersions;
	RMProtocolSupportedFeatures* _requestSupportedFeatures;
	RMProtocolSupportedPayloads* _requestSupportedPayloads;

}

@property (nonatomic,copy) NSArray * requestSupportedVersions;                                  //@synthesize requestSupportedVersions=_requestSupportedVersions - In the implementation block
@property (nonatomic,copy) RMProtocolSupportedFeatures * requestSupportedFeatures;              //@synthesize requestSupportedFeatures=_requestSupportedFeatures - In the implementation block
@property (nonatomic,copy) RMProtocolSupportedPayloads * requestSupportedPayloads;              //@synthesize requestSupportedPayloads=_requestSupportedPayloads - In the implementation block
+(id)requestWithSupportedVersions:(id)arg1 supportedFeatures:(id)arg2 supportedPayloads:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(id)serializePayloadWithType:(short)arg1 ;
-(void)setRequestSupportedVersions:(NSArray *)arg1 ;
-(void)setRequestSupportedFeatures:(RMProtocolSupportedFeatures *)arg1 ;
-(void)setRequestSupportedPayloads:(RMProtocolSupportedPayloads *)arg1 ;
-(NSArray *)requestSupportedVersions;
-(RMProtocolSupportedFeatures *)requestSupportedFeatures;
-(RMProtocolSupportedPayloads *)requestSupportedPayloads;
@end
