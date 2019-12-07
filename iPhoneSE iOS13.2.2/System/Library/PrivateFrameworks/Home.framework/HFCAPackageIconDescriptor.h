/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:28 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HFIconDescriptor.h>

@class NSString, NSDictionary;

@interface HFCAPackageIconDescriptor : NSObject <HFIconDescriptor> {

	BOOL _shouldForceLTR;
	NSString* _packageIdentifier;
	NSString* _state;
	NSDictionary* _iconModifiers;

}

@property (nonatomic,readonly) NSString * packageIdentifier;              //@synthesize packageIdentifier=_packageIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * state;                          //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) NSDictionary * iconModifiers;              //@synthesize iconModifiers=_iconModifiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) BOOL shouldForceLTR;                       //@synthesize shouldForceLTR=_shouldForceLTR - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)identifier;
-(NSString *)state;
-(NSString *)packageIdentifier;
-(BOOL)shouldForceLTR;
-(id)iconDescriptorByMergingWithIconDescriptor:(id)arg1 ;
-(id)initWithPackageIdentifier:(id)arg1 state:(id)arg2 ;
-(id)initWithPackageIdentifier:(id)arg1 state:(id)arg2 modifiers:(id)arg3 ;
-(NSDictionary *)iconModifiers;
-(id)initWithPackageIdentifier:(id)arg1 ;
@end
