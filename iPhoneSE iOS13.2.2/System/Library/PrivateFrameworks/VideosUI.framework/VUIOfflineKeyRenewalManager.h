/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:37 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TVPStateMachine, NSMutableArray, NSTimer, TVPContentKeySession;

@interface VUIOfflineKeyRenewalManager : NSObject {

	BOOL _networkErrorOccurredDuringInvalidation;
	TVPStateMachine* _stateMachine;
	NSMutableArray* _keyLoaders;
	NSTimer* _keyRenewalTimer;
	NSTimer* _expirationTimer;
	TVPContentKeySession* _contentKeySession;
	unsigned long long _backgroundTaskIdentifier;

}

@property (nonatomic,retain) TVPStateMachine * stateMachine;                           //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,retain) NSMutableArray * keyLoaders;                              //@synthesize keyLoaders=_keyLoaders - In the implementation block
@property (assign,nonatomic) BOOL networkErrorOccurredDuringInvalidation;              //@synthesize networkErrorOccurredDuringInvalidation=_networkErrorOccurredDuringInvalidation - In the implementation block
@property (nonatomic,retain) NSTimer * keyRenewalTimer;                                //@synthesize keyRenewalTimer=_keyRenewalTimer - In the implementation block
@property (nonatomic,retain) NSTimer * expirationTimer;                                //@synthesize expirationTimer=_expirationTimer - In the implementation block
@property (nonatomic,retain) TVPContentKeySession * contentKeySession;                 //@synthesize contentKeySession=_contentKeySession - In the implementation block
@property (assign,nonatomic) unsigned long long backgroundTaskIdentifier;              //@synthesize backgroundTaskIdentifier=_backgroundTaskIdentifier - In the implementation block
+(id)sharedInstance;
-(id)init;
-(TVPStateMachine *)stateMachine;
-(void)setStateMachine:(TVPStateMachine *)arg1 ;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(TVPContentKeySession *)contentKeySession;
-(void)setBackgroundTaskIdentifier:(unsigned long long)arg1 ;
-(unsigned long long)backgroundTaskIdentifier;
-(NSTimer *)expirationTimer;
-(void)_registerStateMachineHandlers;
-(void)setContentKeySession:(TVPContentKeySession *)arg1 ;
-(void)setExpirationTimer:(NSTimer *)arg1 ;
-(void)updateKeyRenewalAndExpiration;
-(void)_networkReachbilityDidChange:(id)arg1 ;
-(NSMutableArray *)keyLoaders;
-(void)setNetworkErrorOccurredDuringInvalidation:(BOOL)arg1 ;
-(BOOL)networkErrorOccurredDuringInvalidation;
-(void)setKeyLoaders:(NSMutableArray *)arg1 ;
-(void)_isPlaybackUIBeingShownDidChange:(id)arg1 ;
-(void)_expirationTimerDidFire:(id)arg1 ;
-(void)setKeyRenewalTimer:(NSTimer *)arg1 ;
-(void)_sendRenewalRequestForFirstArray:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSTimer *)keyRenewalTimer;
-(void)_renewalTimerDidFire:(id)arg1 ;
@end
