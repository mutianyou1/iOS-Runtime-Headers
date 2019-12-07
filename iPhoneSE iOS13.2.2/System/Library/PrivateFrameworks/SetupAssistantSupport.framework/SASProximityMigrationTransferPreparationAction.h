/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:14 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantSupport.framework/SetupAssistantSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SetupAssistantSupport/SASProximityAction.h>

@class NSString;

@interface SASProximityMigrationTransferPreparationAction : SASProximityAction {

	NSString* _deviceName;

}

@property (nonatomic,retain) NSString * deviceName;              //@synthesize deviceName=_deviceName - In the implementation block
+(unsigned long long)actionID;
+(id)actionFromDictionary:(id)arg1 ;
-(void)setDeviceName:(NSString *)arg1 ;
-(NSString *)deviceName;
-(BOOL)hasResponse;
-(id)requestPayload;
@end
