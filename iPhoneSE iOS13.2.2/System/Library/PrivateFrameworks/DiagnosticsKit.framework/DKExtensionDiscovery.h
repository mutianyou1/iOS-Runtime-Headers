/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:10 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DKExtensionRegistry, OS_dispatch_queue;
#import <DiagnosticsKit/DiagnosticsKit-Structs.h>
@class NSObject, NSCondition, NSSet, NSString;

@interface DKExtensionDiscovery : NSObject {

	BOOL _discoveryComplete;
	id<DKExtensionRegistry> _registry;
	NSString* _bundleIdentifier;
	NSObject*<OS_dispatch_queue> _discoveryQueue;
	NSCondition* _discoveryLock;
	NSSet* _services;

}

@property (nonatomic,retain) id<DKExtensionRegistry> registry;                         //@synthesize registry=_registry - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> discoveryQueue;              //@synthesize discoveryQueue=_discoveryQueue - In the implementation block
@property (nonatomic,retain) NSCondition * discoveryLock;                              //@synthesize discoveryLock=_discoveryLock - In the implementation block
@property (assign,nonatomic) BOOL discoveryComplete;                                   //@synthesize discoveryComplete=_discoveryComplete - In the implementation block
@property (nonatomic,retain) NSSet * services;                                         //@synthesize services=_services - In the implementation block
+(id)discoveryUsingExtensionRegistry:(id)arg1 services:(id)arg2 bundleIdentifier:(NSString*)arg3 ;
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSSet *)services;
-(void)waitUntilComplete;
-(void)setServices:(NSSet *)arg1 ;
-(id<DKExtensionRegistry>)registry;
-(void)setRegistry:(id<DKExtensionRegistry>)arg1 ;
-(NSObject*<OS_dispatch_queue>)discoveryQueue;
-(void)setDiscoveryQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSCondition *)discoveryLock;
-(void)setDiscoveryLock:(NSCondition *)arg1 ;
-(void)_beginExtensionDiscovery;
-(id)initWithExtensionRegistry:(id)arg1 services:(id)arg2 bundleIdentifier:(NSString*)arg3 ;
-(void)setDiscoveryComplete:(BOOL)arg1 ;
-(void)_registerExtensions:(id)arg1 error:(id)arg2 ;
-(BOOL)discoveryComplete;
@end
