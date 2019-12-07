/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:48 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AccessoryVoiceOver.framework/AccessoryVoiceOver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ACCVoiceOverAccessory : NSObject {

	BOOL _desiredVoiceOverState;
	NSString* _accessoryUID;

}

@property (nonatomic,retain) NSString * accessoryUID;                 //@synthesize accessoryUID=_accessoryUID - In the implementation block
@property (assign,nonatomic) BOOL desiredVoiceOverState;              //@synthesize desiredVoiceOverState=_desiredVoiceOverState - In the implementation block
-(NSString *)accessoryUID;
-(id)initWithAccessoryUID:(id)arg1 ;
-(void)setAccessoryUID:(NSString *)arg1 ;
-(BOOL)desiredVoiceOverState;
-(void)setDesiredVoiceOverState:(BOOL)arg1 ;
@end
