/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:56 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray;

@interface CEMDeviceListRestrictionsCommand_StatusIntersectionDictionaryANYrestrictionname : CEMPayloadBase {

	NSArray* _statusValues;

}

@property (nonatomic,copy) NSArray * statusValues;              //@synthesize statusValues=_statusValues - In the implementation block
+(id)allowedStatusKeys;
+(id)buildWithValues:(id)arg1 ;
+(id)buildRequiredOnlyWithValues:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayload;
-(void)setStatusValues:(NSArray *)arg1 ;
-(NSArray *)statusValues;
@end

