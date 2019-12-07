/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:15 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <libobjc.A.dylib/SAServerBoundCommand.h>

@class NSArray, NSString;

@interface CFBSBatteryStatusCommandCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSArray * batteryStatuses; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)command;
+(id)aceObjectWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)commandWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)batteryStatuses;
-(void)setBatteryStatuses:(NSArray *)arg1 ;
@end
