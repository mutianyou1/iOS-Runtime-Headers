/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:46 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDAssertion.h>

@class NSString;

@interface _HDCarouselSessionAssertion : HDAssertion {

	BOOL _supportsAOT;
	NSString* _applicationBundleIdentifier;

}

@property (nonatomic,readonly) NSString * applicationBundleIdentifier;              //@synthesize applicationBundleIdentifier=_applicationBundleIdentifier - In the implementation block
@property (assign,nonatomic) BOOL supportsAOT;                                      //@synthesize supportsAOT=_supportsAOT - In the implementation block
-(NSString *)applicationBundleIdentifier;
-(id)initWithOwnerIdentifier:(id)arg1 ;
-(BOOL)supportsAOT;
-(void)setSupportsAOT:(BOOL)arg1 ;
@end

