/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:01 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProxy.h>

@class NSArray, NSInvocation;

@interface FPFrameworkOverridesIterator : NSProxy {

	NSArray* _overrides;
	/*^block*/id _noSuitableModuleFoundHandler;
	unsigned long long _currentIndex;
	NSInvocation* _invocation;

}
+(void)addOverride:(id)arg1 ;
+(void)removeOverride:(id)arg1 ;
+(id)newIteratorWithNotFoundHandler:(/*^block*/id)arg1 ;
+(id)allOverrides;
+(id)overrideDirectoryURL;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)finish;
-(id)initWithOverrides:(id)arg1 noSuitableModuleFoundHandler:(/*^block*/id)arg2 ;
-(void)callNextOverrides;
@end

