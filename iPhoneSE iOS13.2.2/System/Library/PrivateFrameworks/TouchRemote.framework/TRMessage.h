/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:29 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface TRMessage : NSObject <NSSecureCoding> {

	NSDictionary* _userInfo;

}

@property (nonatomic,retain) NSDictionary * userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(NSDictionary *)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
@end
