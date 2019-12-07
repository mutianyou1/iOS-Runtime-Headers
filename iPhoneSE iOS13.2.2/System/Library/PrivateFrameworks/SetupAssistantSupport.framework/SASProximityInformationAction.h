/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:14 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantSupport.framework/SetupAssistantSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SetupAssistantSupport/SASProximityAction.h>

@class SASProximityInformation;

@interface SASProximityInformationAction : SASProximityAction {

	SASProximityInformation* _information;

}

@property (retain) SASProximityInformation * information;              //@synthesize information=_information - In the implementation block
+(unsigned long long)actionID;
-(id)init;
-(BOOL)hasResponse;
-(void)setInformation:(SASProximityInformation *)arg1 ;
-(SASProximityInformation *)information;
-(id)responsePayload;
-(void)setResponseFromData:(id)arg1 ;
@end
