/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:46 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NewsServicesInternal.framework/NewsServicesInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSSNewsAnalyticsSessionManager, NSSNewsAnalyticsUserIDProvider;
@interface NSSNewsAnalyticsEventAnnotator : NSObject {

	id<NSSNewsAnalyticsSessionManager> _sessionManager;
	id<NSSNewsAnalyticsUserIDProvider> _userIDProvider;

}

@property (nonatomic,__weak,readonly) id<NSSNewsAnalyticsSessionManager> sessionManager;              //@synthesize sessionManager=_sessionManager - In the implementation block
@property (nonatomic,readonly) id<NSSNewsAnalyticsUserIDProvider> userIDProvider;                     //@synthesize userIDProvider=_userIDProvider - In the implementation block
-(id)init;
-(id<NSSNewsAnalyticsSessionManager>)sessionManager;
-(id)initWithSessionManager:(id)arg1 userIDProvider:(id)arg2 ;
-(void)annotateEvent:(id)arg1 withOptions:(unsigned long long)arg2 ;
-(id<NSSNewsAnalyticsUserIDProvider>)userIDProvider;
@end
