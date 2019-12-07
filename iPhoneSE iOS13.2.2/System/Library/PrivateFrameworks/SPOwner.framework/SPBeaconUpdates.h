/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:24 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SPOwner/SPOwner-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SPBeaconUpdates : NSObject <NSCopying, NSSecureCoding> {

	NSString* _name;
	long long _roleId;
	NSString* _emoji;

}

@property (nonatomic,copy) NSString * name;                 //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) long long roleId;              //@synthesize roleId=_roleId - In the implementation block
@property (nonatomic,copy) NSString * emoji;                //@synthesize emoji=_emoji - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)debugDescription;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)emoji;
-(void)setEmoji:(NSString *)arg1 ;
-(void)setRoleId:(long long)arg1 ;
-(long long)roleId;
-(id)initWithName:(id)arg1 roleId:(long long)arg2 ;
@end
