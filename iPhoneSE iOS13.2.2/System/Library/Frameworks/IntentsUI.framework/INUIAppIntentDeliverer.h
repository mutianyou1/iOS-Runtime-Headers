/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:08 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/IntentsUI.framework/IntentsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group, OS_dispatch_queue, INUIIntentBackgroundHandlingAssertion;
@class BKSApplicationStateMonitor, BKSProcessAssertion, INWatchdogTimer, NSObject, AFSafetyBlock, NSString;

@interface INUIAppIntentDeliverer : NSObject {

	BKSApplicationStateMonitor* _appStateMonitor;
	BKSProcessAssertion* _backgroundLaunchAssertion;
	INWatchdogTimer* _assertionTimer;
	NSObject*<OS_dispatch_group> _assertionSetupGroup;
	NSObject*<OS_dispatch_queue> _queue;
	INWatchdogTimer* _requestTimer;
	AFSafetyBlock* _requestCompletionBlock;
	id<INUIIntentBackgroundHandlingAssertion> _intentBackgroundHandlingAssertion;
	NSString* _bundleIdentifier;

}

@property (nonatomic,copy,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
+(id)alloc;
-(id)init;
-(NSString *)bundleIdentifier;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(void)_invalidateAssertionTimer;
-(void)_invalidateBackboardServices;
-(void)_processAssertionWasAcquired:(BOOL)arg1 ;
-(void)_processAssertionWasInvalidatedWithCompletion:(/*^block*/id)arg1 ;
-(void)processAssertionWasInvalidatedWithCompletion:(/*^block*/id)arg1 ;
-(void)deliverIntent:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)invalidateIntentDelivery;
-(void)_handleSuccessfulAppLaunchForBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_startRequestTimerWithCompletion:(/*^block*/id)arg1 ;
-(void)_invalidateRequestTimer;
-(void)_invalidateIntentBackgroundHandlingAssertion;
@end

