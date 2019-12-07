/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:46 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class HDProfile, NSUUID, NSObject;

@interface HDStaticSyncTask : NSObject {

	HDProfile* _profile;
	unsigned long long _options;
	NSUUID* _storeIdentifier;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,__weak,readonly) HDProfile * profile;                      //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                      //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) NSUUID * storeIdentifier;                        //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(NSObject*<OS_dispatch_queue>)queue;
-(unsigned long long)options;
-(HDProfile *)profile;
-(id)runWithCompletion:(/*^block*/id)arg1 ;
-(NSUUID *)storeIdentifier;
-(id)initWithProfile:(id)arg1 options:(unsigned long long)arg2 storeIdentifier:(id)arg3 ;
@end
