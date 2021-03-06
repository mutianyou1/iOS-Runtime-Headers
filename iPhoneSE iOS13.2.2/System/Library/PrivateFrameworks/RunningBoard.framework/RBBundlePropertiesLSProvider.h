/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:19 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoard/RunningBoard-Structs.h>
#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol RBBundlePropertiesLSProviderDelegate;
@class NSCache, NSString;

@interface RBBundlePropertiesLSProvider : NSObject <LSApplicationWorkspaceObserverProtocol, BSDescriptionProviding> {

	NSCache* _propertiesByIdentity;
	id<RBBundlePropertiesLSProviderDelegate> _delegate;
	os_unfair_lock_s _lock;

}

@property (assign,nonatomic,__weak) id<RBBundlePropertiesLSProviderDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(id<RBBundlePropertiesLSProviderDelegate>)delegate;
-(void)setDelegate:(id<RBBundlePropertiesLSProviderDelegate>)arg1 ;
-(void)applicationsDidInstall:(id)arg1 ;
-(void)applicationsDidUninstall:(id)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)propertiesForIdentity:(id)arg1 ;
-(void)_removeCachedValuesForAppProxies:(id)arg1 ;
@end

