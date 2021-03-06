/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface AKDeveloperTeam : NSObject <NSSecureCoding> {

	NSString* _userIdentifier;
	NSString* _teamID;
	NSString* _privateEmail;
	NSDictionary* _apps;

}

@property (nonatomic,copy) NSString * userIdentifier;              //@synthesize userIdentifier=_userIdentifier - In the implementation block
@property (nonatomic,copy) NSString * teamID;                      //@synthesize teamID=_teamID - In the implementation block
@property (nonatomic,copy) NSString * privateEmail;                //@synthesize privateEmail=_privateEmail - In the implementation block
@property (nonatomic,copy) NSDictionary * apps;                    //@synthesize apps=_apps - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)setUserIdentifier:(NSString *)arg1 ;
-(NSString *)userIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)teamID;
-(NSDictionary *)apps;
-(void)setApps:(NSDictionary *)arg1 ;
-(void)setTeamID:(NSString *)arg1 ;
-(id)initWithResponseInfo:(id)arg1 ;
-(NSString *)privateEmail;
-(void)setPrivateEmail:(NSString *)arg1 ;
@end

