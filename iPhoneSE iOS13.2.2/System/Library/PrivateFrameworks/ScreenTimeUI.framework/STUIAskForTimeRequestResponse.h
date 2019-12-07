/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:37 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenTimeUI/ScreenTimeUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber;

@interface STUIAskForTimeRequestResponse : NSObject <NSCopying> {

	unsigned long long _usageType;
	NSString* _identifier;
	NSString* _budgetedIdentifier;
	NSNumber* _requestingUserDSID;

}

@property (assign,nonatomic) unsigned long long usageType;               //@synthesize usageType=_usageType - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * budgetedIdentifier;                //@synthesize budgetedIdentifier=_budgetedIdentifier - In the implementation block
@property (nonatomic,retain) NSNumber * requestingUserDSID;              //@synthesize requestingUserDSID=_requestingUserDSID - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(unsigned long long)usageType;
-(NSString *)budgetedIdentifier;
-(id)initWithRequestResponse:(id)arg1 ;
-(void)setUsageType:(unsigned long long)arg1 ;
-(void)setBudgetedIdentifier:(NSString *)arg1 ;
-(NSNumber *)requestingUserDSID;
-(void)setRequestingUserDSID:(NSNumber *)arg1 ;
@end
