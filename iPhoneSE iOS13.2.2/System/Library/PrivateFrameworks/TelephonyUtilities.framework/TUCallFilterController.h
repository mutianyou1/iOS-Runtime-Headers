/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:18 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, TUCallFilterControllerActions;
@class NSObject;

@interface TUCallFilterController : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	id<TUCallFilterControllerActions> _actionsDelegate;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                    //@synthesize queue=_queue - In the implementation block
@property (nonatomic,__weak,readonly) id<TUCallFilterControllerActions> actionsDelegate;              //@synthesize actionsDelegate=_actionsDelegate - In the implementation block
@property (nonatomic,readonly) BOOL silenceUnknownCallersEnabled; 
-(NSObject*<OS_dispatch_queue>)queue;
-(id<TUCallFilterControllerActions>)actionsDelegate;
-(id)initWithActionsDelegate:(id)arg1 serialQueue:(id)arg2 ;
-(BOOL)isUnknownAddress:(id)arg1 normalizedAddress:(id)arg2 forBundleIdentifier:(id)arg3 ;
-(id)bundleIdentifierForDialRequest:(id)arg1 ;
-(BOOL)containsRestrictedHandle:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(id)policyForAddresses:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(BOOL)shouldRestrictAddresses:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(BOOL)willRestrictAddresses:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(BOOL)silenceUnknownCallersEnabled;
-(BOOL)isUnknownHandle:(id)arg1 ;
-(BOOL)shouldRestrictDialRequest:(id)arg1 ;
-(BOOL)shouldRestrictJoinConversationRequest:(id)arg1 ;
@end

