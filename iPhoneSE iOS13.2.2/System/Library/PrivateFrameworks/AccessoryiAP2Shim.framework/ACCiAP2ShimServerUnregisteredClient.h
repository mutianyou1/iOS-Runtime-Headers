/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:58 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AccessoryiAP2Shim.framework/AccessoryiAP2Shim
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AccessoryiAP2Shim/AccessoryiAP2Shim-Structs.h>
@class NSString;

@interface ACCiAP2ShimServerUnregisteredClient : NSObject {

	int _processId;
	NSString* _bundleId;
	SBSProcessAssertionRef _processAssertion;
	long long _processAssertionStartTime;

}

@property (nonatomic,readonly) SBSProcessAssertionRef processAssertion;              //@synthesize processAssertion=_processAssertion - In the implementation block
@property (nonatomic,readonly) long long processAssertionStartTime;                  //@synthesize processAssertionStartTime=_processAssertionStartTime - In the implementation block
@property (nonatomic,readonly) NSString * bundleId;                                  //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,readonly) int processId;                                        //@synthesize processId=_processId - In the implementation block
-(NSString *)bundleId;
-(int)processId;
-(id)initWithBundleId:(id)arg1 ;
-(SBSProcessAssertionRef)processAssertion;
-(int)_getProcessId;
-(id)_applicationInfoForBundleIDSync:(id)arg1 ;
-(void)takeProcessAssertion:(id)arg1 ;
-(void)releaseProcessAssertion;
-(long long)processAssertionStartTime;
@end

