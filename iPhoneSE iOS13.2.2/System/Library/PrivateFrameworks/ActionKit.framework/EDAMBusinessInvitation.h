/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:50 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMBusinessInvitation : FATObject {

	NSNumber* _businessId;
	NSString* _email;
	NSNumber* _role;
	NSNumber* _status;
	NSNumber* _requesterId;
	NSNumber* _fromWorkChat;
	NSNumber* _created;

}

@property (nonatomic,retain) NSNumber * businessId;                //@synthesize businessId=_businessId - In the implementation block
@property (nonatomic,retain) NSString * email;                     //@synthesize email=_email - In the implementation block
@property (nonatomic,retain) NSNumber * role;                      //@synthesize role=_role - In the implementation block
@property (nonatomic,retain) NSNumber * status;                    //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSNumber * requesterId;               //@synthesize requesterId=_requesterId - In the implementation block
@property (nonatomic,retain) NSNumber * fromWorkChat;              //@synthesize fromWorkChat=_fromWorkChat - In the implementation block
@property (nonatomic,retain) NSNumber * created;                   //@synthesize created=_created - In the implementation block
+(id)structName;
+(id)structFields;
-(NSNumber *)role;
-(NSNumber *)status;
-(void)setStatus:(NSNumber *)arg1 ;
-(NSString *)email;
-(void)setEmail:(NSString *)arg1 ;
-(void)setRole:(NSNumber *)arg1 ;
-(NSNumber *)created;
-(void)setCreated:(NSNumber *)arg1 ;
-(NSNumber *)businessId;
-(void)setBusinessId:(NSNumber *)arg1 ;
-(NSNumber *)requesterId;
-(void)setRequesterId:(NSNumber *)arg1 ;
-(NSNumber *)fromWorkChat;
-(void)setFromWorkChat:(NSNumber *)arg1 ;
@end
