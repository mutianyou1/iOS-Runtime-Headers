/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:37 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <RunningBoardServices/RBSGrant.h>

@protocol OS_xpc_object;
@class NSString, NSObject, NSArray;

@interface RBSHereditaryGrant : RBSGrant {

	NSString* _endowmentNamespace;
	NSString* _sourceEnvironment;
	NSObject*<OS_xpc_object> _encodedEndowment;
	NSArray* _attributes;

}

@property (nonatomic,copy,readonly) NSString * endowmentNamespace;                     //@synthesize endowmentNamespace=_endowmentNamespace - In the implementation block
@property (nonatomic,copy,readonly) NSString * sourceEnvironment;                      //@synthesize sourceEnvironment=_sourceEnvironment - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> encodedEndowment;              //@synthesize encodedEndowment=_encodedEndowment - In the implementation block
@property (nonatomic,readonly) NSArray * attributes;                                   //@synthesize attributes=_attributes - In the implementation block
+(id)grantWithNamespace:(NSString*)arg1 endowment:(NSObject*)arg2 attributes:(id)arg3 ;
+(id)grantWithNamespace:(NSString*)arg1 sourceEnvironment:(id)arg2 attributes:(id)arg3 ;
+(id)grantWithNamespace:(NSString*)arg1 sourceEnvironment:(id)arg2 endowment:(NSObject*)arg3 attributes:(id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSArray *)attributes;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(NSString *)endowmentNamespace;
-(NSObject*<OS_xpc_object>)encodedEndowment;
-(id)_initWithNamespace:(NSString*)arg1 sourceEnvironment:(id)arg2 endowment:(NSObject*)arg3 attributes:(id)arg4 ;
-(NSString *)sourceEnvironment;
@end
