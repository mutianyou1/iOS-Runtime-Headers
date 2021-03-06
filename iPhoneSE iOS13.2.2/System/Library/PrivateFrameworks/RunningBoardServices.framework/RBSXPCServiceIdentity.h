/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:37 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSXPCSecureCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class RBSXPCServiceDefinition, NSString, RBSProcessInstance;

@interface RBSXPCServiceIdentity : NSObject <BSXPCSecureCoding, NSSecureCoding> {

	RBSXPCServiceDefinition* _definition;
	NSString* _sessionID;
	RBSProcessInstance* _host;

}

@property (nonatomic,readonly) RBSXPCServiceDefinition * definition;              //@synthesize definition=_definition - In the implementation block
@property (nonatomic,copy,readonly) NSString * sessionID;                         //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) RBSProcessInstance * host;                         //@synthesize host=_host - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(BOOL)supportsBSXPCSecureCoding;
+(id)identityWithDefinition:(id)arg1 sessionID:(id)arg2 host:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(RBSProcessInstance *)host;
-(RBSXPCServiceDefinition *)definition;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(NSString *)sessionID;
@end

