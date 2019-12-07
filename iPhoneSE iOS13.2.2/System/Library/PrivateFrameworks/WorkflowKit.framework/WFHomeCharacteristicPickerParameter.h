/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:20 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray, HMService, NSString;

@interface WFHomeCharacteristicPickerParameter : WFEnumerationParameter {

	NSArray* _possibleStates;
	HMService* _service;
	NSString* _homeIdentifier;

}

@property (nonatomic,retain) HMService * service;                     //@synthesize service=_service - In the implementation block
@property (nonatomic,copy) NSString * homeIdentifier;                 //@synthesize homeIdentifier=_homeIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * possibleStates;              //@synthesize possibleStates=_possibleStates - In the implementation block
-(BOOL)isHidden;
-(HMService *)service;
-(NSArray *)possibleStates;
-(void)setService:(HMService *)arg1 ;
-(NSString *)homeIdentifier;
-(void)setHomeIdentifier:(NSString *)arg1 ;
-(Class)singleStateClass;
-(id)localizedLabelForPossibleState:(id)arg1 ;
-(id)defaultSerializedRepresentation;
-(void)setService:(id)arg1 homeIdentifier:(id)arg2 ;
-(void)updatePossibleStates;
@end
